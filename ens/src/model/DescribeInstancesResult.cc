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

#include <alibabacloud/ens/model/DescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

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
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["SpecName"].isNull())
			instancesObject.specName = valueInstancesInstance["SpecName"].asString();
		if(!valueInstancesInstance["InstanceTypeFamily"].isNull())
			instancesObject.instanceTypeFamily = valueInstancesInstance["InstanceTypeFamily"].asString();
		if(!valueInstancesInstance["InstanceResourceType"].isNull())
			instancesObject.instanceResourceType = valueInstancesInstance["InstanceResourceType"].asString();
		if(!valueInstancesInstance["HostName"].isNull())
			instancesObject.hostName = valueInstancesInstance["HostName"].asString();
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["InternetMaxBandwidthIn"].isNull())
			instancesObject.internetMaxBandwidthIn = std::stoi(valueInstancesInstance["InternetMaxBandwidthIn"].asString());
		if(!valueInstancesInstance["InternetMaxBandwidthOut"].isNull())
			instancesObject.internetMaxBandwidthOut = std::stoi(valueInstancesInstance["InternetMaxBandwidthOut"].asString());
		if(!valueInstancesInstance["EnsRegionId"].isNull())
			instancesObject.ensRegionId = valueInstancesInstance["EnsRegionId"].asString();
		if(!valueInstancesInstance["Cpu"].isNull())
			instancesObject.cpu = valueInstancesInstance["Cpu"].asString();
		if(!valueInstancesInstance["ExpiredTime"].isNull())
			instancesObject.expiredTime = valueInstancesInstance["ExpiredTime"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["Disk"].isNull())
			instancesObject.disk = std::stoi(valueInstancesInstance["Disk"].asString());
		if(!valueInstancesInstance["OSName"].isNull())
			instancesObject.oSName = valueInstancesInstance["OSName"].asString();
		if(!valueInstancesInstance["Memory"].isNull())
			instancesObject.memory = std::stoi(valueInstancesInstance["Memory"].asString());
		if(!valueInstancesInstance["ImageId"].isNull())
			instancesObject.imageId = valueInstancesInstance["ImageId"].asString();
		if(!valueInstancesInstance["AutoReleaseTime"].isNull())
			instancesObject.autoReleaseTime = valueInstancesInstance["AutoReleaseTime"].asString();
		if(!valueInstancesInstance["SpotStrategy"].isNull())
			instancesObject.spotStrategy = valueInstancesInstance["SpotStrategy"].asString();
		if(!valueInstancesInstance["KeyPairName"].isNull())
			instancesObject.keyPairName = valueInstancesInstance["KeyPairName"].asString();
		if(!valueInstancesInstance["ServiceStatus"].isNull())
			instancesObject.serviceStatus = valueInstancesInstance["ServiceStatus"].asString();
		auto allDataDiskNode = valueInstancesInstance["DataDisk"]["DataDiskItem"];
		for (auto valueInstancesInstanceDataDiskDataDiskItem : allDataDiskNode)
		{
			Instance::DataDiskItem dataDiskObject;
			if(!valueInstancesInstanceDataDiskDataDiskItem["device_type"].isNull())
				dataDiskObject.device_type = valueInstancesInstanceDataDiskDataDiskItem["device_type"].asString();
			if(!valueInstancesInstanceDataDiskDataDiskItem["disk_type"].isNull())
				dataDiskObject.disk_type = valueInstancesInstanceDataDiskDataDiskItem["disk_type"].asString();
			if(!valueInstancesInstanceDataDiskDataDiskItem["Size"].isNull())
				dataDiskObject.size = std::stoi(valueInstancesInstanceDataDiskDataDiskItem["Size"].asString());
			if(!valueInstancesInstanceDataDiskDataDiskItem["DiskName"].isNull())
				dataDiskObject.diskName = valueInstancesInstanceDataDiskDataDiskItem["DiskName"].asString();
			if(!valueInstancesInstanceDataDiskDataDiskItem["uuid"].isNull())
				dataDiskObject.uuid = valueInstancesInstanceDataDiskDataDiskItem["uuid"].asString();
			if(!valueInstancesInstanceDataDiskDataDiskItem["storage"].isNull())
				dataDiskObject.storage = std::stoi(valueInstancesInstanceDataDiskDataDiskItem["storage"].asString());
			if(!valueInstancesInstanceDataDiskDataDiskItem["DiskId"].isNull())
				dataDiskObject.diskId = valueInstancesInstanceDataDiskDataDiskItem["DiskId"].asString();
			if(!valueInstancesInstanceDataDiskDataDiskItem["Category"].isNull())
				dataDiskObject.category = valueInstancesInstanceDataDiskDataDiskItem["Category"].asString();
			if(!valueInstancesInstanceDataDiskDataDiskItem["name"].isNull())
				dataDiskObject.name = valueInstancesInstanceDataDiskDataDiskItem["name"].asString();
			if(!valueInstancesInstanceDataDiskDataDiskItem["DiskSize"].isNull())
				dataDiskObject.diskSize = std::stoi(valueInstancesInstanceDataDiskDataDiskItem["DiskSize"].asString());
			if(!valueInstancesInstanceDataDiskDataDiskItem["EncryptKeyId"].isNull())
				dataDiskObject.encryptKeyId = valueInstancesInstanceDataDiskDataDiskItem["EncryptKeyId"].asString();
			if(!valueInstancesInstanceDataDiskDataDiskItem["Encrypted"].isNull())
				dataDiskObject.encrypted = valueInstancesInstanceDataDiskDataDiskItem["Encrypted"].asString() == "true";
			instancesObject.dataDisk.push_back(dataDiskObject);
		}
		auto allPublicIpAddressesNode = valueInstancesInstance["PublicIpAddresses"]["PublicIpAddress"];
		for (auto valueInstancesInstancePublicIpAddressesPublicIpAddress : allPublicIpAddressesNode)
		{
			Instance::PublicIpAddress publicIpAddressesObject;
			if(!valueInstancesInstancePublicIpAddressesPublicIpAddress["Ip"].isNull())
				publicIpAddressesObject.ip = valueInstancesInstancePublicIpAddressesPublicIpAddress["Ip"].asString();
			if(!valueInstancesInstancePublicIpAddressesPublicIpAddress["GateWay"].isNull())
				publicIpAddressesObject.gateWay = valueInstancesInstancePublicIpAddressesPublicIpAddress["GateWay"].asString();
			if(!valueInstancesInstancePublicIpAddressesPublicIpAddress["Isp"].isNull())
				publicIpAddressesObject.isp = valueInstancesInstancePublicIpAddressesPublicIpAddress["Isp"].asString();
			instancesObject.publicIpAddresses.push_back(publicIpAddressesObject);
		}
		auto allPrivateIpAddressesNode = valueInstancesInstance["PrivateIpAddresses"]["PrivateIpAddress"];
		for (auto valueInstancesInstancePrivateIpAddressesPrivateIpAddress : allPrivateIpAddressesNode)
		{
			Instance::PrivateIpAddress privateIpAddressesObject;
			if(!valueInstancesInstancePrivateIpAddressesPrivateIpAddress["Ip"].isNull())
				privateIpAddressesObject.ip = valueInstancesInstancePrivateIpAddressesPrivateIpAddress["Ip"].asString();
			if(!valueInstancesInstancePrivateIpAddressesPrivateIpAddress["GateWay"].isNull())
				privateIpAddressesObject.gateWay = valueInstancesInstancePrivateIpAddressesPrivateIpAddress["GateWay"].asString();
			if(!valueInstancesInstancePrivateIpAddressesPrivateIpAddress["Isp"].isNull())
				privateIpAddressesObject.isp = valueInstancesInstancePrivateIpAddressesPrivateIpAddress["Isp"].asString();
			instancesObject.privateIpAddresses.push_back(privateIpAddressesObject);
		}
		auto allTagsNode = valueInstancesInstance["Tags"]["TagsItem"];
		for (auto valueInstancesInstanceTagsTagsItem : allTagsNode)
		{
			Instance::TagsItem tagsObject;
			if(!valueInstancesInstanceTagsTagsItem["TagValue"].isNull())
				tagsObject.tagValue = valueInstancesInstanceTagsTagsItem["TagValue"].asString();
			if(!valueInstancesInstanceTagsTagsItem["TagKey"].isNull())
				tagsObject.tagKey = valueInstancesInstanceTagsTagsItem["TagKey"].asString();
			instancesObject.tags.push_back(tagsObject);
		}
		auto allNetworkInterfacesNode = valueInstancesInstance["NetworkInterfaces"]["NetworkInterfacesItem"];
		for (auto valueInstancesInstanceNetworkInterfacesNetworkInterfacesItem : allNetworkInterfacesNode)
		{
			Instance::NetworkInterfacesItem networkInterfacesObject;
			if(!valueInstancesInstanceNetworkInterfacesNetworkInterfacesItem["Type"].isNull())
				networkInterfacesObject.type = valueInstancesInstanceNetworkInterfacesNetworkInterfacesItem["Type"].asString();
			if(!valueInstancesInstanceNetworkInterfacesNetworkInterfacesItem["MacAddress"].isNull())
				networkInterfacesObject.macAddress = valueInstancesInstanceNetworkInterfacesNetworkInterfacesItem["MacAddress"].asString();
			if(!valueInstancesInstanceNetworkInterfacesNetworkInterfacesItem["PrimaryIpAddress"].isNull())
				networkInterfacesObject.primaryIpAddress = valueInstancesInstanceNetworkInterfacesNetworkInterfacesItem["PrimaryIpAddress"].asString();
			if(!valueInstancesInstanceNetworkInterfacesNetworkInterfacesItem["NetworkInterfaceId"].isNull())
				networkInterfacesObject.networkInterfaceId = valueInstancesInstanceNetworkInterfacesNetworkInterfacesItem["NetworkInterfaceId"].asString();
			auto allPrivateIpSetsNode = valueInstancesInstanceNetworkInterfacesNetworkInterfacesItem["PrivateIpSets"]["PrivateIpSet"];
			for (auto valueInstancesInstanceNetworkInterfacesNetworkInterfacesItemPrivateIpSetsPrivateIpSet : allPrivateIpSetsNode)
			{
				Instance::NetworkInterfacesItem::PrivateIpSet privateIpSetsObject;
				if(!valueInstancesInstanceNetworkInterfacesNetworkInterfacesItemPrivateIpSetsPrivateIpSet["PrivateIpAddress"].isNull())
					privateIpSetsObject.privateIpAddress = valueInstancesInstanceNetworkInterfacesNetworkInterfacesItemPrivateIpSetsPrivateIpSet["PrivateIpAddress"].asString();
				if(!valueInstancesInstanceNetworkInterfacesNetworkInterfacesItemPrivateIpSetsPrivateIpSet["Primary"].isNull())
					privateIpSetsObject.primary = valueInstancesInstanceNetworkInterfacesNetworkInterfacesItemPrivateIpSetsPrivateIpSet["Primary"].asString() == "true";
				networkInterfacesObject.privateIpSets.push_back(privateIpSetsObject);
			}
			auto allIpv6SetsNode = valueInstancesInstanceNetworkInterfacesNetworkInterfacesItem["Ipv6Sets"]["Ipv6Set"];
			for (auto valueInstancesInstanceNetworkInterfacesNetworkInterfacesItemIpv6SetsIpv6Set : allIpv6SetsNode)
			{
				Instance::NetworkInterfacesItem::Ipv6Set ipv6SetsObject;
				if(!valueInstancesInstanceNetworkInterfacesNetworkInterfacesItemIpv6SetsIpv6Set["Ipv6Address"].isNull())
					ipv6SetsObject.ipv6Address = valueInstancesInstanceNetworkInterfacesNetworkInterfacesItemIpv6SetsIpv6Set["Ipv6Address"].asString();
				networkInterfacesObject.ipv6Sets.push_back(ipv6SetsObject);
			}
			instancesObject.networkInterfaces.push_back(networkInterfacesObject);
		}
		auto systemDiskNode = value["SystemDisk"];
		if(!systemDiskNode["device_type"].isNull())
			instancesObject.systemDisk.device_type = systemDiskNode["device_type"].asString();
		if(!systemDiskNode["disk_type"].isNull())
			instancesObject.systemDisk.disk_type = systemDiskNode["disk_type"].asString();
		if(!systemDiskNode["Size"].isNull())
			instancesObject.systemDisk.size = std::stoi(systemDiskNode["Size"].asString());
		if(!systemDiskNode["DiskName"].isNull())
			instancesObject.systemDisk.diskName = systemDiskNode["DiskName"].asString();
		if(!systemDiskNode["uuid"].isNull())
			instancesObject.systemDisk.uuid = systemDiskNode["uuid"].asString();
		if(!systemDiskNode["storage"].isNull())
			instancesObject.systemDisk.storage = std::stoi(systemDiskNode["storage"].asString());
		if(!systemDiskNode["DiskId"].isNull())
			instancesObject.systemDisk.diskId = systemDiskNode["DiskId"].asString();
		if(!systemDiskNode["Category"].isNull())
			instancesObject.systemDisk.category = systemDiskNode["Category"].asString();
		if(!systemDiskNode["name"].isNull())
			instancesObject.systemDisk.name = systemDiskNode["name"].asString();
		auto networkAttributesNode = value["NetworkAttributes"];
		if(!networkAttributesNode["NetworkId"].isNull())
			instancesObject.networkAttributes.networkId = networkAttributesNode["NetworkId"].asString();
		if(!networkAttributesNode["VSwitchId"].isNull())
			instancesObject.networkAttributes.vSwitchId = networkAttributesNode["VSwitchId"].asString();
			auto allPrivateIpAddress = networkAttributesNode["PrivateIpAddress"]["IpAddress"];
			for (auto value : allPrivateIpAddress)
				instancesObject.networkAttributes.privateIpAddress.push_back(value.asString());
		auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
		for (auto value : allSecurityGroupIds)
			instancesObject.securityGroupIds.push_back(value.asString());
		auto allInnerIpAddress = value["InnerIpAddress"]["IpAddress"];
		for (auto value : allInnerIpAddress)
			instancesObject.innerIpAddress.push_back(value.asString());
		auto allPublicIpAddress = value["PublicIpAddress"]["IpAddress"];
		for (auto value : allPublicIpAddress)
			instancesObject.publicIpAddress.push_back(value.asString());
		instances_.push_back(instancesObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
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

int DescribeInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeInstancesResult::getCode()const
{
	return code_;
}

