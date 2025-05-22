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

#include <alibabacloud/rds/model/DescribeCrossRegionBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeCrossRegionBackupsResult::DescribeCrossRegionBackupsResult() :
	ServiceResult()
{}

DescribeCrossRegionBackupsResult::DescribeCrossRegionBackupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCrossRegionBackupsResult::~DescribeCrossRegionBackupsResult()
{}

void DescribeCrossRegionBackupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["BackupEndTime"].isNull())
			itemsObject.backupEndTime = valueItemsItem["BackupEndTime"].asString();
		if(!valueItemsItem["BackupMethod"].isNull())
			itemsObject.backupMethod = valueItemsItem["BackupMethod"].asString();
		if(!valueItemsItem["BackupSetScale"].isNull())
			itemsObject.backupSetScale = std::stoi(valueItemsItem["BackupSetScale"].asString());
		if(!valueItemsItem["BackupSetStatus"].isNull())
			itemsObject.backupSetStatus = std::stoi(valueItemsItem["BackupSetStatus"].asString());
		if(!valueItemsItem["BackupStartTime"].isNull())
			itemsObject.backupStartTime = valueItemsItem["BackupStartTime"].asString();
		if(!valueItemsItem["BackupType"].isNull())
			itemsObject.backupType = valueItemsItem["BackupType"].asString();
		if(!valueItemsItem["Category"].isNull())
			itemsObject.category = valueItemsItem["Category"].asString();
		if(!valueItemsItem["ConsistentTime"].isNull())
			itemsObject.consistentTime = valueItemsItem["ConsistentTime"].asString();
		if(!valueItemsItem["CrossBackupDownloadLink"].isNull())
			itemsObject.crossBackupDownloadLink = valueItemsItem["CrossBackupDownloadLink"].asString();
		if(!valueItemsItem["CrossBackupId"].isNull())
			itemsObject.crossBackupId = std::stoi(valueItemsItem["CrossBackupId"].asString());
		if(!valueItemsItem["CrossBackupRegion"].isNull())
			itemsObject.crossBackupRegion = valueItemsItem["CrossBackupRegion"].asString();
		if(!valueItemsItem["CrossBackupSetFile"].isNull())
			itemsObject.crossBackupSetFile = valueItemsItem["CrossBackupSetFile"].asString();
		if(!valueItemsItem["CrossBackupSetLocation"].isNull())
			itemsObject.crossBackupSetLocation = valueItemsItem["CrossBackupSetLocation"].asString();
		if(!valueItemsItem["CrossBackupSetSize"].isNull())
			itemsObject.crossBackupSetSize = std::stol(valueItemsItem["CrossBackupSetSize"].asString());
		if(!valueItemsItem["DBInstanceStorageType"].isNull())
			itemsObject.dBInstanceStorageType = valueItemsItem["DBInstanceStorageType"].asString();
		if(!valueItemsItem["Engine"].isNull())
			itemsObject.engine = valueItemsItem["Engine"].asString();
		if(!valueItemsItem["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsItem["EngineVersion"].asString();
		if(!valueItemsItem["HasBackupTableMeta"].isNull())
			itemsObject.hasBackupTableMeta = valueItemsItem["HasBackupTableMeta"].asString();
		if(!valueItemsItem["InstanceId"].isNull())
			itemsObject.instanceId = std::stoi(valueItemsItem["InstanceId"].asString());
		auto allRestoreRegions = value["RestoreRegions"]["RestoreRegion"];
		for (auto value : allRestoreRegions)
			itemsObject.restoreRegions.push_back(value.asString());
		items_.push_back(itemsObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeCrossRegionBackupsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeCrossRegionBackupsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeCrossRegionBackupsResult::getEndTime()const
{
	return endTime_;
}

int DescribeCrossRegionBackupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeCrossRegionBackupsResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeCrossRegionBackupsResult::Item> DescribeCrossRegionBackupsResult::getItems()const
{
	return items_;
}

std::string DescribeCrossRegionBackupsResult::getRegionId()const
{
	return regionId_;
}

