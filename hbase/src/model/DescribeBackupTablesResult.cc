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

#include <alibabacloud/hbase/model/DescribeBackupTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeBackupTablesResult::DescribeBackupTablesResult() :
	ServiceResult()
{}

DescribeBackupTablesResult::DescribeBackupTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupTablesResult::~DescribeBackupTablesResult()
{}

void DescribeBackupTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackupRecordsNode = value["BackupRecords"]["BackupRecord"];
	for (auto valueBackupRecordsBackupRecord : allBackupRecordsNode)
	{
		BackupRecord backupRecordsObject;
		if(!valueBackupRecordsBackupRecord["Table"].isNull())
			backupRecordsObject.table = valueBackupRecordsBackupRecord["Table"].asString();
		if(!valueBackupRecordsBackupRecord["State"].isNull())
			backupRecordsObject.state = valueBackupRecordsBackupRecord["State"].asString();
		if(!valueBackupRecordsBackupRecord["StartTime"].isNull())
			backupRecordsObject.startTime = valueBackupRecordsBackupRecord["StartTime"].asString();
		if(!valueBackupRecordsBackupRecord["EndTime"].isNull())
			backupRecordsObject.endTime = valueBackupRecordsBackupRecord["EndTime"].asString();
		if(!valueBackupRecordsBackupRecord["Process"].isNull())
			backupRecordsObject.process = valueBackupRecordsBackupRecord["Process"].asString();
		if(!valueBackupRecordsBackupRecord["DataSize"].isNull())
			backupRecordsObject.dataSize = valueBackupRecordsBackupRecord["DataSize"].asString();
		if(!valueBackupRecordsBackupRecord["Speed"].isNull())
			backupRecordsObject.speed = valueBackupRecordsBackupRecord["Speed"].asString();
		if(!valueBackupRecordsBackupRecord["Message"].isNull())
			backupRecordsObject.message = valueBackupRecordsBackupRecord["Message"].asString();
		backupRecords_.push_back(backupRecordsObject);
	}
	auto allTables = value["Tables"]["Table"];
	for (const auto &item : allTables)
		tables_.push_back(item.asString());
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeBackupTablesResult::BackupRecord> DescribeBackupTablesResult::getBackupRecords()const
{
	return backupRecords_;
}

int DescribeBackupTablesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBackupTablesResult::getPageNumber()const
{
	return pageNumber_;
}

long DescribeBackupTablesResult::getTotal()const
{
	return total_;
}

std::vector<std::string> DescribeBackupTablesResult::getTables()const
{
	return tables_;
}

