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

#include <alibabacloud/gpdb/model/DescribeLogBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeLogBackupsResult::DescribeLogBackupsResult() :
	ServiceResult()
{}

DescribeLogBackupsResult::DescribeLogBackupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogBackupsResult::~DescribeLogBackupsResult()
{}

void DescribeLogBackupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Backup"];
	for (auto valueItemsBackup : allItemsNode)
	{
		Backup itemsObject;
		if(!valueItemsBackup["LogFileSize"].isNull())
			itemsObject.logFileSize = std::stol(valueItemsBackup["LogFileSize"].asString());
		if(!valueItemsBackup["LogTime"].isNull())
			itemsObject.logTime = valueItemsBackup["LogTime"].asString();
		if(!valueItemsBackup["SegmentName"].isNull())
			itemsObject.segmentName = valueItemsBackup["SegmentName"].asString();
		if(!valueItemsBackup["LogFileName"].isNull())
			itemsObject.logFileName = valueItemsBackup["LogFileName"].asString();
		if(!valueItemsBackup["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsBackup["DBInstanceId"].asString();
		if(!valueItemsBackup["BackupId"].isNull())
			itemsObject.backupId = valueItemsBackup["BackupId"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalLogSize"].isNull())
		totalLogSize_ = std::stol(value["TotalLogSize"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeLogBackupsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLogBackupsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLogBackupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeLogBackupsResult::Backup> DescribeLogBackupsResult::getItems()const
{
	return items_;
}

long DescribeLogBackupsResult::getTotalLogSize()const
{
	return totalLogSize_;
}

