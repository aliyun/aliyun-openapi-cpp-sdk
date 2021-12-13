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

#include <alibabacloud/gpdb/model/DescribeDataBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDataBackupsResult::DescribeDataBackupsResult() :
	ServiceResult()
{}

DescribeDataBackupsResult::DescribeDataBackupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataBackupsResult::~DescribeDataBackupsResult()
{}

void DescribeDataBackupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Backup"];
	for (auto valueItemsBackup : allItemsNode)
	{
		Backup itemsObject;
		if(!valueItemsBackup["DataType"].isNull())
			itemsObject.dataType = valueItemsBackup["DataType"].asString();
		if(!valueItemsBackup["ConsistentTime"].isNull())
			itemsObject.consistentTime = std::stol(valueItemsBackup["ConsistentTime"].asString());
		if(!valueItemsBackup["BackupStatus"].isNull())
			itemsObject.backupStatus = valueItemsBackup["BackupStatus"].asString();
		if(!valueItemsBackup["BackupStartTime"].isNull())
			itemsObject.backupStartTime = valueItemsBackup["BackupStartTime"].asString();
		if(!valueItemsBackup["BackupEndTime"].isNull())
			itemsObject.backupEndTime = valueItemsBackup["BackupEndTime"].asString();
		if(!valueItemsBackup["BackupEndTimeLocal"].isNull())
			itemsObject.backupEndTimeLocal = valueItemsBackup["BackupEndTimeLocal"].asString();
		if(!valueItemsBackup["BackupSetId"].isNull())
			itemsObject.backupSetId = valueItemsBackup["BackupSetId"].asString();
		if(!valueItemsBackup["BaksetName"].isNull())
			itemsObject.baksetName = valueItemsBackup["BaksetName"].asString();
		if(!valueItemsBackup["BackupSize"].isNull())
			itemsObject.backupSize = std::stol(valueItemsBackup["BackupSize"].asString());
		if(!valueItemsBackup["BackupMode"].isNull())
			itemsObject.backupMode = valueItemsBackup["BackupMode"].asString();
		if(!valueItemsBackup["BackupStartTimeLocal"].isNull())
			itemsObject.backupStartTimeLocal = valueItemsBackup["BackupStartTimeLocal"].asString();
		if(!valueItemsBackup["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsBackup["DBInstanceId"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataBackupsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataBackupsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataBackupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDataBackupsResult::Backup> DescribeDataBackupsResult::getItems()const
{
	return items_;
}

