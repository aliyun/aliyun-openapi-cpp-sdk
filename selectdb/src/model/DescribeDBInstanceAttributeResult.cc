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

#include <alibabacloud/selectdb/model/DescribeDBInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Selectdb;
using namespace AlibabaCloud::Selectdb::Model;

DescribeDBInstanceAttributeResult::DescribeDBInstanceAttributeResult() :
	ServiceResult()
{}

DescribeDBInstanceAttributeResult::DescribeDBInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceAttributeResult::~DescribeDBInstanceAttributeResult()
{}

void DescribeDBInstanceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBClusterListNode = value["DBClusterList"]["DbClusterListItem"];
	for (auto valueDBClusterListDbClusterListItem : allDBClusterListNode)
	{
		DbClusterListItem dBClusterListObject;
		if(!valueDBClusterListDbClusterListItem["DbInstanceName"].isNull())
			dBClusterListObject.dbInstanceName = valueDBClusterListDbClusterListItem["DbInstanceName"].asString();
		if(!valueDBClusterListDbClusterListItem["DbClusterId"].isNull())
			dBClusterListObject.dbClusterId = valueDBClusterListDbClusterListItem["DbClusterId"].asString();
		if(!valueDBClusterListDbClusterListItem["DbClusterName"].isNull())
			dBClusterListObject.dbClusterName = valueDBClusterListDbClusterListItem["DbClusterName"].asString();
		if(!valueDBClusterListDbClusterListItem["Status"].isNull())
			dBClusterListObject.status = valueDBClusterListDbClusterListItem["Status"].asString();
		if(!valueDBClusterListDbClusterListItem["CreatedTime"].isNull())
			dBClusterListObject.createdTime = valueDBClusterListDbClusterListItem["CreatedTime"].asString();
		if(!valueDBClusterListDbClusterListItem["DbClusterClass"].isNull())
			dBClusterListObject.dbClusterClass = valueDBClusterListDbClusterListItem["DbClusterClass"].asString();
		if(!valueDBClusterListDbClusterListItem["CpuCores"].isNull())
			dBClusterListObject.cpuCores = std::stol(valueDBClusterListDbClusterListItem["CpuCores"].asString());
		if(!valueDBClusterListDbClusterListItem["Memory"].isNull())
			dBClusterListObject.memory = std::stol(valueDBClusterListDbClusterListItem["Memory"].asString());
		if(!valueDBClusterListDbClusterListItem["CacheStorageType"].isNull())
			dBClusterListObject.cacheStorageType = valueDBClusterListDbClusterListItem["CacheStorageType"].asString();
		if(!valueDBClusterListDbClusterListItem["PerformanceLevel"].isNull())
			dBClusterListObject.performanceLevel = valueDBClusterListDbClusterListItem["PerformanceLevel"].asString();
		if(!valueDBClusterListDbClusterListItem["CacheStorageSizeGB"].isNull())
			dBClusterListObject.cacheStorageSizeGB = valueDBClusterListDbClusterListItem["CacheStorageSizeGB"].asString();
		if(!valueDBClusterListDbClusterListItem["StartTime"].isNull())
			dBClusterListObject.startTime = valueDBClusterListDbClusterListItem["StartTime"].asString();
		if(!valueDBClusterListDbClusterListItem["ChargeType"].isNull())
			dBClusterListObject.chargeType = valueDBClusterListDbClusterListItem["ChargeType"].asString();
		if(!valueDBClusterListDbClusterListItem["ModifiedTime"].isNull())
			dBClusterListObject.modifiedTime = valueDBClusterListDbClusterListItem["ModifiedTime"].asString();
		if(!valueDBClusterListDbClusterListItem["ScalingRulesEnable"].isNull())
			dBClusterListObject.scalingRulesEnable = valueDBClusterListDbClusterListItem["ScalingRulesEnable"].asString() == "true";
		dBClusterList_.push_back(dBClusterListObject);
	}
	auto allTagsNode = value["Tags"]["TagsItem"];
	for (auto valueTagsTagsItem : allTagsNode)
	{
		TagsItem tagsObject;
		if(!valueTagsTagsItem["TagKey"].isNull())
			tagsObject.tagKey = valueTagsTagsItem["TagKey"].asString();
		if(!valueTagsTagsItem["TagValue"].isNull())
			tagsObject.tagValue = valueTagsTagsItem["TagValue"].asString();
		tags_.push_back(tagsObject);
	}
	auto allCanUpgradeVersions = value["CanUpgradeVersions"]["canUpgradeCanUpgradeVersionsVersions"];
	for (const auto &item : allCanUpgradeVersions)
		canUpgradeVersions_.push_back(item.asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["SubDomain"].isNull())
		subDomain_ = value["SubDomain"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = value["GmtModified"].asString();
	if(!value["LockMode"].isNull())
		lockMode_ = std::stol(value["LockMode"].asString());
	if(!value["LockReason"].isNull())
		lockReason_ = value["LockReason"].asString();
	if(!value["ResourceCpu"].isNull())
		resourceCpu_ = std::stol(value["ResourceCpu"].asString());
	if(!value["StorageSize"].isNull())
		storageSize_ = std::stol(value["StorageSize"].asString());
	if(!value["ObjectStoreSize"].isNull())
		objectStoreSize_ = std::stol(value["ObjectStoreSize"].asString());
	if(!value["MaintainStarttime"].isNull())
		maintainStarttime_ = value["MaintainStarttime"].asString();
	if(!value["MaintainEndtime"].isNull())
		maintainEndtime_ = value["MaintainEndtime"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();
	if(!value["EngineMinorVersion"].isNull())
		engineMinorVersion_ = value["EngineMinorVersion"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();

}

std::string DescribeDBInstanceAttributeResult::getEngineMinorVersion()const
{
	return engineMinorVersion_;
}

std::string DescribeDBInstanceAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeDBInstanceAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeDBInstanceAttributeResult::getGmtModified()const
{
	return gmtModified_;
}

std::vector<std::string> DescribeDBInstanceAttributeResult::getCanUpgradeVersions()const
{
	return canUpgradeVersions_;
}

std::string DescribeDBInstanceAttributeResult::getMaintainStarttime()const
{
	return maintainStarttime_;
}

std::string DescribeDBInstanceAttributeResult::getSubDomain()const
{
	return subDomain_;
}

long DescribeDBInstanceAttributeResult::getObjectStoreSize()const
{
	return objectStoreSize_;
}

std::string DescribeDBInstanceAttributeResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeDBInstanceAttributeResult::getLockReason()const
{
	return lockReason_;
}

std::vector<DescribeDBInstanceAttributeResult::TagsItem> DescribeDBInstanceAttributeResult::getTags()const
{
	return tags_;
}

std::string DescribeDBInstanceAttributeResult::getEngine()const
{
	return engine_;
}

std::string DescribeDBInstanceAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeDBInstanceAttributeResult::getMaintainEndtime()const
{
	return maintainEndtime_;
}

std::string DescribeDBInstanceAttributeResult::getEngineVersion()const
{
	return engineVersion_;
}

long DescribeDBInstanceAttributeResult::getResourceCpu()const
{
	return resourceCpu_;
}

std::string DescribeDBInstanceAttributeResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeDBInstanceAttributeResult::getCreateTime()const
{
	return createTime_;
}

long DescribeDBInstanceAttributeResult::getStorageSize()const
{
	return storageSize_;
}

long DescribeDBInstanceAttributeResult::getLockMode()const
{
	return lockMode_;
}

std::vector<DescribeDBInstanceAttributeResult::DbClusterListItem> DescribeDBInstanceAttributeResult::getDBClusterList()const
{
	return dBClusterList_;
}

std::string DescribeDBInstanceAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeDBInstanceAttributeResult::getChargeType()const
{
	return chargeType_;
}

std::string DescribeDBInstanceAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeDBInstanceAttributeResult::getExpireTime()const
{
	return expireTime_;
}

