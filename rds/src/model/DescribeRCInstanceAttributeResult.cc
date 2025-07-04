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

#include <alibabacloud/rds/model/DescribeRCInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCInstanceAttributeResult::DescribeRCInstanceAttributeResult() :
	ServiceResult()
{}

DescribeRCInstanceAttributeResult::DescribeRCInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCInstanceAttributeResult::~DescribeRCInstanceAttributeResult()
{}

void DescribeRCInstanceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataDisksNode = value["DataDisks"]["DataDisk"];
	for (auto valueDataDisksDataDisk : allDataDisksNode)
	{
		DataDisk dataDisksObject;
		if(!valueDataDisksDataDisk["Category"].isNull())
			dataDisksObject.category = valueDataDisksDataDisk["Category"].asString();
		if(!valueDataDisksDataDisk["Encrypted"].isNull())
			dataDisksObject.encrypted = valueDataDisksDataDisk["Encrypted"].asString();
		if(!valueDataDisksDataDisk["PerformanceLevel"].isNull())
			dataDisksObject.performanceLevel = valueDataDisksDataDisk["PerformanceLevel"].asString();
		if(!valueDataDisksDataDisk["Size"].isNull())
			dataDisksObject.size = std::stol(valueDataDisksDataDisk["Size"].asString());
		if(!valueDataDisksDataDisk["DeleteWithInstance"].isNull())
			dataDisksObject.deleteWithInstance = valueDataDisksDataDisk["DeleteWithInstance"].asString() == "true";
		dataDisks_.push_back(dataDisksObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["ResourceId"].isNull())
			tagsObject.resourceId = valueTagsTag["ResourceId"].asString();
		if(!valueTagsTag["TagKey"].isNull())
			tagsObject.tagKey = valueTagsTag["TagKey"].asString();
		if(!valueTagsTag["ResourceType"].isNull())
			tagsObject.resourceType = valueTagsTag["ResourceType"].asString();
		if(!valueTagsTag["TagValue"].isNull())
			tagsObject.tagValue = valueTagsTag["TagValue"].asString();
		tags_.push_back(tagsObject);
	}
	auto allOperationLocksNode = value["OperationLocks"]["LockReason"];
	for (auto valueOperationLocksLockReason : allOperationLocksNode)
	{
		LockReason operationLocksObject;
		if(!valueOperationLocksLockReason["LockReason"].isNull())
			operationLocksObject.lockReason = valueOperationLocksLockReason["LockReason"].asString();
		operationLocks_.push_back(operationLocksObject);
	}
	auto dedicatedHostAttributeNode = value["DedicatedHostAttribute"];
	if(!dedicatedHostAttributeNode["DedicatedHostId"].isNull())
		dedicatedHostAttribute_.dedicatedHostId = dedicatedHostAttributeNode["DedicatedHostId"].asString();
	if(!dedicatedHostAttributeNode["DedicatedHostName"].isNull())
		dedicatedHostAttribute_.dedicatedHostName = dedicatedHostAttributeNode["DedicatedHostName"].asString();
	auto eipAddressNode = value["EipAddress"];
	if(!eipAddressNode["AllocationId"].isNull())
		eipAddress_.allocationId = eipAddressNode["AllocationId"].asString();
	if(!eipAddressNode["Bandwidth"].isNull())
		eipAddress_.bandwidth = std::stoi(eipAddressNode["Bandwidth"].asString());
	if(!eipAddressNode["InternetChargeType"].isNull())
		eipAddress_.internetChargeType = eipAddressNode["InternetChargeType"].asString();
	if(!eipAddressNode["IpAddress"].isNull())
		eipAddress_.ipAddress = eipAddressNode["IpAddress"].asString();
	auto vpcAttributesNode = value["VpcAttributes"];
	if(!vpcAttributesNode["NatIpAddress"].isNull())
		vpcAttributes_.natIpAddress = vpcAttributesNode["NatIpAddress"].asString();
	if(!vpcAttributesNode["VSwitchId"].isNull())
		vpcAttributes_.vSwitchId = vpcAttributesNode["VSwitchId"].asString();
	if(!vpcAttributesNode["VpcId"].isNull())
		vpcAttributes_.vpcId = vpcAttributesNode["VpcId"].asString();
		auto allPrivateIpAddress = vpcAttributesNode["PrivateIpAddress"]["IpAddress"];
		for (auto value : allPrivateIpAddress)
			vpcAttributes_.privateIpAddress.push_back(value.asString());
	auto systemDiskNode = value["SystemDisk"];
	if(!systemDiskNode["SystemDiskSize"].isNull())
		systemDisk_.systemDiskSize = std::stol(systemDiskNode["SystemDiskSize"].asString());
	if(!systemDiskNode["SystemDiskCategory"].isNull())
		systemDisk_.systemDiskCategory = systemDiskNode["SystemDiskCategory"].asString();
	if(!systemDiskNode["SystemDiskPerformanceLevel"].isNull())
		systemDisk_.systemDiskPerformanceLevel = systemDiskNode["SystemDiskPerformanceLevel"].asString();
	if(!systemDiskNode["DeleteWithInstance"].isNull())
		systemDisk_.deleteWithInstance = systemDiskNode["DeleteWithInstance"].asString() == "true";
	if(!systemDiskNode["Encrypted"].isNull())
		systemDisk_.encrypted = systemDiskNode["Encrypted"].asString();
	auto allInnerIpAddress = value["InnerIpAddress"]["IpAddress"];
	for (const auto &item : allInnerIpAddress)
		innerIpAddress_.push_back(item.asString());
	auto allPublicIpAddress = value["PublicIpAddress"]["IpAddress"];
	for (const auto &item : allPublicIpAddress)
		publicIpAddress_.push_back(item.asString());
	auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
	for (const auto &item : allSecurityGroupIds)
		securityGroupIds_.push_back(item.asString());
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["Cpu"].isNull())
		cpu_ = std::stoi(value["Cpu"].asString());
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["CreditSpecification"].isNull())
		creditSpecification_ = value["CreditSpecification"].asString();
	if(!value["DeploymentSetId"].isNull())
		deploymentSetId_ = value["DeploymentSetId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["DiskType"].isNull())
		diskType_ = value["DiskType"].asString();
	if(!value["EcsInstanceType"].isNull())
		ecsInstanceType_ = value["EcsInstanceType"].asString();
	if(!value["EnableJumboFrame"].isNull())
		enableJumboFrame_ = value["EnableJumboFrame"].asString() == "true";
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["HostName"].isNull())
		hostName_ = value["HostName"].asString();
	if(!value["HostType"].isNull())
		hostType_ = value["HostType"].asString();
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["InstanceNetworkType"].isNull())
		instanceNetworkType_ = value["InstanceNetworkType"].asString();
	if(!value["InstanceType"].isNull())
		instanceType_ = value["InstanceType"].asString();
	if(!value["InternetChargeType"].isNull())
		internetChargeType_ = value["InternetChargeType"].asString();
	if(!value["InternetMaxBandwidthIn"].isNull())
		internetMaxBandwidthIn_ = std::stoi(value["InternetMaxBandwidthIn"].asString());
	if(!value["InternetMaxBandwidthOut"].isNull())
		internetMaxBandwidthOut_ = std::stoi(value["InternetMaxBandwidthOut"].asString());
	if(!value["IoOptimized"].isNull())
		ioOptimized_ = value["IoOptimized"].asString();
	if(!value["KeyPairName"].isNull())
		keyPairName_ = value["KeyPairName"].asString();
	if(!value["Memory"].isNull())
		memory_ = std::stoi(value["Memory"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["SerialNumber"].isNull())
		serialNumber_ = value["SerialNumber"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["StoppedMode"].isNull())
		stoppedMode_ = value["StoppedMode"].asString();
	if(!value["VlanId"].isNull())
		vlanId_ = value["VlanId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["InstanceChargeType"].isNull())
		instanceChargeType_ = value["InstanceChargeType"].asString();
	if(!value["DbType"].isNull())
		dbType_ = value["DbType"].asString();
	if(!value["SpotStrategy"].isNull())
		spotStrategy_ = value["SpotStrategy"].asString();
	if(!value["CreateMode"].isNull())
		createMode_ = std::stoi(value["CreateMode"].asString());
	if(!value["AutoRenew"].isNull())
		autoRenew_ = value["AutoRenew"].asString() == "true";
	if(!value["DeletionProtection"].isNull())
		deletionProtection_ = value["DeletionProtection"].asString() == "true";
	if(!value["Gpu"].isNull())
		gpu_ = std::stoi(value["Gpu"].asString());
	if(!value["GpuTypes"].isNull())
		gpuTypes_ = value["GpuTypes"].asString();
	if(!value["NodeType"].isNull())
		nodeType_ = value["NodeType"].asString();
	if(!value["UserData"].isNull())
		userData_ = value["UserData"].asString();

}

std::vector<DescribeRCInstanceAttributeResult::DataDisk> DescribeRCInstanceAttributeResult::getDataDisks()const
{
	return dataDisks_;
}

std::string DescribeRCInstanceAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

int DescribeRCInstanceAttributeResult::getMemory()const
{
	return memory_;
}

std::string DescribeRCInstanceAttributeResult::getInstanceChargeType()const
{
	return instanceChargeType_;
}

int DescribeRCInstanceAttributeResult::getCpu()const
{
	return cpu_;
}

int DescribeRCInstanceAttributeResult::getGpu()const
{
	return gpu_;
}

std::string DescribeRCInstanceAttributeResult::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

DescribeRCInstanceAttributeResult::SystemDisk DescribeRCInstanceAttributeResult::getSystemDisk()const
{
	return systemDisk_;
}

std::string DescribeRCInstanceAttributeResult::getDiskType()const
{
	return diskType_;
}

std::vector<std::string> DescribeRCInstanceAttributeResult::getInnerIpAddress()const
{
	return innerIpAddress_;
}

bool DescribeRCInstanceAttributeResult::getEnableJumboFrame()const
{
	return enableJumboFrame_;
}

std::string DescribeRCInstanceAttributeResult::getExpiredTime()const
{
	return expiredTime_;
}

DescribeRCInstanceAttributeResult::EipAddress DescribeRCInstanceAttributeResult::getEipAddress()const
{
	return eipAddress_;
}

std::string DescribeRCInstanceAttributeResult::getImageId()const
{
	return imageId_;
}

std::string DescribeRCInstanceAttributeResult::getEcsInstanceType()const
{
	return ecsInstanceType_;
}

std::vector<DescribeRCInstanceAttributeResult::Tag> DescribeRCInstanceAttributeResult::getTags()const
{
	return tags_;
}

std::string DescribeRCInstanceAttributeResult::getHostName()const
{
	return hostName_;
}

std::string DescribeRCInstanceAttributeResult::getVlanId()const
{
	return vlanId_;
}

std::string DescribeRCInstanceAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeRCInstanceAttributeResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeRCInstanceAttributeResult::getStoppedMode()const
{
	return stoppedMode_;
}

bool DescribeRCInstanceAttributeResult::getDeletionProtection()const
{
	return deletionProtection_;
}

DescribeRCInstanceAttributeResult::VpcAttributes DescribeRCInstanceAttributeResult::getVpcAttributes()const
{
	return vpcAttributes_;
}

std::vector<std::string> DescribeRCInstanceAttributeResult::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

std::string DescribeRCInstanceAttributeResult::getInternetChargeType()const
{
	return internetChargeType_;
}

std::string DescribeRCInstanceAttributeResult::getDeploymentSetId()const
{
	return deploymentSetId_;
}

std::string DescribeRCInstanceAttributeResult::getInstanceName()const
{
	return instanceName_;
}

int DescribeRCInstanceAttributeResult::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

std::string DescribeRCInstanceAttributeResult::getSerialNumber()const
{
	return serialNumber_;
}

int DescribeRCInstanceAttributeResult::getCreateMode()const
{
	return createMode_;
}

std::string DescribeRCInstanceAttributeResult::getNodeType()const
{
	return nodeType_;
}

std::string DescribeRCInstanceAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeRCInstanceAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeRCInstanceAttributeResult::getUserData()const
{
	return userData_;
}

bool DescribeRCInstanceAttributeResult::getAutoRenew()const
{
	return autoRenew_;
}

std::vector<std::string> DescribeRCInstanceAttributeResult::getPublicIpAddress()const
{
	return publicIpAddress_;
}

std::string DescribeRCInstanceAttributeResult::getHostType()const
{
	return hostType_;
}

std::string DescribeRCInstanceAttributeResult::getInstanceType()const
{
	return instanceType_;
}

std::string DescribeRCInstanceAttributeResult::getSpotStrategy()const
{
	return spotStrategy_;
}

std::string DescribeRCInstanceAttributeResult::getKeyPairName()const
{
	return keyPairName_;
}

std::string DescribeRCInstanceAttributeResult::getGpuTypes()const
{
	return gpuTypes_;
}

std::string DescribeRCInstanceAttributeResult::getIoOptimized()const
{
	return ioOptimized_;
}

std::string DescribeRCInstanceAttributeResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeRCInstanceAttributeResult::getClusterId()const
{
	return clusterId_;
}

DescribeRCInstanceAttributeResult::DedicatedHostAttribute DescribeRCInstanceAttributeResult::getDedicatedHostAttribute()const
{
	return dedicatedHostAttribute_;
}

std::vector<DescribeRCInstanceAttributeResult::LockReason> DescribeRCInstanceAttributeResult::getOperationLocks()const
{
	return operationLocks_;
}

std::string DescribeRCInstanceAttributeResult::getDbType()const
{
	return dbType_;
}

int DescribeRCInstanceAttributeResult::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

std::string DescribeRCInstanceAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeRCInstanceAttributeResult::getCreditSpecification()const
{
	return creditSpecification_;
}

