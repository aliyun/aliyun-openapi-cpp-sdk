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

#include <alibabacloud/hbase/model/DescribeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeInstanceResult::DescribeInstanceResult() :
	ServiceResult()
{}

DescribeInstanceResult::DescribeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceResult::~DescribeInstanceResult()
{}

void DescribeInstanceResult::parse(const std::string &payload)
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
	auto allNeedUpgradeComps = value["NeedUpgradeComps"]["Comps"];
	for (const auto &item : allNeedUpgradeComps)
		needUpgradeComps_.push_back(item.asString());
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["EncryptionType"].isNull())
		encryptionType_ = value["EncryptionType"].asString();
	if(!value["ModuleId"].isNull())
		moduleId_ = std::stoi(value["ModuleId"].asString());
	if(!value["VswitchId"].isNull())
		vswitchId_ = value["VswitchId"].asString();
	if(!value["BackupStatus"].isNull())
		backupStatus_ = value["BackupStatus"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["CoreDiskType"].isNull())
		coreDiskType_ = value["CoreDiskType"].asString();
	if(!value["MasterNodeCount"].isNull())
		masterNodeCount_ = std::stoi(value["MasterNodeCount"].asString());
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["CreatedTimeUTC"].isNull())
		createdTimeUTC_ = value["CreatedTimeUTC"].asString();
	if(!value["ColdStorageSize"].isNull())
		coldStorageSize_ = std::stoi(value["ColdStorageSize"].asString());
	if(!value["ParentId"].isNull())
		parentId_ = value["ParentId"].asString();
	if(!value["IsLatestVersion"].isNull())
		isLatestVersion_ = value["IsLatestVersion"].asString() == "true";
	if(!value["ExpireTimeUTC"].isNull())
		expireTimeUTC_ = value["ExpireTimeUTC"].asString();
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["MasterInstanceType"].isNull())
		masterInstanceType_ = value["MasterInstanceType"].asString();
	if(!value["CoreInstanceType"].isNull())
		coreInstanceType_ = value["CoreInstanceType"].asString();
	if(!value["EncryptionKey"].isNull())
		encryptionKey_ = value["EncryptionKey"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["CoreDiskSize"].isNull())
		coreDiskSize_ = std::stoi(value["CoreDiskSize"].asString());
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["MaintainStartTime"].isNull())
		maintainStartTime_ = value["MaintainStartTime"].asString();
	if(!value["ConfirmMaintainTime"].isNull())
		confirmMaintainTime_ = value["ConfirmMaintainTime"].asString();
	if(!value["IsHa"].isNull())
		isHa_ = value["IsHa"].asString() == "true";
	if(!value["MaintainEndTime"].isNull())
		maintainEndTime_ = value["MaintainEndTime"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["ColdStorageStatus"].isNull())
		coldStorageStatus_ = value["ColdStorageStatus"].asString();
	if(!value["IsDeletionProtection"].isNull())
		isDeletionProtection_ = value["IsDeletionProtection"].asString() == "true";
	if(!value["MinorVersion"].isNull())
		minorVersion_ = value["MinorVersion"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["MasterDiskSize"].isNull())
		masterDiskSize_ = std::stoi(value["MasterDiskSize"].asString());
	if(!value["MasterDiskType"].isNull())
		masterDiskType_ = value["MasterDiskType"].asString();
	if(!value["NeedUpgrade"].isNull())
		needUpgrade_ = value["NeedUpgrade"].asString() == "true";
	if(!value["IsMultiModel"].isNull())
		isMultiModel_ = value["IsMultiModel"].asString() == "true";
	if(!value["AutoRenewal"].isNull())
		autoRenewal_ = value["AutoRenewal"].asString() == "true";
	if(!value["ClusterType"].isNull())
		clusterType_ = value["ClusterType"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["ClusterName"].isNull())
		clusterName_ = value["ClusterName"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["Duration"].isNull())
		duration_ = std::stoi(value["Duration"].asString());
	if(!value["ModuleStackVersion"].isNull())
		moduleStackVersion_ = value["ModuleStackVersion"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["MajorVersion"].isNull())
		majorVersion_ = value["MajorVersion"].asString();
	if(!value["CoreDiskCount"].isNull())
		coreDiskCount_ = value["CoreDiskCount"].asString();
	if(!value["TaskProgress"].isNull())
		taskProgress_ = value["TaskProgress"].asString();
	if(!value["CoreNodeCount"].isNull())
		coreNodeCount_ = std::stoi(value["CoreNodeCount"].asString());

}

