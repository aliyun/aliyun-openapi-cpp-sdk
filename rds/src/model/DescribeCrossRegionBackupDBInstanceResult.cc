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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemsObject;
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		if(!value["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
		if(!value["DBInstanceStatusDesc"].isNull())
			itemsObject.dBInstanceStatusDesc = value["DBInstanceStatusDesc"].asString();
		if(!value["Engine"].isNull())
			itemsObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			itemsObject.engineVersion = value["EngineVersion"].asString();
		if(!value["CrossBackupRegion"].isNull())
			itemsObject.crossBackupRegion = value["CrossBackupRegion"].asString();
		if(!value["CrossBackupType"].isNull())
			itemsObject.crossBackupType = value["CrossBackupType"].asString();
		if(!value["BackupEnabled"].isNull())
			itemsObject.backupEnabled = value["BackupEnabled"].asString();
		if(!value["LogBackupEnabled"].isNull())
			itemsObject.logBackupEnabled = value["LogBackupEnabled"].asString();
		if(!value["LogBackupEnabledTime"].isNull())
			itemsObject.logBackupEnabledTime = value["LogBackupEnabledTime"].asString();
		if(!value["BackupEnabledTime"].isNull())
			itemsObject.backupEnabledTime = value["BackupEnabledTime"].asString();
		if(!value["RetentType"].isNull())
			itemsObject.retentType = std::stoi(value["RetentType"].asString());
		if(!value["Retention"].isNull())
			itemsObject.retention = std::stoi(value["Retention"].asString());
		if(!value["LockMode"].isNull())
			itemsObject.lockMode = value["LockMode"].asString();
		if(!value["RelService"].isNull())
			itemsObject.relService = value["RelService"].asString();
		if(!value["RelServiceId"].isNull())
			itemsObject.relServiceId = value["RelServiceId"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["TotalRecords"].isNull())
		totalRecords_ = std::stoi(value["TotalRecords"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["ItemsNumbers"].isNull())
		itemsNumbers_ = std::stoi(value["ItemsNumbers"].asString());

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

