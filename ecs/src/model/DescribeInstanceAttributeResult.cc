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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allOperationLocks = value["OperationLocks"]["LockReason"];
	for (auto value : allOperationLocks)
	{
		LockReason operationLocksObject;
		if(!value["LockReason"].isNull())
			operationLocksObject.lockReason = value["LockReason"].asString();
		operationLocks_.push_back(operationLocksObject);
	}
	auto vpcAttributesNode = value["VpcAttributes"];
	if(!vpcAttributesNode["VpcId"].isNull())
		vpcAttributes_.vpcId = vpcAttributesNode["VpcId"].asString();
	if(!vpcAttributesNode["VSwitchId"].isNull())
		vpcAttributes_.vSwitchId = vpcAttributesNode["VSwitchId"].asString();
	if(!vpcAttributesNode["NatIpAddress"].isNull())
		vpcAttributes_.natIpAddress = vpcAttributesNode["NatIpAddress"].asString();
		auto allPrivateIpAddress = vpcAttributesNode["PrivateIpAddress"]["IpAddress"];
		for (auto value : allPrivateIpAddress)
			vpcAttributes_.privateIpAddress.push_back(value.asString());
	auto eipAddressNode = value["EipAddress"];
	if(!eipAddressNode["AllocationId"].isNull())
		eipAddress_.allocationId = eipAddressNode["AllocationId"].asString();
	if(!eipAddressNode["IpAddress"].isNull())
		eipAddress_.ipAddress = eipAddressNode["IpAddress"].asString();
	if(!eipAddressNode["Bandwidth"].isNull())
		eipAddress_.bandwidth = std::stoi(eipAddressNode["Bandwidth"].asString());
	if(!eipAddressNode["InternetChargeType"].isNull())
		eipAddress_.internetChargeType = eipAddressNode["InternetChargeType"].asString();
	auto dedicatedHostAttributeNode = value["DedicatedHostAttribute"];
	if(!dedicatedHostAttributeNode["DedicatedHostId"].isNull())
		dedicatedHostAttribute_.dedicatedHostId = dedicatedHostAttributeNode["DedicatedHostId"].asString();
	if(!dedicatedHostAttributeNode["DedicatedHostName"].isNull())
		dedicatedHostAttribute_.dedicatedHostName = dedicatedHostAttributeNode["DedicatedHostName"].asString();
	auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
	for (const auto &item : allSecurityGroupIds)
		securityGroupIds_.push_back(item.asString());
	auto allPublicIpAddress = value["PublicIpAddress"]["IpAddress"];
	for (const auto &item : allPublicIpAddress)
		publicIpAddress_.push_back(item.asString());
	auto allInnerIpAddress = value["InnerIpAddress"]["IpAddress"];
	for (const auto &item : allInnerIpAddress)
		innerIpAddress_.push_back(item.asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["InstanceType"].isNull())
		instanceType_ = value["InstanceType"].asString();
	if(!value["Cpu"].isNull())
		cpu_ = std::stoi(value["Cpu"].asString());
	if(!value["Memory"].isNull())
		memory_ = std::stoi(value["Memory"].asString());
	if(!value["HostName"].isNull())
		hostName_ = value["HostName"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["InternetChargeType"].isNull())
		internetChargeType_ = value["InternetChargeType"].asString();
	if(!value["InternetMaxBandwidthIn"].isNull())
		internetMaxBandwidthIn_ = std::stoi(value["InternetMaxBandwidthIn"].asString());
	if(!value["InternetMaxBandwidthOut"].isNull())
		internetMaxBandwidthOut_ = std::stoi(value["InternetMaxBandwidthOut"].asString());
	if(!value["VlanId"].isNull())
		vlanId_ = value["VlanId"].asString();
	if(!value["SerialNumber"].isNull())
		serialNumber_ = value["SerialNumber"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["InstanceNetworkType"].isNull())
		instanceNetworkType_ = value["InstanceNetworkType"].asString();
	if(!value["IoOptimized"].isNull())
		ioOptimized_ = value["IoOptimized"].asString();
	if(!value["InstanceChargeType"].isNull())
		instanceChargeType_ = value["InstanceChargeType"].asString();
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["StoppedMode"].isNull())
		stoppedMode_ = value["StoppedMode"].asString();
	if(!value["CreditSpecification"].isNull())
		creditSpecification_ = value["CreditSpecification"].asString();

}

std::string DescribeInstanceAttributeResult::getDescription()const
{
	return description_;
}

int DescribeInstanceAttributeResult::getMemory()const
{
	return memory_;
}

std::string DescribeInstanceAttributeResult::getInstanceChargeType()const
{
	return instanceChargeType_;
}

int DescribeInstanceAttributeResult::getCpu()const
{
	return cpu_;
}

std::string DescribeInstanceAttributeResult::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

std::vector<std::string> DescribeInstanceAttributeResult::getPublicIpAddress()const
{
	return publicIpAddress_;
}

std::vector<std::string> DescribeInstanceAttributeResult::getInnerIpAddress()const
{
	return innerIpAddress_;
}

std::string DescribeInstanceAttributeResult::getExpiredTime()const
{
	return expiredTime_;
}

DescribeInstanceAttributeResult::EipAddress DescribeInstanceAttributeResult::getEipAddress()const
{
	return eipAddress_;
}

std::string DescribeInstanceAttributeResult::getImageId()const
{
	return imageId_;
}

std::string DescribeInstanceAttributeResult::getInstanceType()const
{
	return instanceType_;
}

std::string DescribeInstanceAttributeResult::getHostName()const
{
	return hostName_;
}

std::string DescribeInstanceAttributeResult::getVlanId()const
{
	return vlanId_;
}

std::string DescribeInstanceAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeInstanceAttributeResult::getIoOptimized()const
{
	return ioOptimized_;
}

std::string DescribeInstanceAttributeResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeInstanceAttributeResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeInstanceAttributeResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeInstanceAttributeResult::getStoppedMode()const
{
	return stoppedMode_;
}

DescribeInstanceAttributeResult::DedicatedHostAttribute DescribeInstanceAttributeResult::getDedicatedHostAttribute()const
{
	return dedicatedHostAttribute_;
}

DescribeInstanceAttributeResult::VpcAttributes DescribeInstanceAttributeResult::getVpcAttributes()const
{
	return vpcAttributes_;
}

std::vector<std::string> DescribeInstanceAttributeResult::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

std::vector<DescribeInstanceAttributeResult::LockReason> DescribeInstanceAttributeResult::getOperationLocks()const
{
	return operationLocks_;
}

std::string DescribeInstanceAttributeResult::getInternetChargeType()const
{
	return internetChargeType_;
}

std::string DescribeInstanceAttributeResult::getInstanceName()const
{
	return instanceName_;
}

int DescribeInstanceAttributeResult::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

int DescribeInstanceAttributeResult::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

std::string DescribeInstanceAttributeResult::getSerialNumber()const
{
	return serialNumber_;
}

std::string DescribeInstanceAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeInstanceAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeInstanceAttributeResult::getCreditSpecification()const
{
	return creditSpecification_;
}

