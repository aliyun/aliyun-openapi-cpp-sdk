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

#include <alibabacloud/nlb/model/GetLoadBalancerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

GetLoadBalancerAttributeResult::GetLoadBalancerAttributeResult() :
	ServiceResult()
{}

GetLoadBalancerAttributeResult::GetLoadBalancerAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLoadBalancerAttributeResult::~GetLoadBalancerAttributeResult()
{}

void GetLoadBalancerAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOperationLocksNode = value["OperationLocks"]["OperationLock"];
	for (auto valueOperationLocksOperationLock : allOperationLocksNode)
	{
		OperationLock operationLocksObject;
		if(!valueOperationLocksOperationLock["LockType"].isNull())
			operationLocksObject.lockType = valueOperationLocksOperationLock["LockType"].asString();
		if(!valueOperationLocksOperationLock["LockReason"].isNull())
			operationLocksObject.lockReason = valueOperationLocksOperationLock["LockReason"].asString();
		operationLocks_.push_back(operationLocksObject);
	}
	auto allZoneMappingsNode = value["ZoneMappings"]["ZoneMapping"];
	for (auto valueZoneMappingsZoneMapping : allZoneMappingsNode)
	{
		ZoneMapping zoneMappingsObject;
		if(!valueZoneMappingsZoneMapping["VSwitchId"].isNull())
			zoneMappingsObject.vSwitchId = valueZoneMappingsZoneMapping["VSwitchId"].asString();
		if(!valueZoneMappingsZoneMapping["ZoneId"].isNull())
			zoneMappingsObject.zoneId = valueZoneMappingsZoneMapping["ZoneId"].asString();
		if(!valueZoneMappingsZoneMapping["EipType"].isNull())
			zoneMappingsObject.eipType = valueZoneMappingsZoneMapping["EipType"].asString();
		if(!valueZoneMappingsZoneMapping["Status"].isNull())
			zoneMappingsObject.status = valueZoneMappingsZoneMapping["Status"].asString();
		auto allLoadBalancerAddressesNode = valueZoneMappingsZoneMapping["LoadBalancerAddresses"]["LoadBalancerAddress"];
		for (auto valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress : allLoadBalancerAddressesNode)
		{
			ZoneMapping::LoadBalancerAddress loadBalancerAddressesObject;
			if(!valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["EniId"].isNull())
				loadBalancerAddressesObject.eniId = valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["EniId"].asString();
			if(!valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv4Address"].isNull())
				loadBalancerAddressesObject.privateIPv4Address = valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv4Address"].asString();
			if(!valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["AllocationId"].isNull())
				loadBalancerAddressesObject.allocationId = valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["AllocationId"].asString();
			if(!valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PublicIPv4Address"].isNull())
				loadBalancerAddressesObject.publicIPv4Address = valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PublicIPv4Address"].asString();
			if(!valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["Ipv6Address"].isNull())
				loadBalancerAddressesObject.ipv6Address = valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["Ipv6Address"].asString();
			if(!valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv4HcStatus"].isNull())
				loadBalancerAddressesObject.privateIPv4HcStatus = valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv4HcStatus"].asString();
			if(!valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv6HcStatus"].isNull())
				loadBalancerAddressesObject.privateIPv6HcStatus = valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv6HcStatus"].asString();
			zoneMappingsObject.loadBalancerAddresses.push_back(loadBalancerAddressesObject);
		}
		zoneMappings_.push_back(zoneMappingsObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["TagKey"].isNull())
			tagsObject.tagKey = valueTagsTag["TagKey"].asString();
		if(!valueTagsTag["TagValue"].isNull())
			tagsObject.tagValue = valueTagsTag["TagValue"].asString();
		tags_.push_back(tagsObject);
	}
	auto loadBalancerBillingConfigNode = value["LoadBalancerBillingConfig"];
	if(!loadBalancerBillingConfigNode["InternetBandwidth"].isNull())
		loadBalancerBillingConfig_.internetBandwidth = std::stoi(loadBalancerBillingConfigNode["InternetBandwidth"].asString());
	if(!loadBalancerBillingConfigNode["InternetChargeType"].isNull())
		loadBalancerBillingConfig_.internetChargeType = loadBalancerBillingConfigNode["InternetChargeType"].asString();
	if(!loadBalancerBillingConfigNode["PayType"].isNull())
		loadBalancerBillingConfig_.payType = loadBalancerBillingConfigNode["PayType"].asString();
	auto deletionProtectionConfigNode = value["DeletionProtectionConfig"];
	if(!deletionProtectionConfigNode["Enabled"].isNull())
		deletionProtectionConfig_.enabled = deletionProtectionConfigNode["Enabled"].asString() == "true";
	if(!deletionProtectionConfigNode["Reason"].isNull())
		deletionProtectionConfig_.reason = deletionProtectionConfigNode["Reason"].asString();
	if(!deletionProtectionConfigNode["EnabledTime"].isNull())
		deletionProtectionConfig_.enabledTime = deletionProtectionConfigNode["EnabledTime"].asString();
	auto modificationProtectionConfigNode = value["ModificationProtectionConfig"];
	if(!modificationProtectionConfigNode["Status"].isNull())
		modificationProtectionConfig_.status = modificationProtectionConfigNode["Status"].asString();
	if(!modificationProtectionConfigNode["Reason"].isNull())
		modificationProtectionConfig_.reason = modificationProtectionConfigNode["Reason"].asString();
	if(!modificationProtectionConfigNode["EnabledTime"].isNull())
		modificationProtectionConfig_.enabledTime = modificationProtectionConfigNode["EnabledTime"].asString();
	auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
	for (const auto &item : allSecurityGroupIds)
		securityGroupIds_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["LoadBalancerName"].isNull())
		loadBalancerName_ = value["LoadBalancerName"].asString();
	if(!value["LoadBalancerType"].isNull())
		loadBalancerType_ = value["LoadBalancerType"].asString();
	if(!value["AddressType"].isNull())
		addressType_ = value["AddressType"].asString();
	if(!value["AddressIpVersion"].isNull())
		addressIpVersion_ = value["AddressIpVersion"].asString();
	if(!value["Ipv6AddressType"].isNull())
		ipv6AddressType_ = value["Ipv6AddressType"].asString();
	if(!value["LoadBalancerStatus"].isNull())
		loadBalancerStatus_ = value["LoadBalancerStatus"].asString();
	if(!value["LoadBalancerBusinessStatus"].isNull())
		loadBalancerBusinessStatus_ = value["LoadBalancerBusinessStatus"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["CapacityUnitCount"].isNull())
		capacityUnitCount_ = std::stol(value["CapacityUnitCount"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["DNSName"].isNull())
		dNSName_ = value["DNSName"].asString();
	if(!value["BandwidthPackageId"].isNull())
		bandwidthPackageId_ = value["BandwidthPackageId"].asString();
	if(!value["CrossZoneEnabled"].isNull())
		crossZoneEnabled_ = value["CrossZoneEnabled"].asString() == "true";
	if(!value["TrafficAffinityEnabled"].isNull())
		trafficAffinityEnabled_ = value["TrafficAffinityEnabled"].asString() == "true";
	if(!value["Cps"].isNull())
		cps_ = std::stoi(value["Cps"].asString());
	if(!value["SysSecurityGroupId"].isNull())
		sysSecurityGroupId_ = value["SysSecurityGroupId"].asString();

}

std::string GetLoadBalancerAttributeResult::getAddressIpVersion()const
{
	return addressIpVersion_;
}

std::string GetLoadBalancerAttributeResult::getMessage()const
{
	return message_;
}

std::string GetLoadBalancerAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

int GetLoadBalancerAttributeResult::getCps()const
{
	return cps_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::string GetLoadBalancerAttributeResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::vector<GetLoadBalancerAttributeResult::ZoneMapping> GetLoadBalancerAttributeResult::getZoneMappings()const
{
	return zoneMappings_;
}

std::string GetLoadBalancerAttributeResult::getDNSName()const
{
	return dNSName_;
}

bool GetLoadBalancerAttributeResult::getSuccess()const
{
	return success_;
}

std::string GetLoadBalancerAttributeResult::getIpv6AddressType()const
{
	return ipv6AddressType_;
}

bool GetLoadBalancerAttributeResult::getCrossZoneEnabled()const
{
	return crossZoneEnabled_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerType()const
{
	return loadBalancerType_;
}

long GetLoadBalancerAttributeResult::getCapacityUnitCount()const
{
	return capacityUnitCount_;
}

GetLoadBalancerAttributeResult::DeletionProtectionConfig GetLoadBalancerAttributeResult::getDeletionProtectionConfig()const
{
	return deletionProtectionConfig_;
}

std::string GetLoadBalancerAttributeResult::getSysSecurityGroupId()const
{
	return sysSecurityGroupId_;
}

int GetLoadBalancerAttributeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetLoadBalancerAttributeResult::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

std::string GetLoadBalancerAttributeResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::vector<GetLoadBalancerAttributeResult::Tag> GetLoadBalancerAttributeResult::getTags()const
{
	return tags_;
}

GetLoadBalancerAttributeResult::LoadBalancerBillingConfig GetLoadBalancerAttributeResult::getLoadBalancerBillingConfig()const
{
	return loadBalancerBillingConfig_;
}

std::string GetLoadBalancerAttributeResult::getCreateTime()const
{
	return createTime_;
}

GetLoadBalancerAttributeResult::ModificationProtectionConfig GetLoadBalancerAttributeResult::getModificationProtectionConfig()const
{
	return modificationProtectionConfig_;
}

std::vector<std::string> GetLoadBalancerAttributeResult::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

std::string GetLoadBalancerAttributeResult::getCode()const
{
	return code_;
}

std::vector<GetLoadBalancerAttributeResult::OperationLock> GetLoadBalancerAttributeResult::getOperationLocks()const
{
	return operationLocks_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerName()const
{
	return loadBalancerName_;
}

std::string GetLoadBalancerAttributeResult::getVpcId()const
{
	return vpcId_;
}

bool GetLoadBalancerAttributeResult::getTrafficAffinityEnabled()const
{
	return trafficAffinityEnabled_;
}

std::string GetLoadBalancerAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string GetLoadBalancerAttributeResult::getAddressType()const
{
	return addressType_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerStatus()const
{
	return loadBalancerStatus_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerBusinessStatus()const
{
	return loadBalancerBusinessStatus_;
}