std::string DescribeInstanceResult::getModuleStackVersion()const
{
	return moduleStackVersion_;
}

std::string DescribeInstanceResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeInstanceResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

bool DescribeInstanceResult::getNeedUpgrade()const
{
	return needUpgrade_;
}

int DescribeInstanceResult::getModuleId()const
{
	return moduleId_;
}

std::vector<DescribeInstanceResult::Tag> DescribeInstanceResult::getTags()const
{
	return tags_;
}

std::vector<std::string> DescribeInstanceResult::getNeedUpgradeComps()const
{
	return needUpgradeComps_;
}

std::string DescribeInstanceResult::getEngine()const
{
	return engine_;
}

std::string DescribeInstanceResult::getStatus()const
{
	return status_;
}

int DescribeInstanceResult::getColdStorageSize()const
{
	return coldStorageSize_;
}

std::string DescribeInstanceResult::getEncryptionType()const
{
	return encryptionType_;
}

std::string DescribeInstanceResult::getExpireTimeUTC()const
{
	return expireTimeUTC_;
}

int DescribeInstanceResult::getMasterDiskSize()const
{
	return masterDiskSize_;
}

std::string DescribeInstanceResult::getInstanceId()const
{
	return instanceId_;
}

int DescribeInstanceResult::getDuration()const
{
	return duration_;
}

std::string DescribeInstanceResult::getPayType()const
{
	return payType_;
}

std::string DescribeInstanceResult::getVswitchId()const
{
	return vswitchId_;
}

int DescribeInstanceResult::getMasterNodeCount()const
{
	return masterNodeCount_;
}

std::string DescribeInstanceResult::getInstanceName()const
{
	return instanceName_;
}

std::string DescribeInstanceResult::getVpcId()const
{
	return vpcId_;
}

bool DescribeInstanceResult::getAutoRenewal()const
{
	return autoRenewal_;
}

std::string DescribeInstanceResult::getCoreDiskType()const
{
	return coreDiskType_;
}

std::string DescribeInstanceResult::getExpireTime()const
{
	return expireTime_;
}

std::string DescribeInstanceResult::getBackupStatus()const
{
	return backupStatus_;
}

bool DescribeInstanceResult::getIsHa()const
{
	return isHa_;
}

std::string DescribeInstanceResult::getEncryptionKey()const
{
	return encryptionKey_;
}

std::string DescribeInstanceResult::getTaskProgress()const
{
	return taskProgress_;
}

std::string DescribeInstanceResult::getMasterInstanceType()const
{
	return masterInstanceType_;
}

bool DescribeInstanceResult::getIsDeletionProtection()const
{
	return isDeletionProtection_;
}

bool DescribeInstanceResult::getIsLatestVersion()const
{
	return isLatestVersion_;
}

std::string DescribeInstanceResult::getMaintainEndTime()const
{
	return maintainEndTime_;
}

std::string DescribeInstanceResult::getNetworkType()const
{
	return networkType_;
}

std::string DescribeInstanceResult::getCoreInstanceType()const
{
	return coreInstanceType_;
}

std::string DescribeInstanceResult::getClusterName()const
{
	return clusterName_;
}

std::string DescribeInstanceResult::getMasterDiskType()const
{
	return masterDiskType_;
}

std::string DescribeInstanceResult::getMaintainStartTime()const
{
	return maintainStartTime_;
}

std::string DescribeInstanceResult::getParentId()const
{
	return parentId_;
}

std::string DescribeInstanceResult::getMajorVersion()const
{
	return majorVersion_;
}

std::string DescribeInstanceResult::getCoreDiskCount()const
{
	return coreDiskCount_;
}

std::string DescribeInstanceResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeInstanceResult::getClusterId()const
{
	return clusterId_;
}

int DescribeInstanceResult::getCoreNodeCount()const
{
	return coreNodeCount_;
}

std::string DescribeInstanceResult::getColdStorageStatus()const
{
	return coldStorageStatus_;
}

std::string DescribeInstanceResult::getCreatedTimeUTC()const
{
	return createdTimeUTC_;
}

std::string DescribeInstanceResult::getMinorVersion()const
{
	return minorVersion_;
}

bool DescribeInstanceResult::getIsMultiModel()const
{
	return isMultiModel_;
}

std::string DescribeInstanceResult::getClusterType()const
{
	return clusterType_;
}

std::string DescribeInstanceResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeInstanceResult::getConfirmMaintainTime()const
{
	return confirmMaintainTime_;
}

int DescribeInstanceResult::getCoreDiskSize()const
{
	return coreDiskSize_;
}

