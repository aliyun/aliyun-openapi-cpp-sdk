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

#include <alibabacloud/ecs/model/DescribeInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceAttributeResult::DescribeInstanceAttributeResult() :
	ServiceResult()
{}

DescribeInstanceAttributeResult::DescribeInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceAttributeResult::~DescribeInstanceAttributeResult()
{}

void DescribeInstanceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allOperationLocks = value["OperationLocks"]["LockReason"];
	for (auto value : allOperationLocks)
	{
		LockReason lockReasonObject;
		lockReasonObject.lockReason = value["LockReason"].asString();
		operationLocks_.push_back(lockReasonObject);
	}
	auto allVpcAttributes = value["VpcAttributes"];
	for (auto value : allVpcAttributes)
	{
		VpcAttributes vpcAttributesObject;
		vpcAttributesObject.vpcId = value["VpcId"].asString();
		vpcAttributesObject.vSwitchId = value["VSwitchId"].asString();
		vpcAttributesObject.natIpAddress = value["NatIpAddress"].asString();
		auto allPrivateIpAddress = value["PrivateIpAddress"]["IpAddress"];
		for (auto value : allPrivateIpAddress)
			vpcAttributesObject.privateIpAddress.push_back(value.asString());
		vpcAttributes_.push_back(vpcAttributesObject);
	}
	auto allEipAddress = value["EipAddress"];
	for (auto value : allEipAddress)
	{
		EipAddress eipAddressObject;
		eipAddressObject.allocationId = value["AllocationId"].asString();
		eipAddressObject.ipAddress = value["IpAddress"].asString();
		eipAddressObject.bandwidth = std::stoi(value["Bandwidth"].asString());
		eipAddressObject.internetChargeType = value["InternetChargeType"].asString();
		eipAddress_.push_back(eipAddressObject);
	}
	auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
	for (const auto &item : allSecurityGroupIds)
		securityGroupIds_.push_back(item.asString());
	auto allPublicIpAddress = value["PublicIpAddress"]["IpAddress"];
	for (const auto &item : allPublicIpAddress)
		publicIpAddress_.push_back(item.asString());
	auto allInnerIpAddress = value["InnerIpAddress"]["IpAddress"];
	for (const auto &item : allInnerIpAddress)
		innerIpAddress_.push_back(item.asString());
	instanceId_ = value["InstanceId"].asString();
	instanceName_ = value["InstanceName"].asString();
	imageId_ = value["ImageId"].asString();
	regionId_ = value["RegionId"].asString();
	zoneId_ = value["ZoneId"].asString();
	clusterId_ = value["ClusterId"].asString();
	instanceType_ = value["InstanceType"].asString();
	cpu_ = std::stoi(value["Cpu"].asString());
	memory_ = std::stoi(value["Memory"].asString());
	hostName_ = value["HostName"].asString();
	status_ = value["Status"].asString();
	internetChargeType_ = value["InternetChargeType"].asString();
	internetMaxBandwidthIn_ = std::stoi(value["InternetMaxBandwidthIn"].asString());
	internetMaxBandwidthOut_ = std::stoi(value["InternetMaxBandwidthOut"].asString());
	vlanId_ = value["VlanId"].asString();
	serialNumber_ = value["SerialNumber"].asString();
	creationTime_ = value["CreationTime"].asString();
	description_ = value["Description"].asString();
	instanceNetworkType_ = value["InstanceNetworkType"].asString();
	ioOptimized_ = value["IoOptimized"].asString();
	instanceChargeType_ = value["InstanceChargeType"].asString();
	expiredTime_ = value["ExpiredTime"].asString();
	stoppedMode_ = value["StoppedMode"].asString();

}

std::string DescribeInstanceAttributeResult::getDescription()const
{
	return description_;
}

void DescribeInstanceAttributeResult::setDescription(const std::string& description)
{
	description_ = description;
}

int DescribeInstanceAttributeResult::getMemory()const
{
	return memory_;
}

void DescribeInstanceAttributeResult::setMemory(int memory)
{
	memory_ = memory;
}

