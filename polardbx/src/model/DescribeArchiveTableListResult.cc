/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/polardbx/model/DescribeArchiveTableListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeArchiveTableListResult::DescribeArchiveTableListResult() :
	ServiceResult()
{}

DescribeArchiveTableListResult::DescribeArchiveTableListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeArchiveTableListResult::~DescribeArchiveTableListResult()
{}

void DescribeArchiveTableListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	if(!dataNode["PageIndex"].isNull())
		data_.pageIndex = std::stol(dataNode["PageIndex"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TobeArchivedConut"].isNull())
		data_.tobeArchivedConut = std::stoi(dataNode["TobeArchivedConut"].asString());
	if(!dataNode["RunningCount"].isNull())
		data_.runningCount = std::stoi(dataNode["RunningCount"].asString());
	if(!dataNode["SuccessCount"].isNull())
		data_.successCount = std::stoi(dataNode["SuccessCount"].asString());
	if(!dataNode["PausedCount"].isNull())
		data_.pausedCount = std::stoi(dataNode["PausedCount"].asString());
	auto allTablesNode = dataNode["Tables"]["ArchiveTable"];
	for (auto dataNodeTablesArchiveTable : allTablesNode)
	{
		Data::ArchiveTable archiveTableObject;
		if(!dataNodeTablesArchiveTable["SchemaName"].isNull())
			archiveTableObject.schemaName = dataNodeTablesArchiveTable["SchemaName"].asString();
		if(!dataNodeTablesArchiveTable["TableName"].isNull())
			archiveTableObject.tableName = dataNodeTablesArchiveTable["TableName"].asString();
		if(!dataNodeTablesArchiveTable["CreatedDate"].isNull())
			archiveTableObject.createdDate = std::stol(dataNodeTablesArchiveTable["CreatedDate"].asString());
		if(!dataNodeTablesArchiveTable["SpaceSize"].isNull())
			archiveTableObject.spaceSize = dataNodeTablesArchiveTable["SpaceSize"].asString();
		if(!dataNodeTablesArchiveTable["FileCount"].isNull())
			archiveTableObject.fileCount = std::stoi(dataNodeTablesArchiveTable["FileCount"].asString());
		if(!dataNodeTablesArchiveTable["LastSuccessArchiveTime"].isNull())
			archiveTableObject.lastSuccessArchiveTime = std::stol(dataNodeTablesArchiveTable["LastSuccessArchiveTime"].asString());
		if(!dataNodeTablesArchiveTable["ArchiveStatus"].isNull())
			archiveTableObject.archiveStatus = dataNodeTablesArchiveTable["ArchiveStatus"].asString();
		data_.tables.push_back(archiveTableObject);
	}

}

DescribeArchiveTableListResult::Data DescribeArchiveTableListResult::getData()const
{
	return data_;
}

