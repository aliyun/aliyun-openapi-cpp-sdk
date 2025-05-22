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

#include <alibabacloud/rds/model/DescribeMarketingActivityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeMarketingActivityResult::DescribeMarketingActivityResult() :
	ServiceResult()
{}

DescribeMarketingActivityResult::DescribeMarketingActivityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMarketingActivityResult::~DescribeMarketingActivityResult()
{}

void DescribeMarketingActivityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["Category"].isNull())
			itemsObject.category = valueItemsItemsItem["Category"].asString();
		if(!valueItemsItemsItem["ChargeType"].isNull())
			itemsObject.chargeType = valueItemsItemsItem["ChargeType"].asString();
		if(!valueItemsItemsItem["ClassCode"].isNull())
			itemsObject.classCode = valueItemsItemsItem["ClassCode"].asString();
		if(!valueItemsItemsItem["ClassGroup"].isNull())
			itemsObject.classGroup = valueItemsItemsItem["ClassGroup"].asString();
		if(!valueItemsItemsItem["Cpu"].isNull())
			itemsObject.cpu = valueItemsItemsItem["Cpu"].asString();
		if(!valueItemsItemsItem["DiskSize"].isNull())
			itemsObject.diskSize = std::stoi(valueItemsItemsItem["DiskSize"].asString());
		if(!valueItemsItemsItem["Engine"].isNull())
			itemsObject.engine = valueItemsItemsItem["Engine"].asString();
		if(!valueItemsItemsItem["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsItemsItem["EngineVersion"].asString();
		if(!valueItemsItemsItem["InstanceId"].isNull())
			itemsObject.instanceId = valueItemsItemsItem["InstanceId"].asString();
		if(!valueItemsItemsItem["InstanceName"].isNull())
			itemsObject.instanceName = valueItemsItemsItem["InstanceName"].asString();
		if(!valueItemsItemsItem["MaxConnections"].isNull())
			itemsObject.maxConnections = std::stoi(valueItemsItemsItem["MaxConnections"].asString());
		if(!valueItemsItemsItem["MaxIombps"].isNull())
			itemsObject.maxIombps = std::stoi(valueItemsItemsItem["MaxIombps"].asString());
		if(!valueItemsItemsItem["MaxIops"].isNull())
			itemsObject.maxIops = std::stoi(valueItemsItemsItem["MaxIops"].asString());
		if(!valueItemsItemsItem["Memory"].isNull())
			itemsObject.memory = std::stol(valueItemsItemsItem["Memory"].asString());
		if(!valueItemsItemsItem["StorageType"].isNull())
			itemsObject.storageType = valueItemsItemsItem["StorageType"].asString();
		if(!valueItemsItemsItem["UpgradeCategory"].isNull())
			itemsObject.upgradeCategory = valueItemsItemsItem["UpgradeCategory"].asString();
		if(!valueItemsItemsItem["UpgradeClassCode"].isNull())
			itemsObject.upgradeClassCode = valueItemsItemsItem["UpgradeClassCode"].asString();
		if(!valueItemsItemsItem["UpgradeClassGroup"].isNull())
			itemsObject.upgradeClassGroup = valueItemsItemsItem["UpgradeClassGroup"].asString();
		if(!valueItemsItemsItem["UpgradeCpu"].isNull())
			itemsObject.upgradeCpu = valueItemsItemsItem["UpgradeCpu"].asString();
		if(!valueItemsItemsItem["UpgradeDescContent"].isNull())
			itemsObject.upgradeDescContent = valueItemsItemsItem["UpgradeDescContent"].asString();
		if(!valueItemsItemsItem["UpgradeDiskSize"].isNull())
			itemsObject.upgradeDiskSize = std::stoi(valueItemsItemsItem["UpgradeDiskSize"].asString());
		if(!valueItemsItemsItem["UpgradeMaxConnections"].isNull())
			itemsObject.upgradeMaxConnections = std::stoi(valueItemsItemsItem["UpgradeMaxConnections"].asString());
		if(!valueItemsItemsItem["UpgradeMaxIombps"].isNull())
			itemsObject.upgradeMaxIombps = std::stoi(valueItemsItemsItem["UpgradeMaxIombps"].asString());
		if(!valueItemsItemsItem["UpgradeMaxIops"].isNull())
			itemsObject.upgradeMaxIops = std::stoi(valueItemsItemsItem["UpgradeMaxIops"].asString());
		if(!valueItemsItemsItem["UpgradeMemory"].isNull())
			itemsObject.upgradeMemory = std::stol(valueItemsItemsItem["UpgradeMemory"].asString());
		if(!valueItemsItemsItem["UpgradeReferencePrice"].isNull())
			itemsObject.upgradeReferencePrice = valueItemsItemsItem["UpgradeReferencePrice"].asString();
		if(!valueItemsItemsItem["UpgradeStorageType"].isNull())
			itemsObject.upgradeStorageType = valueItemsItemsItem["UpgradeStorageType"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["AliUid"].isNull())
		aliUid_ = std::stol(value["AliUid"].asString());
	if(!value["Bid"].isNull())
		bid_ = value["Bid"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<DescribeMarketingActivityResult::ItemsItem> DescribeMarketingActivityResult::getItems()const
{
	return items_;
}

std::string DescribeMarketingActivityResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeMarketingActivityResult::getBid()const
{
	return bid_;
}

long DescribeMarketingActivityResult::getAliUid()const
{
	return aliUid_;
}