std::string DescribeInstanceAttributeResult::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeInstanceAttributeResult::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
}

int DescribeInstanceAttributeResult::getCpu()const
{
	return cpu_;
}

void DescribeInstanceAttributeResult::setCpu(int cpu)
{
	cpu_ = cpu;
}

std::string DescribeInstanceAttributeResult::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void DescribeInstanceAttributeResult::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
}

std::vector<std::string> DescribeInstanceAttributeResult::getPublicIpAddress()const
{
	return publicIpAddress_;
}

void DescribeInstanceAttributeResult::setPublicIpAddress(const std::vector<std::string>& publicIpAddress)
{
	publicIpAddress_ = publicIpAddress;
}

std::vector<std::string> DescribeInstanceAttributeResult::getInnerIpAddress()const
{
	return innerIpAddress_;
}

void DescribeInstanceAttributeResult::setInnerIpAddress(const std::vector<std::string>& innerIpAddress)
{
	innerIpAddress_ = innerIpAddress;
}

std::string DescribeInstanceAttributeResult::getExpiredTime()const
{
	return expiredTime_;
}

void DescribeInstanceAttributeResult::setExpiredTime(const std::string& expiredTime)
{
	expiredTime_ = expiredTime;
}

std::string DescribeInstanceAttributeResult::getImageId()const
{
	return imageId_;
}

void DescribeInstanceAttributeResult::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
}

std::string DescribeInstanceAttributeResult::getInstanceType()const
{
	return instanceType_;
}

void DescribeInstanceAttributeResult::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
}

std::string DescribeInstanceAttributeResult::getHostName()const
{
	return hostName_;
}

void DescribeInstanceAttributeResult::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
}

std::string DescribeInstanceAttributeResult::getVlanId()const
{
	return vlanId_;
}

void DescribeInstanceAttributeResult::setVlanId(const std::string& vlanId)
{
	vlanId_ = vlanId;
}

std::string DescribeInstanceAttributeResult::getStatus()const
{
	return status_;
}

void DescribeInstanceAttributeResult::setStatus(const std::string& status)
{
	status_ = status;
}

std::string DescribeInstanceAttributeResult::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribeInstanceAttributeResult::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
}

std::string DescribeInstanceAttributeResult::getZoneId()const
{
	return zoneId_;
}

void DescribeInstanceAttributeResult::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
}

std::string DescribeInstanceAttributeResult::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceAttributeResult::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
}

std::string DescribeInstanceAttributeResult::getClusterId()const
{
	return clusterId_;
}

void DescribeInstanceAttributeResult::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
}

std::string DescribeInstanceAttributeResult::getStoppedMode()const
{
	return stoppedMode_;
}

void DescribeInstanceAttributeResult::setStoppedMode(const std::string& stoppedMode)
{
	stoppedMode_ = stoppedMode;
}

std::vector<std::string> DescribeInstanceAttributeResult::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

void DescribeInstanceAttributeResult::setSecurityGroupIds(const std::vector<std::string>& securityGroupIds)
{
	securityGroupIds_ = securityGroupIds;
}

std::string DescribeInstanceAttributeResult::getInternetChargeType()const
{
	return internetChargeType_;
}

void DescribeInstanceAttributeResult::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
}

std::string DescribeInstanceAttributeResult::getInstanceName()const
{
	return instanceName_;
}

void DescribeInstanceAttributeResult::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
}

int DescribeInstanceAttributeResult::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void DescribeInstanceAttributeResult::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
}

int DescribeInstanceAttributeResult::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void DescribeInstanceAttributeResult::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
}

std::string DescribeInstanceAttributeResult::getSerialNumber()const
{
	return serialNumber_;
}

void DescribeInstanceAttributeResult::setSerialNumber(const std::string& serialNumber)
{
	serialNumber_ = serialNumber;
}

std::string DescribeInstanceAttributeResult::getCreationTime()const
{
	return creationTime_;
}

void DescribeInstanceAttributeResult::setCreationTime(const std::string& creationTime)
{
	creationTime_ = creationTime;
}

std::string DescribeInstanceAttributeResult::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceAttributeResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

