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
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemsObject;
		if(!value["CrossBackupId"].isNull())
			itemsObject.crossBackupId = std::stoi(value["CrossBackupId"].asString());
		if(!value["CrossBackupRegion"].isNull())
			itemsObject.crossBackupRegion = value["CrossBackupRegion"].asString();
		if(!value["BackupSetStatus"].isNull())
			itemsObject.backupSetStatus = std::stoi(value["BackupSetStatus"].asString());
		if(!value["BackupStartTime"].isNull())
			itemsObject.backupStartTime = value["BackupStartTime"].asString();
		if(!value["BackupEndTime"].isNull())
			itemsObject.backupEndTime = value["BackupEndTime"].asString();
		if(!value["BackupType"].isNull())
			itemsObject.backupType = value["BackupType"].asString();
		if(!value["BackupMethod"].isNull())
			itemsObject.backupMethod = value["BackupMethod"].asString();
		if(!value["CrossBackupSetSize"].isNull())
			itemsObject.crossBackupSetSize = std::stol(value["CrossBackupSetSize"].asString());
		if(!value["CrossBackupSetFile"].isNull())
			itemsObject.crossBackupSetFile = value["CrossBackupSetFile"].asString();
		if(!value["CrossBackupDownloadLink"].isNull())
			itemsObject.crossBackupDownloadLink = value["CrossBackupDownloadLink"].asString();
		if(!value["Engine"].isNull())
			itemsObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			itemsObject.engineVersion = value["EngineVersion"].asString();
		if(!value["CrossBackupSetLocation"].isNull())
			itemsObject.crossBackupSetLocation = value["CrossBackupSetLocation"].asString();
		if(!value["BackupSetScale"].isNull())
			itemsObject.backupSetScale = std::stoi(value["BackupSetScale"].asString());
		if(!value["InstanceId"].isNull())
			itemsObject.instanceId = std::stoi(value["InstanceId"].asString());
		if(!value["DBInstanceStorageType"].isNull())
			itemsObject.dBInstanceStorageType = value["DBInstanceStorageType"].asString();
		if(!value["Category"].isNull())
			itemsObject.category = value["Category"].asString();
		if(!value["ConsistentTime"].isNull())
			itemsObject.consistentTime = value["ConsistentTime"].asString();
		auto allRestoreRegions = value["RestoreRegions"]["RestoreRegion"];
		for (auto value : allRestoreRegions)
			itemsObject.restoreRegions.push_back(value.asString());
		items_.push_back(itemsObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

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

