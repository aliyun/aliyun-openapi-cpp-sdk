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
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["Description"].isNull())
			instancesObject.description = valueInstancesInstance["Description"].asString();
		if(!valueInstancesInstance["ImageId"].isNull())
			instancesObject.imageId = valueInstancesInstance["ImageId"].asString();
		if(!valueInstancesInstance["OSName"].isNull())
			instancesObject.oSName = valueInstancesInstance["OSName"].asString();
		if(!valueInstancesInstance["OSNameEn"].isNull())
			instancesObject.oSNameEn = valueInstancesInstance["OSNameEn"].asString();
		if(!valueInstancesInstance["OSType"].isNull())
			instancesObject.oSType = valueInstancesInstance["OSType"].asString();
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesInstance["ZoneId"].asString();
		if(!valueInstancesInstance["ClusterId"].isNull())
			instancesObject.clusterId = valueInstancesInstance["ClusterId"].asString();
		if(!valueInstancesInstance["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesInstance["InstanceType"].asString();
		if(!valueInstancesInstance["Cpu"].isNull())
			instancesObject.cpu = std::stoi(valueInstancesInstance["Cpu"].asString());
		if(!valueInstancesInstance["Memory"].isNull())
			instancesObject.memory = std::stoi(valueInstancesInstance["Memory"].asString());
		if(!valueInstancesInstance["HostName"].isNull())
			instancesObject.hostName = valueInstancesInstance["HostName"].asString();
		if(!valueInstancesInstance["DeploymentSetId"].isNull())
			instancesObject.deploymentSetId = valueInstancesInstance["DeploymentSetId"].asString();
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["SerialNumber"].isNull())
			instancesObject.serialNumber = valueInstancesInstance["SerialNumber"].asString();
		if(!valueInstancesInstance["InternetChargeType"].isNull())
			instancesObject.internetChargeType = valueInstancesInstance["InternetChargeType"].asString();
		if(!valueInstancesInstance["InternetMaxBandwidthIn"].isNull())
			instancesObject.internetMaxBandwidthIn = std::stoi(valueInstancesInstance["InternetMaxBandwidthIn"].asString());
		if(!valueInstancesInstance["InternetMaxBandwidthOut"].isNull())
			instancesObject.internetMaxBandwidthOut = std::stoi(valueInstancesInstance["InternetMaxBandwidthOut"].asString());
		if(!valueInstancesInstance["VlanId"].isNull())
			instancesObject.vlanId = valueInstancesInstance["VlanId"].asString();
		if(!valueInstancesInstance["CreationTime"].isNull())
			instancesObject.creationTime = valueInstancesInstance["CreationTime"].asString();
		if(!valueInstancesInstance["StartTime"].isNull())
			instancesObject.startTime = valueInstancesInstance["StartTime"].asString();
		if(!valueInstancesInstance["InstanceNetworkType"].isNull())
			instancesObject.instanceNetworkType = valueInstancesInstance["InstanceNetworkType"].asString();
		if(!valueInstancesInstance["InstanceChargeType"].isNull())
			instancesObject.instanceChargeType = valueInstancesInstance["InstanceChargeType"].asString();
		if(!valueInstancesInstance["SaleCycle"].isNull())
			instancesObject.saleCycle = valueInstancesInstance["SaleCycle"].asString();
		if(!valueInstancesInstance["ExpiredTime"].isNull())
			instancesObject.expiredTime = valueInstancesInstance["ExpiredTime"].asString();
		if(!valueInstancesInstance["AutoReleaseTime"].isNull())
			instancesObject.autoReleaseTime = valueInstancesInstance["AutoReleaseTime"].asString();
		if(!valueInstancesInstance["IoOptimized"].isNull())
			instancesObject.ioOptimized = valueInstancesInstance["IoOptimized"].asString() == "true";
		if(!valueInstancesInstance["DeviceAvailable"].isNull())
			instancesObject.deviceAvailable = valueInstancesInstance["DeviceAvailable"].asString() == "true";
		if(!valueInstancesInstance["InstanceTypeFamily"].isNull())
			instancesObject.instanceTypeFamily = valueInstancesInstance["InstanceTypeFamily"].asString();
		if(!valueInstancesInstance["LocalStorageCapacity"].isNull())
			instancesObject.localStorageCapacity = std::stol(valueInstancesInstance["LocalStorageCapacity"].asString());
		if(!valueInstancesInstance["LocalStorageAmount"].isNull())
			instancesObject.localStorageAmount = std::stoi(valueInstancesInstance["LocalStorageAmount"].asString());
		if(!valueInstancesInstance["GPUAmount"].isNull())
			instancesObject.gPUAmount = std::stoi(valueInstancesInstance["GPUAmount"].asString());
		if(!valueInstancesInstance["GPUSpec"].isNull())
			instancesObject.gPUSpec = valueInstancesInstance["GPUSpec"].asString();
		if(!valueInstancesInstance["SpotStrategy"].isNull())
			instancesObject.spotStrategy = valueInstancesInstance["SpotStrategy"].asString();
		if(!valueInstancesInstance["SpotPriceLimit"].isNull())
			instancesObject.spotPriceLimit = std::stof(valueInstancesInstance["SpotPriceLimit"].asString());
		if(!valueInstancesInstance["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesInstance["ResourceGroupId"].asString();
		if(!valueInstancesInstance["KeyPairName"].isNull())
			instancesObject.keyPairName = valueInstancesInstance["KeyPairName"].asString();
		if(!valueInstancesInstance["Recyclable"].isNull())
			instancesObject.recyclable = valueInstancesInstance["Recyclable"].asString() == "true";
		if(!valueInstancesInstance["HpcClusterId"].isNull())
			instancesObject.hpcClusterId = valueInstancesInstance["HpcClusterId"].asString();
		if(!valueInstancesInstance["StoppedMode"].isNull())
			instancesObject.stoppedMode = valueInstancesInstance["StoppedMode"].asString();
		if(!valueInstancesInstance["CreditSpecification"].isNull())
			instancesObject.creditSpecification = valueInstancesInstance["CreditSpecification"].asString();
		if(!valueInstancesInstance["DeletionProtection"].isNull())
			instancesObject.deletionProtection = valueInstancesInstance["DeletionProtection"].asString() == "true";
		auto allNetworkInterfacesNode = allInstancesNode["NetworkInterfaces"]["NetworkInterface"];
		for (auto allInstancesNodeNetworkInterfacesNetworkInterface : allNetworkInterfacesNode)
		{
			Instance::NetworkInterface networkInterfacesObject;
			if(!allInstancesNodeNetworkInterfacesNetworkInterface["NetworkInterfaceId"].isNull())
				networkInterfacesObject.networkInterfaceId = allInstancesNodeNetworkInterfacesNetworkInterface["NetworkInterfaceId"].asString();
			if(!allInstancesNodeNetworkInterfacesNetworkInterface["MacAddress"].isNull())
				networkInterfacesObject.macAddress = allInstancesNodeNetworkInterfacesNetworkInterface["MacAddress"].asString();
			if(!allInstancesNodeNetworkInterfacesNetworkInterface["PrimaryIpAddress"].isNull())
				networkInterfacesObject.primaryIpAddress = allInstancesNodeNetworkInterfacesNetworkInterface["PrimaryIpAddress"].asString();
			instancesObject.networkInterfaces.push_back(networkInterfacesObject);
		}
		auto allOperationLocksNode = allInstancesNode["OperationLocks"]["LockReason"];
		for (auto allInstancesNodeOperationLocksLockReason : allOperationLocksNode)
		{
			Instance::LockReason operationLocksObject;
			if(!allInstancesNodeOperationLocksLockReason["LockReason"].isNull())
				operationLocksObject.lockReason = allInstancesNodeOperationLocksLockReason["LockReason"].asString();
			if(!allInstancesNodeOperationLocksLockReason["LockMsg"].isNull())
				operationLocksObject.lockMsg = allInstancesNodeOperationLocksLockReason["LockMsg"].asString();
			instancesObject.operationLocks.push_back(operationLocksObject);
		}
		auto allTagsNode = allInstancesNode["Tags"]["Tag"];
		for (auto allInstancesNodeTagsTag : allTagsNode)
		{
			Instance::Tag tagsObject;
			if(!allInstancesNodeTagsTag["TagKey"].isNull())
				tagsObject.tagKey = allInstancesNodeTagsTag["TagKey"].asString();
			if(!allInstancesNodeTagsTag["TagValue"].isNull())
				tagsObject.tagValue = allInstancesNodeTagsTag["TagValue"].asString();
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
		auto dedicatedInstanceAttributeNode = value["DedicatedInstanceAttribute"];
		if(!dedicatedInstanceAttributeNode["Tenancy"].isNull())
			instancesObject.dedicatedInstanceAttribute.tenancy = dedicatedInstanceAttributeNode["Tenancy"].asString();
		if(!dedicatedInstanceAttributeNode["Affinity"].isNull())
			instancesObject.dedicatedInstanceAttribute.affinity = dedicatedInstanceAttributeNode["Affinity"].asString();
		auto cpuOptionsNode = value["CpuOptions"];
		if(!cpuOptionsNode["CoreCount"].isNull())
			instancesObject.cpuOptions.coreCount = std::stoi(cpuOptionsNode["CoreCount"].asString());
		if(!cpuOptionsNode["ThreadsPerCore"].isNull())
			instancesObject.cpuOptions.threadsPerCore = std::stoi(cpuOptionsNode["ThreadsPerCore"].asString());
		if(!cpuOptionsNode["Numa"].isNull())
			instancesObject.cpuOptions.numa = cpuOptionsNode["Numa"].asString();
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

