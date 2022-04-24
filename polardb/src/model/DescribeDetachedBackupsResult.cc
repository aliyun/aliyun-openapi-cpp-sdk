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

#include <alibabacloud/polardb/model/DescribeDetachedBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDetachedBackupsResult::DescribeDetachedBackupsResult() :
	ServiceResult()
{}

DescribeDetachedBackupsResult::DescribeDetachedBackupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDetachedBackupsResult::~DescribeDetachedBackupsResult()
{}

void DescribeDetachedBackupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Backup"];
	for (auto valueItemsBackup : allItemsNode)
	{
		Backup itemsObject;
		if(!valueItemsBackup["BackupSetSize"].isNull())
			itemsObject.backupSetSize = valueItemsBackup["BackupSetSize"].asString();
		if(!valueItemsBackup["ConsistentTime"].isNull())
			itemsObject.consistentTime = valueItemsBackup["ConsistentTime"].asString();
		if(!valueItemsBackup["StoreStatus"].isNull())
			itemsObject.storeStatus = valueItemsBackup["StoreStatus"].asString();
		if(!valueItemsBackup["BackupStatus"].isNull())
			itemsObject.backupStatus = valueItemsBackup["BackupStatus"].asString();
		if(!valueItemsBackup["BackupType"].isNull())
			itemsObject.backupType = valueItemsBackup["BackupType"].asString();
		if(!valueItemsBackup["BackupStartTime"].isNull())
			itemsObject.backupStartTime = valueItemsBackup["BackupStartTime"].asString();
		if(!valueItemsBackup["IsAvail"].isNull())
			itemsObject.isAvail = valueItemsBackup["IsAvail"].asString();
		if(!valueItemsBackup["BackupEndTime"].isNull())
			itemsObject.backupEndTime = valueItemsBackup["BackupEndTime"].asString();
		if(!valueItemsBackup["BackupId"].isNull())
			itemsObject.backupId = valueItemsBackup["BackupId"].asString();
		if(!valueItemsBackup["DBClusterId"].isNull())
			itemsObject.dBClusterId = valueItemsBackup["DBClusterId"].asString();
		if(!valueItemsBackup["BackupsLevel"].isNull())
			itemsObject.backupsLevel = valueItemsBackup["BackupsLevel"].asString();
		if(!valueItemsBackup["BackupMode"].isNull())
			itemsObject.backupMode = valueItemsBackup["BackupMode"].asString();
		if(!valueItemsBackup["BackupMethod"].isNull())
			itemsObject.backupMethod = valueItemsBackup["BackupMethod"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = value["TotalRecordCount"].asString();
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = value["PageRecordCount"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

}

std::string DescribeDetachedBackupsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeDetachedBackupsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeDetachedBackupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDetachedBackupsResult::Backup> DescribeDetachedBackupsResult::getItems()const
{
	return items_;
}

