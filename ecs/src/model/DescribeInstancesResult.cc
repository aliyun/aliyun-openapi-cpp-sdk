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
		if(!valueInstancesInstance["CreationTime"].isNull())
			instancesObject.creationTime = valueInstancesInstance["CreationTime"].asString();
		if(!valueInstancesInstance["SerialNumber"].isNull())
			instancesObject.serialNumber = valueInstancesInstance["SerialNumber"].asString();
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["DeploymentSetId"].isNull())
			instancesObject.deploymentSetId = valueInstancesInstance["DeploymentSetId"].asString();
		if(!valueInstancesInstance["KeyPairName"].isNull())
			instancesObject.keyPairName = valueInstancesInstance["KeyPairName"].asString();
		if(!valueInstancesInstance["SaleCycle"].isNull())
			instancesObject.saleCycle = valueInstancesInstance["SaleCycle"].asString();
		if(!valueInstancesInstance["SpotStrategy"].isNull())
			instancesObject.spotStrategy = valueInstancesInstance["SpotStrategy"].asString();
		if(!valueInstancesInstance["DeviceAvailable"].isNull())
			instancesObject.deviceAvailable = valueInstancesInstance["DeviceAvailable"].asString() == "true";
		if(!valueInstancesInstance["LocalStorageCapacity"].isNull())
			instancesObject.localStorageCapacity = std::stol(valueInstancesInstance["LocalStorageCapacity"].asString());
		if(!valueInstancesInstance["Description"].isNull())
			instancesObject.description = valueInstancesInstance["Description"].asString();
		if(!valueInstancesInstance["SpotDuration"].isNull())
			instancesObject.spotDuration = std::stoi(valueInstancesInstance["SpotDuration"].asString());
		if(!valueInstancesInstance["InstanceNetworkType"].isNull())
			instancesObject.instanceNetworkType = valueInstancesInstance["InstanceNetworkType"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["OSNameEn"].isNull())
			instancesObject.oSNameEn = valueInstancesInstance["OSNameEn"].asString();
		if(!valueInstancesInstance["HpcClusterId"].isNull())
			instancesObject.hpcClusterId = valueInstancesInstance["HpcClusterId"].asString();
		if(!valueInstancesInstance["SpotPriceLimit"].isNull())
			instancesObject.spotPriceLimit = std::stof(valueInstancesInstance["SpotPriceLimit"].asString());
		if(!valueInstancesInstance["Memory"].isNull())
			instancesObject.memory = std::stoi(valueInstancesInstance["Memory"].asString());
		if(!valueInstancesInstance["OSName"].isNull())
			instancesObject.oSName = valueInstancesInstance["OSName"].asString();
		if(!valueInstancesInstance["DeploymentSetGroupNo"].isNull())
			instancesObject.deploymentSetGroupNo = std::stoi(valueInstancesInstance["DeploymentSetGroupNo"].asString());
		if(!valueInstancesInstance["ImageId"].isNull())
			instancesObject.imageId = valueInstancesInstance["ImageId"].asString();
		if(!valueInstancesInstance["VlanId"].isNull())
			instancesObject.vlanId = valueInstancesInstance["VlanId"].asString();
		if(!valueInstancesInstance["ClusterId"].isNull())
			instancesObject.clusterId = valueInstancesInstance["ClusterId"].asString();
		if(!valueInstancesInstance["GPUSpec"].isNull())
			instancesObject.gPUSpec = valueInstancesInstance["GPUSpec"].asString();
		if(!valueInstancesInstance["AutoReleaseTime"].isNull())
			instancesObject.autoReleaseTime = valueInstancesInstance["AutoReleaseTime"].asString();
		if(!valueInstancesInstance["DeletionProtection"].isNull())
			instancesObject.deletionProtection = valueInstancesInstance["DeletionProtection"].asString() == "true";
		if(!valueInstancesInstance["StoppedMode"].isNull())
			instancesObject.stoppedMode = valueInstancesInstance["StoppedMode"].asString();
		if(!valueInstancesInstance["GPUAmount"].isNull())
			instancesObject.gPUAmount = std::stoi(valueInstancesInstance["GPUAmount"].asString());
		if(!valueInstancesInstance["HostName"].isNull())
			instancesObject.hostName = valueInstancesInstance["HostName"].asString();
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["InternetMaxBandwidthOut"].isNull())
			instancesObject.internetMaxBandwidthOut = std::stoi(valueInstancesInstance["InternetMaxBandwidthOut"].asString());
		if(!valueInstancesInstance["InternetMaxBandwidthIn"].isNull())
			instancesObject.internetMaxBandwidthIn = std::stoi(valueInstancesInstance["InternetMaxBandwidthIn"].asString());
		if(!valueInstancesInstance["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesInstance["InstanceType"].asString();
		if(!valueInstancesInstance["InstanceChargeType"].isNull())
			instancesObject.instanceChargeType = valueInstancesInstance["InstanceChargeType"].asString();
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["IoOptimized"].isNull())
			instancesObject.ioOptimized = valueInstancesInstance["IoOptimized"].asString() == "true";
		if(!valueInstancesInstance["StartTime"].isNull())
			instancesObject.startTime = valueInstancesInstance["StartTime"].asString();
		if(!valueInstancesInstance["Cpu"].isNull())
			instancesObject.cpu = std::stoi(valueInstancesInstance["Cpu"].asString());
		if(!valueInstancesInstance["LocalStorageAmount"].isNull())
			instancesObject.localStorageAmount = std::stoi(valueInstancesInstance["LocalStorageAmount"].asString());
		if(!valueInstancesInstance["ExpiredTime"].isNull())
			instancesObject.expiredTime = valueInstancesInstance["ExpiredTime"].asString();
		if(!valueInstancesInstance["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesInstance["ResourceGroupId"].asString();
		if(!valueInstancesInstance["InternetChargeType"].isNull())
			instancesObject.internetChargeType = valueInstancesInstance["InternetChargeType"].asString();
		if(!valueInstancesInstance["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesInstance["ZoneId"].asString();
		if(!valueInstancesInstance["Recyclable"].isNull())
			instancesObject.recyclable = valueInstancesInstance["Recyclable"].asString() == "true";
		if(!valueInstancesInstance["ISP"].isNull())
			instancesObject.iSP = valueInstancesInstance["ISP"].asString();
		if(!valueInstancesInstance["CreditSpecification"].isNull())
			instancesObject.creditSpecification = valueInstancesInstance["CreditSpecification"].asString();
		if(!valueInstancesInstance["InstanceTypeFamily"].isNull())
			instancesObject.instanceTypeFamily = valueInstancesInstance["InstanceTypeFamily"].asString();
		if(!valueInstancesInstance["OSType"].isNull())
			instancesObject.oSType = valueInstancesInstance["OSType"].asString();
		if(!valueInstancesInstance["SpotInterruptionBehavior"].isNull())
			instancesObject.spotInterruptionBehavior = valueInstancesInstance["SpotInterruptionBehavior"].asString();
		if(!valueInstancesInstance["EnableNVS"].isNull())
			instancesObject.enableNVS = valueInstancesInstance["EnableNVS"].asString() == "true";
		auto allNetworkInterfacesNode = valueInstancesInstance["NetworkInterfaces"]["NetworkInterface"];
		for (auto valueInstancesInstanceNetworkInterfacesNetworkInterface : allNetworkInterfacesNode)
		{
			Instance::NetworkInterface networkInterfacesObject;
			if(!valueInstancesInstanceNetworkInterfacesNetworkInterface["Type"].isNull())
				networkInterfacesObject.type = valueInstancesInstanceNetworkInterfacesNetworkInterface["Type"].asString();
			if(!valueInstancesInstanceNetworkInterfacesNetworkInterface["MacAddress"].isNull())
				networkInterfacesObject.macAddress = valueInstancesInstanceNetworkInterfacesNetworkInterface["MacAddress"].asString();
			if(!valueInstancesInstanceNetworkInterfacesNetworkInterface["PrimaryIpAddress"].isNull())
				networkInterfacesObject.primaryIpAddress = valueInstancesInstanceNetworkInterfacesNetworkInterface["PrimaryIpAddress"].asString();
			if(!valueInstancesInstanceNetworkInterfacesNetworkInterface["NetworkInterfaceId"].isNull())
				networkInterfacesObject.networkInterfaceId = valueInstancesInstanceNetworkInterfacesNetworkInterface["NetworkInterfaceId"].asString();
			auto allPrivateIpSetsNode = valueInstancesInstanceNetworkInterfacesNetworkInterface["PrivateIpSets"]["PrivateIpSet"];
			for (auto valueInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSetsPrivateIpSet : allPrivateIpSetsNode)
			{
				Instance::NetworkInterface::PrivateIpSet privateIpSetsObject;
				if(!valueInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSetsPrivateIpSet["PrivateIpAddress"].isNull())
					privateIpSetsObject.privateIpAddress = valueInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSetsPrivateIpSet["PrivateIpAddress"].asString();
				if(!valueInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSetsPrivateIpSet["Primary"].isNull())
					privateIpSetsObject.primary = valueInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSetsPrivateIpSet["Primary"].asString() == "true";
				if(!valueInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSetsPrivateIpSet["PrivateDnsName"].isNull())
					privateIpSetsObject.privateDnsName = valueInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSetsPrivateIpSet["PrivateDnsName"].asString();
				networkInterfacesObject.privateIpSets.push_back(privateIpSetsObject);
			}
			auto allIpv6SetsNode = valueInstancesInstanceNetworkInterfacesNetworkInterface["Ipv6Sets"]["Ipv6Set"];
			for (auto valueInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6SetsIpv6Set : allIpv6SetsNode)
			{
				Instance::NetworkInterface::Ipv6Set ipv6SetsObject;
				if(!valueInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6SetsIpv6Set["Ipv6Address"].isNull())
					ipv6SetsObject.ipv6Address = valueInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6SetsIpv6Set["Ipv6Address"].asString();
				networkInterfacesObject.ipv6Sets.push_back(ipv6SetsObject);
			}
			auto allIpv4PrefixSetsNode = valueInstancesInstanceNetworkInterfacesNetworkInterface["Ipv4PrefixSets"]["Ipv4PrefixSet"];
			for (auto valueInstancesInstanceNetworkInterfacesNetworkInterfaceIpv4PrefixSetsIpv4PrefixSet : allIpv4PrefixSetsNode)
			{
				Instance::NetworkInterface::Ipv4PrefixSet ipv4PrefixSetsObject;
				if(!valueInstancesInstanceNetworkInterfacesNetworkInterfaceIpv4PrefixSetsIpv4PrefixSet["Ipv4Prefix"].isNull())
					ipv4PrefixSetsObject.ipv4Prefix = valueInstancesInstanceNetworkInterfacesNetworkInterfaceIpv4PrefixSetsIpv4PrefixSet["Ipv4Prefix"].asString();
				networkInterfacesObject.ipv4PrefixSets.push_back(ipv4PrefixSetsObject);
			}
			auto allIpv6PrefixSetsNode = valueInstancesInstanceNetworkInterfacesNetworkInterface["Ipv6PrefixSets"]["Ipv6PrefixSet"];
			for (auto valueInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6PrefixSetsIpv6PrefixSet : allIpv6PrefixSetsNode)
			{
				Instance::NetworkInterface::Ipv6PrefixSet ipv6PrefixSetsObject;
				if(!valueInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6PrefixSetsIpv6PrefixSet["Ipv6Prefix"].isNull())
					ipv6PrefixSetsObject.ipv6Prefix = valueInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6PrefixSetsIpv6PrefixSet["Ipv6Prefix"].asString();
				networkInterfacesObject.ipv6PrefixSets.push_back(ipv6PrefixSetsObject);
			}
			instancesObject.networkInterfaces.push_back(networkInterfacesObject);
		}
		auto allOperationLocksNode = valueInstancesInstance["OperationLocks"]["LockReason"];
		for (auto valueInstancesInstanceOperationLocksLockReason : allOperationLocksNode)
		{
			Instance::LockReason operationLocksObject;
			if(!valueInstancesInstanceOperationLocksLockReason["LockMsg"].isNull())
				operationLocksObject.lockMsg = valueInstancesInstanceOperationLocksLockReason["LockMsg"].asString();
			if(!valueInstancesInstanceOperationLocksLockReason["LockReason"].isNull())
				operationLocksObject.lockReason = valueInstancesInstanceOperationLocksLockReason["LockReason"].asString();
			instancesObject.operationLocks.push_back(operationLocksObject);
		}
		auto allTagsNode = valueInstancesInstance["Tags"]["Tag"];
		for (auto valueInstancesInstanceTagsTag : allTagsNode)
		{
			Instance::Tag tagsObject;
			if(!valueInstancesInstanceTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueInstancesInstanceTagsTag["TagValue"].asString();
			if(!valueInstancesInstanceTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueInstancesInstanceTagsTag["TagKey"].asString();
			instancesObject.tags.push_back(tagsObject);
		}
		auto vpcAttributesNode = value["VpcAttributes"];
		if(!vpcAttributesNode["VpcId"].isNull())
			instancesObject.vpcAttributes.vpcId = vpcAttributesNode["VpcId"].asString();
		if(!vpcAttributesNode["NatIpAddress"].isNull())
			instancesObject.vpcAttributes.natIpAddress = vpcAttributesNode["NatIpAddress"].asString();
		if(!vpcAttributesNode["VSwitchId"].isNull())
			instancesObject.vpcAttributes.vSwitchId = vpcAttributesNode["VSwitchId"].asString();
			auto allPrivateIpAddress = vpcAttributesNode["PrivateIpAddress"]["IpAddress"];
			for (auto value : allPrivateIpAddress)
				instancesObject.vpcAttributes.privateIpAddress.push_back(value.asString());
		auto eipAddressNode = value["EipAddress"];
		if(!eipAddressNode["IsSupportUnassociate"].isNull())
			instancesObject.eipAddress.isSupportUnassociate = eipAddressNode["IsSupportUnassociate"].asString() == "true";
		if(!eipAddressNode["InternetChargeType"].isNull())
			instancesObject.eipAddress.internetChargeType = eipAddressNode["InternetChargeType"].asString();
		if(!eipAddressNode["IpAddress"].isNull())
			instancesObject.eipAddress.ipAddress = eipAddressNode["IpAddress"].asString();
		if(!eipAddressNode["Bandwidth"].isNull())
			instancesObject.eipAddress.bandwidth = std::stoi(eipAddressNode["Bandwidth"].asString());
		if(!eipAddressNode["AllocationId"].isNull())
			instancesObject.eipAddress.allocationId = eipAddressNode["AllocationId"].asString();
		auto hibernationOptionsNode = value["HibernationOptions"];
		if(!hibernationOptionsNode["Configured"].isNull())
			instancesObject.hibernationOptions.configured = hibernationOptionsNode["Configured"].asString() == "true";
		auto dedicatedHostAttributeNode = value["DedicatedHostAttribute"];
		if(!dedicatedHostAttributeNode["DedicatedHostId"].isNull())
			instancesObject.dedicatedHostAttribute.dedicatedHostId = dedicatedHostAttributeNode["DedicatedHostId"].asString();
		if(!dedicatedHostAttributeNode["DedicatedHostName"].isNull())
			instancesObject.dedicatedHostAttribute.dedicatedHostName = dedicatedHostAttributeNode["DedicatedHostName"].asString();
		if(!dedicatedHostAttributeNode["DedicatedHostClusterId"].isNull())
			instancesObject.dedicatedHostAttribute.dedicatedHostClusterId = dedicatedHostAttributeNode["DedicatedHostClusterId"].asString();
		auto ecsCapacityReservationAttrNode = value["EcsCapacityReservationAttr"];
		if(!ecsCapacityReservationAttrNode["CapacityReservationPreference"].isNull())
			instancesObject.ecsCapacityReservationAttr.capacityReservationPreference = ecsCapacityReservationAttrNode["CapacityReservationPreference"].asString();
		if(!ecsCapacityReservationAttrNode["CapacityReservationId"].isNull())
			instancesObject.ecsCapacityReservationAttr.capacityReservationId = ecsCapacityReservationAttrNode["CapacityReservationId"].asString();
		auto dedicatedInstanceAttributeNode = value["DedicatedInstanceAttribute"];
		if(!dedicatedInstanceAttributeNode["Affinity"].isNull())
			instancesObject.dedicatedInstanceAttribute.affinity = dedicatedInstanceAttributeNode["Affinity"].asString();
		if(!dedicatedInstanceAttributeNode["Tenancy"].isNull())
			instancesObject.dedicatedInstanceAttribute.tenancy = dedicatedInstanceAttributeNode["Tenancy"].asString();
		auto cpuOptionsNode = value["CpuOptions"];
		if(!cpuOptionsNode["Numa"].isNull())
			instancesObject.cpuOptions.numa = cpuOptionsNode["Numa"].asString();
		if(!cpuOptionsNode["CoreCount"].isNull())
			instancesObject.cpuOptions.coreCount = std::stoi(cpuOptionsNode["CoreCount"].asString());
		if(!cpuOptionsNode["ThreadsPerCore"].isNull())
			instancesObject.cpuOptions.threadsPerCore = std::stoi(cpuOptionsNode["ThreadsPerCore"].asString());
		if(!cpuOptionsNode["TopologyType"].isNull())
			instancesObject.cpuOptions.topologyType = cpuOptionsNode["TopologyType"].asString();
		if(!cpuOptionsNode["EnableVISST"].isNull())
			instancesObject.cpuOptions.enableVISST = cpuOptionsNode["EnableVISST"].asString() == "true";
		if(!cpuOptionsNode["TurboMode"].isNull())
			instancesObject.cpuOptions.turboMode = cpuOptionsNode["TurboMode"].asString();
		if(!cpuOptionsNode["EnableVRDT"].isNull())
			instancesObject.cpuOptions.enableVRDT = cpuOptionsNode["EnableVRDT"].asString() == "true";
		auto metadataOptionsNode = value["MetadataOptions"];
		if(!metadataOptionsNode["HttpEndpoint"].isNull())
			instancesObject.metadataOptions.httpEndpoint = metadataOptionsNode["HttpEndpoint"].asString();
		if(!metadataOptionsNode["HttpPutResponseHopLimit"].isNull())
			instancesObject.metadataOptions.httpPutResponseHopLimit = std::stoi(metadataOptionsNode["HttpPutResponseHopLimit"].asString());
		if(!metadataOptionsNode["HttpTokens"].isNull())
			instancesObject.metadataOptions.httpTokens = metadataOptionsNode["HttpTokens"].asString();
		auto imageOptionsNode = value["ImageOptions"];
		if(!imageOptionsNode["LoginAsNonRoot"].isNull())
			instancesObject.imageOptions.loginAsNonRoot = imageOptionsNode["LoginAsNonRoot"].asString() == "true";
		if(!imageOptionsNode["CurrentOSNVMeSupported"].isNull())
			instancesObject.imageOptions.currentOSNVMeSupported = imageOptionsNode["CurrentOSNVMeSupported"].asString() == "true";
		auto privateDnsNameOptionsNode = value["PrivateDnsNameOptions"];
		if(!privateDnsNameOptionsNode["EnableInstanceIdDnsARecord"].isNull())
			instancesObject.privateDnsNameOptions.enableInstanceIdDnsARecord = privateDnsNameOptionsNode["EnableInstanceIdDnsARecord"].asString() == "true";
		if(!privateDnsNameOptionsNode["EnableInstanceIdDnsAAAARecord"].isNull())
			instancesObject.privateDnsNameOptions.enableInstanceIdDnsAAAARecord = privateDnsNameOptionsNode["EnableInstanceIdDnsAAAARecord"].asString() == "true";
		if(!privateDnsNameOptionsNode["EnableIpDnsARecord"].isNull())
			instancesObject.privateDnsNameOptions.enableIpDnsARecord = privateDnsNameOptionsNode["EnableIpDnsARecord"].asString() == "true";
		if(!privateDnsNameOptionsNode["EnableIpDnsPtrRecord"].isNull())
			instancesObject.privateDnsNameOptions.enableIpDnsPtrRecord = privateDnsNameOptionsNode["EnableIpDnsPtrRecord"].asString() == "true";
		if(!privateDnsNameOptionsNode["HostnameType"].isNull())
			instancesObject.privateDnsNameOptions.hostnameType = privateDnsNameOptionsNode["HostnameType"].asString();
		auto additionalInfoNode = value["AdditionalInfo"];
		if(!additionalInfoNode["EnableHighDensityMode"].isNull())
			instancesObject.additionalInfo.enableHighDensityMode = additionalInfoNode["EnableHighDensityMode"].asString() == "true";
		auto allRdmaIpAddress = value["RdmaIpAddress"]["IpAddress"];
		for (auto value : allRdmaIpAddress)
			instancesObject.rdmaIpAddress.push_back(value.asString());
		auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
		for (auto value : allSecurityGroupIds)
			instancesObject.securityGroupIds.push_back(value.asString());
		auto allPublicIpAddress = value["PublicIpAddress"]["IpAddress"];
		for (auto value : allPublicIpAddress)
			instancesObject.publicIpAddress.push_back(value.asString());
		auto allInnerIpAddress = value["InnerIpAddress"]["IpAddress"];
		for (auto value : allInnerIpAddress)
			instancesObject.innerIpAddress.push_back(value.asString());
		instances_.push_back(instancesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeInstancesResult::Instance> DescribeInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeInstancesResult::getNextToken()const
{
	return nextToken_;
}

int DescribeInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

