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

#include <alibabacloud/ecs/model/DescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstancesResult::DescribeInstancesResult() :
	ServiceResult()
{}

DescribeInstancesResult::DescribeInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesResult::~DescribeInstancesResult()
{}

void DescribeInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allInstances = value["Instances"]["Instance"];
	for (auto value : allInstances)
	{
		Instance instancesObject;
		if(!value["InstanceId"].isNull())
			instancesObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			instancesObject.instanceName = value["InstanceName"].asString();
		if(!value["Description"].isNull())
			instancesObject.description = value["Description"].asString();
		if(!value["ImageId"].isNull())
			instancesObject.imageId = value["ImageId"].asString();
		if(!value["OSName"].isNull())
			instancesObject.oSName = value["OSName"].asString();
		if(!value["OSType"].isNull())
			instancesObject.oSType = value["OSType"].asString();
		if(!value["RegionId"].isNull())
			instancesObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			instancesObject.zoneId = value["ZoneId"].asString();
		if(!value["ClusterId"].isNull())
			instancesObject.clusterId = value["ClusterId"].asString();
		if(!value["InstanceType"].isNull())
			instancesObject.instanceType = value["InstanceType"].asString();
		if(!value["Cpu"].isNull())
			instancesObject.cpu = std::stoi(value["Cpu"].asString());
		if(!value["Memory"].isNull())
			instancesObject.memory = std::stoi(value["Memory"].asString());
		if(!value["HostName"].isNull())
			instancesObject.hostName = value["HostName"].asString();
		if(!value["DeploymentSetId"].isNull())
			instancesObject.deploymentSetId = value["DeploymentSetId"].asString();
		if(!value["Status"].isNull())
			instancesObject.status = value["Status"].asString();
		if(!value["SerialNumber"].isNull())
			instancesObject.serialNumber = value["SerialNumber"].asString();
		if(!value["InternetChargeType"].isNull())
			instancesObject.internetChargeType = value["InternetChargeType"].asString();
		if(!value["InternetMaxBandwidthIn"].isNull())
			instancesObject.internetMaxBandwidthIn = std::stoi(value["InternetMaxBandwidthIn"].asString());
		if(!value["InternetMaxBandwidthOut"].isNull())
			instancesObject.internetMaxBandwidthOut = std::stoi(value["InternetMaxBandwidthOut"].asString());
		if(!value["VlanId"].isNull())
			instancesObject.vlanId = value["VlanId"].asString();
		if(!value["CreationTime"].isNull())
			instancesObject.creationTime = value["CreationTime"].asString();
		if(!value["StartTime"].isNull())
			instancesObject.startTime = value["StartTime"].asString();
		if(!value["InstanceNetworkType"].isNull())
			instancesObject.instanceNetworkType = value["InstanceNetworkType"].asString();
		if(!value["InstanceChargeType"].isNull())
			instancesObject.instanceChargeType = value["InstanceChargeType"].asString();
		if(!value["SaleCycle"].isNull())
			instancesObject.saleCycle = value["SaleCycle"].asString();
		if(!value["ExpiredTime"].isNull())
			instancesObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["AutoReleaseTime"].isNull())
			instancesObject.autoReleaseTime = value["AutoReleaseTime"].asString();
		if(!value["IoOptimized"].isNull())
			instancesObject.ioOptimized = value["IoOptimized"].asString() == "true";
		if(!value["DeviceAvailable"].isNull())
			instancesObject.deviceAvailable = value["DeviceAvailable"].asString() == "true";
		if(!value["InstanceTypeFamily"].isNull())
			instancesObject.instanceTypeFamily = value["InstanceTypeFamily"].asString();
		if(!value["LocalStorageCapacity"].isNull())
			instancesObject.localStorageCapacity = std::stol(value["LocalStorageCapacity"].asString());
		if(!value["LocalStorageAmount"].isNull())
			instancesObject.localStorageAmount = std::stoi(value["LocalStorageAmount"].asString());
		if(!value["GPUAmount"].isNull())
			instancesObject.gPUAmount = std::stoi(value["GPUAmount"].asString());
		if(!value["GPUSpec"].isNull())
			instancesObject.gPUSpec = value["GPUSpec"].asString();
		if(!value["SpotStrategy"].isNull())
			instancesObject.spotStrategy = value["SpotStrategy"].asString();
		if(!value["SpotPriceLimit"].isNull())
			instancesObject.spotPriceLimit = std::stof(value["SpotPriceLimit"].asString());
		if(!value["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["KeyPairName"].isNull())
			instancesObject.keyPairName = value["KeyPairName"].asString();
		if(!value["Recyclable"].isNull())
			instancesObject.recyclable = value["Recyclable"].asString() == "true";
		if(!value["HpcClusterId"].isNull())
			instancesObject.hpcClusterId = value["HpcClusterId"].asString();
		if(!value["StoppedMode"].isNull())
			instancesObject.stoppedMode = value["StoppedMode"].asString();
		if(!value["CreditSpecification"].isNull())
			instancesObject.creditSpecification = value["CreditSpecification"].asString();
		if(!value["DeletionProtection"].isNull())
			instancesObject.deletionProtection = value["DeletionProtection"].asString() == "true";
		auto allNetworkInterfaces = value["NetworkInterfaces"]["NetworkInterface"];
		for (auto value : allNetworkInterfaces)
		{
			Instance::NetworkInterface networkInterfacesObject;
			if(!value["NetworkInterfaceId"].isNull())
				networkInterfacesObject.networkInterfaceId = value["NetworkInterfaceId"].asString();
			if(!value["MacAddress"].isNull())
				networkInterfacesObject.macAddress = value["MacAddress"].asString();
			if(!value["PrimaryIpAddress"].isNull())
				networkInterfacesObject.primaryIpAddress = value["PrimaryIpAddress"].asString();
			instancesObject.networkInterfaces.push_back(networkInterfacesObject);
		}
		auto allOperationLocks = value["OperationLocks"]["LockReason"];
		for (auto value : allOperationLocks)
		{
			Instance::LockReason operationLocksObject;
			if(!value["LockReason"].isNull())
				operationLocksObject.lockReason = value["LockReason"].asString();
			if(!value["LockMsg"].isNull())
				operationLocksObject.lockMsg = value["LockMsg"].asString();
			instancesObject.operationLocks.push_back(operationLocksObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Instance::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
			instancesObject.tags.push_back(tagsObject);
		}
		auto vpcAttributesNode = value["VpcAttributes"];
		if(!vpcAttributesNode["VpcId"].isNull())
			instancesObject.vpcAttributes.vpcId = vpcAttributesNode["VpcId"].asString();
		if(!vpcAttributesNode["VSwitchId"].isNull())
			instancesObject.vpcAttributes.vSwitchId = vpcAttributesNode["VSwitchId"].asString();
		if(!vpcAttributesNode["NatIpAddress"].isNull())
			instancesObject.vpcAttributes.natIpAddress = vpcAttributesNode["NatIpAddress"].asString();
			auto allPrivateIpAddress = vpcAttributesNode["PrivateIpAddress"]["IpAddress"];
			for (auto value : allPrivateIpAddress)
				instancesObject.vpcAttributes.privateIpAddress.push_back(value.asString());
		auto eipAddressNode = value["EipAddress"];
		if(!eipAddressNode["AllocationId"].isNull())
			instancesObject.eipAddress.allocationId = eipAddressNode["AllocationId"].asString();
		if(!eipAddressNode["IpAddress"].isNull())
			instancesObject.eipAddress.ipAddress = eipAddressNode["IpAddress"].asString();
		if(!eipAddressNode["Bandwidth"].isNull())
			instancesObject.eipAddress.bandwidth = std::stoi(eipAddressNode["Bandwidth"].asString());
		if(!eipAddressNode["InternetChargeType"].isNull())
			instancesObject.eipAddress.internetChargeType = eipAddressNode["InternetChargeType"].asString();
		if(!eipAddressNode["IsSupportUnassociate"].isNull())
			instancesObject.eipAddress.isSupportUnassociate = eipAddressNode["IsSupportUnassociate"].asString() == "true";
		auto dedicatedHostAttributeNode = value["DedicatedHostAttribute"];
		if(!dedicatedHostAttributeNode["DedicatedHostId"].isNull())
			instancesObject.dedicatedHostAttribute.dedicatedHostId = dedicatedHostAttributeNode["DedicatedHostId"].asString();
		if(!dedicatedHostAttributeNode["DedicatedHostName"].isNull())
			instancesObject.dedicatedHostAttribute.dedicatedHostName = dedicatedHostAttributeNode["DedicatedHostName"].asString();
		auto ecsCapacityReservationAttrNode = value["EcsCapacityReservationAttr"];
		if(!ecsCapacityReservationAttrNode["CapacityReservationId"].isNull())
			instancesObject.ecsCapacityReservationAttr.capacityReservationId = ecsCapacityReservationAttrNode["CapacityReservationId"].asString();
		if(!ecsCapacityReservationAttrNode["CapacityReservationPreference"].isNull())
			instancesObject.ecsCapacityReservationAttr.capacityReservationPreference = ecsCapacityReservationAttrNode["CapacityReservationPreference"].asString();
		auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
		for (auto value : allSecurityGroupIds)
			instancesObject.securityGroupIds.push_back(value.asString());
		auto allPublicIpAddress = value["PublicIpAddress"]["IpAddress"];
		for (auto value : allPublicIpAddress)
			instancesObject.publicIpAddress.push_back(value.asString());
		auto allInnerIpAddress = value["InnerIpAddress"]["IpAddress"];
		for (auto value : allInnerIpAddress)
			instancesObject.innerIpAddress.push_back(value.asString());
		auto allRdmaIpAddress = value["RdmaIpAddress"]["IpAddress"];
		for (auto value : allRdmaIpAddress)
			instancesObject.rdmaIpAddress.push_back(value.asString());
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeInstancesResult::Instance> DescribeInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

