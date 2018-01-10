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
		Instance instanceObject;
		instanceObject.instanceId = value["InstanceId"].asString();
		instanceObject.instanceName = value["InstanceName"].asString();
		instanceObject.description = value["Description"].asString();
		instanceObject.imageId = value["ImageId"].asString();
		instanceObject.oSName = value["OSName"].asString();
		instanceObject.oSType = value["OSType"].asString();
		instanceObject.regionId = value["RegionId"].asString();
		instanceObject.zoneId = value["ZoneId"].asString();
		instanceObject.clusterId = value["ClusterId"].asString();
		instanceObject.instanceType = value["InstanceType"].asString();
		instanceObject.cpu = std::stoi(value["Cpu"].asString());
		instanceObject.memory = std::stoi(value["Memory"].asString());
		instanceObject.hostName = value["HostName"].asString();
		instanceObject.status = value["Status"].asString();
		instanceObject.serialNumber = value["SerialNumber"].asString();
		instanceObject.internetChargeType = value["InternetChargeType"].asString();
		instanceObject.internetMaxBandwidthIn = std::stoi(value["InternetMaxBandwidthIn"].asString());
		instanceObject.internetMaxBandwidthOut = std::stoi(value["InternetMaxBandwidthOut"].asString());
		instanceObject.vlanId = value["VlanId"].asString();
		instanceObject.creationTime = value["CreationTime"].asString();
		instanceObject.startTime = value["StartTime"].asString();
		instanceObject.instanceNetworkType = value["InstanceNetworkType"].asString();
		instanceObject.instanceChargeType = value["InstanceChargeType"].asString();
		instanceObject.saleCycle = value["SaleCycle"].asString();
		instanceObject.expiredTime = value["ExpiredTime"].asString();
		instanceObject.autoReleaseTime = value["AutoReleaseTime"].asString();
		instanceObject.ioOptimized = std::stoi(value["IoOptimized"].asString());
		instanceObject.deviceAvailable = std::stoi(value["DeviceAvailable"].asString());
		instanceObject.instanceTypeFamily = value["InstanceTypeFamily"].asString();
		instanceObject.localStorageCapacity = std::stol(value["LocalStorageCapacity"].asString());
		instanceObject.localStorageAmount = std::stoi(value["LocalStorageAmount"].asString());
		instanceObject.gPUAmount = std::stoi(value["GPUAmount"].asString());
		instanceObject.gPUSpec = value["GPUSpec"].asString();
		instanceObject.spotStrategy = value["SpotStrategy"].asString();
		instanceObject.spotPriceLimit = std::stof(value["SpotPriceLimit"].asString());
		instanceObject.resourceGroupId = value["ResourceGroupId"].asString();
		instanceObject.keyPairName = value["KeyPairName"].asString();
		instanceObject.recyclable = std::stoi(value["Recyclable"].asString());
		instanceObject.hpcClusterId = value["HpcClusterId"].asString();
		instanceObject.stoppedMode = value["StoppedMode"].asString();
		auto allNetworkInterfaces = value["NetworkInterfaces"]["NetworkInterface"];
		for (auto value : allNetworkInterfaces)
		{
			Instance::NetworkInterface networkInterfaceObject;
			networkInterfaceObject.networkInterfaceId = value["NetworkInterfaceId"].asString();
			networkInterfaceObject.macAddress = value["MacAddress"].asString();
			networkInterfaceObject.primaryIpAddress = value["PrimaryIpAddress"].asString();
			instanceObject.networkInterfaces.push_back(networkInterfaceObject);
		}
		auto allOperationLocks = value["OperationLocks"]["LockReason"];
		for (auto value : allOperationLocks)
		{
			Instance::LockReason lockReasonObject;
			lockReasonObject.lockReason = value["LockReason"].asString();
			lockReasonObject.lockMsg = value["LockMsg"].asString();
			instanceObject.operationLocks.push_back(lockReasonObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Instance::Tag tagObject;
			tagObject.tagKey = value["TagKey"].asString();
			tagObject.tagValue = value["TagValue"].asString();
			instanceObject.tags.push_back(tagObject);
		}
		auto allVpcAttributes = value["VpcAttributes"];
		for (auto value : allVpcAttributes)
		{
			Instance::VpcAttributes vpcAttributesObject;
			vpcAttributesObject.vpcId = value["VpcId"].asString();
			vpcAttributesObject.vSwitchId = value["VSwitchId"].asString();
			vpcAttributesObject.natIpAddress = value["NatIpAddress"].asString();
			auto allPrivateIpAddress = value["PrivateIpAddress"]["IpAddress"];
			for (auto value : allPrivateIpAddress)
				vpcAttributesObject.privateIpAddress.push_back(value.asString());
			instanceObject.vpcAttributes.push_back(vpcAttributesObject);
		}
		auto allEipAddress = value["EipAddress"];
		for (auto value : allEipAddress)
		{
			Instance::EipAddress eipAddressObject;
			eipAddressObject.allocationId = value["AllocationId"].asString();
			eipAddressObject.ipAddress = value["IpAddress"].asString();
			eipAddressObject.bandwidth = std::stoi(value["Bandwidth"].asString());
			eipAddressObject.internetChargeType = value["InternetChargeType"].asString();
			eipAddressObject.isSupportUnassociate = std::stoi(value["IsSupportUnassociate"].asString());
			instanceObject.eipAddress.push_back(eipAddressObject);
		}
		auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
		for (auto value : allSecurityGroupIds)
			instanceObject.securityGroupIds.push_back(value.asString());
		auto allPublicIpAddress = value["PublicIpAddress"]["IpAddress"];
		for (auto value : allPublicIpAddress)
			instanceObject.publicIpAddress.push_back(value.asString());
		auto allInnerIpAddress = value["InnerIpAddress"]["IpAddress"];
		for (auto value : allInnerIpAddress)
			instanceObject.innerIpAddress.push_back(value.asString());
		auto allRdmaIpAddress = value["RdmaIpAddress"]["IpAddress"];
		for (auto value : allRdmaIpAddress)
			instanceObject.rdmaIpAddress.push_back(value.asString());
		instances_.push_back(instanceObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeInstancesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeInstancesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeInstancesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeInstancesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstancesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

