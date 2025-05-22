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

#include <alibabacloud/rds/model/DescribeCrossRegionBackupDBInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeCrossRegionBackupDBInstanceResult::DescribeCrossRegionBackupDBInstanceResult() :
	ServiceResult()
{}

DescribeCrossRegionBackupDBInstanceResult::DescribeCrossRegionBackupDBInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCrossRegionBackupDBInstanceResult::~DescribeCrossRegionBackupDBInstanceResult()
{}

void DescribeCrossRegionBackupDBInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["BackupEnabled"].isNull())
			itemsObject.backupEnabled = valueItemsItem["BackupEnabled"].asString();
		if(!valueItemsItem["BackupEnabledTime"].isNull())
			itemsObject.backupEnabledTime = valueItemsItem["BackupEnabledTime"].asString();
		if(!valueItemsItem["CrossBackupRegion"].isNull())
			itemsObject.crossBackupRegion = valueItemsItem["CrossBackupRegion"].asString();
		if(!valueItemsItem["CrossBackupType"].isNull())
			itemsObject.crossBackupType = valueItemsItem["CrossBackupType"].asString();
		if(!valueItemsItem["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = valueItemsItem["DBInstanceDescription"].asString();
		if(!valueItemsItem["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsItem["DBInstanceId"].asString();
		if(!valueItemsItem["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = valueItemsItem["DBInstanceStatus"].asString();
		if(!valueItemsItem["DBInstanceStatusDesc"].isNull())
			itemsObject.dBInstanceStatusDesc = valueItemsItem["DBInstanceStatusDesc"].asString();
		if(!valueItemsItem["Engine"].isNull())
			itemsObject.engine = valueItemsItem["Engine"].asString();
		if(!valueItemsItem["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsItem["EngineVersion"].asString();
		if(!valueItemsItem["LockMode"].isNull())
			itemsObject.lockMode = valueItemsItem["LockMode"].asString();
		if(!valueItemsItem["LogBackupEnabled"].isNull())
			itemsObject.logBackupEnabled = valueItemsItem["LogBackupEnabled"].asString();
		if(!valueItemsItem["LogBackupEnabledTime"].isNull())
			itemsObject.logBackupEnabledTime = valueItemsItem["LogBackupEnabledTime"].asString();
		if(!valueItemsItem["RelService"].isNull())
			itemsObject.relService = valueItemsItem["RelService"].asString();
		if(!valueItemsItem["RelServiceId"].isNull())
			itemsObject.relServiceId = valueItemsItem["RelServiceId"].asString();
		if(!valueItemsItem["RetentType"].isNull())
			itemsObject.retentType = std::stoi(valueItemsItem["RetentType"].asString());
		if(!valueItemsItem["Retention"].isNull())
			itemsObject.retention = std::stoi(valueItemsItem["Retention"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["ItemsNumbers"].isNull())
		itemsNumbers_ = std::stoi(value["ItemsNumbers"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["TotalRecords"].isNull())
		totalRecords_ = std::stoi(value["TotalRecords"].asString());

}

int DescribeCrossRegionBackupDBInstanceResult::getItemsNumbers()const
{
	return itemsNumbers_;
}

int DescribeCrossRegionBackupDBInstanceResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCrossRegionBackupDBInstanceResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeCrossRegionBackupDBInstanceResult::getTotalRecords()const
{
	return totalRecords_;
}

std::vector<DescribeCrossRegionBackupDBInstanceResult::Item> DescribeCrossRegionBackupDBInstanceResult::getItems()const
{
	return items_;
}

std::string DescribeCrossRegionBackupDBInstanceResult::getRegionId()const
{
	return regionId_;
}

