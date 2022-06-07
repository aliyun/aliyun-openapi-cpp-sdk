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

#include <alibabacloud/adb/model/DescribeBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeBackupsResult::DescribeBackupsResult() :
	ServiceResult()
{}

DescribeBackupsResult::DescribeBackupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupsResult::~DescribeBackupsResult()
{}

void DescribeBackupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Backup"];
	for (auto valueItemsBackup : allItemsNode)
	{
		Backup itemsObject;
		if(!valueItemsBackup["DBClusterId"].isNull())
			itemsObject.dBClusterId = valueItemsBackup["DBClusterId"].asString();
		if(!valueItemsBackup["BackupType"].isNull())
			itemsObject.backupType = valueItemsBackup["BackupType"].asString();
		if(!valueItemsBackup["BackupStartTime"].isNull())
			itemsObject.backupStartTime = valueItemsBackup["BackupStartTime"].asString();
		if(!valueItemsBackup["BackupSize"].isNull())
			itemsObject.backupSize = std::stoi(valueItemsBackup["BackupSize"].asString());
		if(!valueItemsBackup["BackupEndTime"].isNull())
			itemsObject.backupEndTime = valueItemsBackup["BackupEndTime"].asString();
		if(!valueItemsBackup["BackupId"].isNull())
			itemsObject.backupId = valueItemsBackup["BackupId"].asString();
		if(!valueItemsBackup["BackupMethod"].isNull())
			itemsObject.backupMethod = valueItemsBackup["BackupMethod"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

}

std::string DescribeBackupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeBackupsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeBackupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBackupsResult::Backup> DescribeBackupsResult::getItems()const
{
	return items_;
}

