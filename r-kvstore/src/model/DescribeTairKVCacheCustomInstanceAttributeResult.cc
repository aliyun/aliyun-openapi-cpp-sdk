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

#include <alibabacloud/r-kvstore/model/DescribeTairKVCacheCustomInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeTairKVCacheCustomInstanceAttributeResult::DescribeTairKVCacheCustomInstanceAttributeResult() :
	ServiceResult()
{}

DescribeTairKVCacheCustomInstanceAttributeResult::DescribeTairKVCacheCustomInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTairKVCacheCustomInstanceAttributeResult::~DescribeTairKVCacheCustomInstanceAttributeResult()
{}

void DescribeTairKVCacheCustomInstanceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto allDisksNode = value["Disks"]["Disk"];
	for (auto valueDisksDisk : allDisksNode)
	{
		Disk disksObject;
		if(!valueDisksDisk["DiskId"].isNull())
			disksObject.diskId = valueDisksDisk["DiskId"].asString();
		if(!valueDisksDisk["Type"].isNull())
			disksObject.type = valueDisksDisk["Type"].asString();
		if(!valueDisksDisk["Size"].isNull())
			disksObject.size = valueDisksDisk["Size"].asString();
		disks_.push_back(disksObject);
	}
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["PrivateIp"].isNull())
		privateIp_ = value["PrivateIp"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["StorageType"].isNull())
		storageType_ = value["StorageType"].asString();
	if(!value["ArchitectureType"].isNull())
		architectureType_ = value["ArchitectureType"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["ZoneType"].isNull())
		zoneType_ = value["ZoneType"].asString();
	if(!value["InstanceClass"].isNull())
		instanceClass_ = value["InstanceClass"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceType"].isNull())
		instanceType_ = value["InstanceType"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["InstanceStatus"].isNull())
		instanceStatus_ = value["InstanceStatus"].asString();
	if(!value["Storage"].isNull())
		storage_ = std::stol(value["Storage"].asString());
	if(!value["IsOrderCompleted"].isNull())
		isOrderCompleted_ = value["IsOrderCompleted"].asString() == "true";
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();
	if(!value["Cpu"].isNull())
		cpu_ = std::stol(value["Cpu"].asString());
	if(!value["Memory"].isNull())
		memory_ = std::stol(value["Memory"].asString());
	if(!value["SecurityGroupId"].isNull())
		securityGroupId_ = value["SecurityGroupId"].asString();
	if(!value["UseEni"].isNull())
		useEni_ = value["UseEni"].asString() == "true";

}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

long DescribeTairKVCacheCustomInstanceAttributeResult::getMemory()const
{
	return memory_;
}

long DescribeTairKVCacheCustomInstanceAttributeResult::getCpu()const
{
	return cpu_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getZoneType()const
{
	return zoneType_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getPrivateIp()const
{
	return privateIp_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getNetworkType()const
{
	return networkType_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getInstanceStatus()const
{
	return instanceStatus_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getImageId()const
{
	return imageId_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getInstanceType()const
{
	return instanceType_;
}

std::vector<DescribeTairKVCacheCustomInstanceAttributeResult::Tag> DescribeTairKVCacheCustomInstanceAttributeResult::getTags()const
{
	return tags_;
}

bool DescribeTairKVCacheCustomInstanceAttributeResult::getIsOrderCompleted()const
{
	return isOrderCompleted_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getArchitectureType()const
{
	return architectureType_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getStorageType()const
{
	return storageType_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getSecurityGroupId()const
{
	return securityGroupId_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getInstanceClass()const
{
	return instanceClass_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getInstanceName()const
{
	return instanceName_;
}

long DescribeTairKVCacheCustomInstanceAttributeResult::getStorage()const
{
	return storage_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getChargeType()const
{
	return chargeType_;
}

bool DescribeTairKVCacheCustomInstanceAttributeResult::getUseEni()const
{
	return useEni_;
}

std::vector<DescribeTairKVCacheCustomInstanceAttributeResult::Disk> DescribeTairKVCacheCustomInstanceAttributeResult::getDisks()const
{
	return disks_;
}

std::string DescribeTairKVCacheCustomInstanceAttributeResult::getRegionId()const
{
	return regionId_;
}

