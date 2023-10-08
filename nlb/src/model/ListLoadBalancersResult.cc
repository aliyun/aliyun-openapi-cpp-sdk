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

#include <alibabacloud/nlb/model/ListLoadBalancersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

ListLoadBalancersResult::ListLoadBalancersResult() :
	ServiceResult()
{}

ListLoadBalancersResult::ListLoadBalancersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLoadBalancersResult::~ListLoadBalancersResult()
{}

void ListLoadBalancersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLoadBalancersNode = value["LoadBalancers"]["LoadbalancerInfo"];
	for (auto valueLoadBalancersLoadbalancerInfo : allLoadBalancersNode)
	{
		LoadbalancerInfo loadBalancersObject;
		if(!valueLoadBalancersLoadbalancerInfo["RegionId"].isNull())
			loadBalancersObject.regionId = valueLoadBalancersLoadbalancerInfo["RegionId"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["LoadBalancerId"].isNull())
			loadBalancersObject.loadBalancerId = valueLoadBalancersLoadbalancerInfo["LoadBalancerId"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["LoadBalancerName"].isNull())
			loadBalancersObject.loadBalancerName = valueLoadBalancersLoadbalancerInfo["LoadBalancerName"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["LoadBalancerType"].isNull())
			loadBalancersObject.loadBalancerType = valueLoadBalancersLoadbalancerInfo["LoadBalancerType"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["AddressType"].isNull())
			loadBalancersObject.addressType = valueLoadBalancersLoadbalancerInfo["AddressType"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["AddressIpVersion"].isNull())
			loadBalancersObject.addressIpVersion = valueLoadBalancersLoadbalancerInfo["AddressIpVersion"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["Ipv6AddressType"].isNull())
			loadBalancersObject.ipv6AddressType = valueLoadBalancersLoadbalancerInfo["Ipv6AddressType"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["LoadBalancerStatus"].isNull())
			loadBalancersObject.loadBalancerStatus = valueLoadBalancersLoadbalancerInfo["LoadBalancerStatus"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["LoadBalancerBusinessStatus"].isNull())
			loadBalancersObject.loadBalancerBusinessStatus = valueLoadBalancersLoadbalancerInfo["LoadBalancerBusinessStatus"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["VpcId"].isNull())
			loadBalancersObject.vpcId = valueLoadBalancersLoadbalancerInfo["VpcId"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["CapacityUnitCount"].isNull())
			loadBalancersObject.capacityUnitCount = std::stol(valueLoadBalancersLoadbalancerInfo["CapacityUnitCount"].asString());
		if(!valueLoadBalancersLoadbalancerInfo["CreateTime"].isNull())
			loadBalancersObject.createTime = valueLoadBalancersLoadbalancerInfo["CreateTime"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["ResourceGroupId"].isNull())
			loadBalancersObject.resourceGroupId = valueLoadBalancersLoadbalancerInfo["ResourceGroupId"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["DNSName"].isNull())
			loadBalancersObject.dNSName = valueLoadBalancersLoadbalancerInfo["DNSName"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["BandwidthPackageId"].isNull())
			loadBalancersObject.bandwidthPackageId = valueLoadBalancersLoadbalancerInfo["BandwidthPackageId"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["SysSecurityGroupId"].isNull())
			loadBalancersObject.sysSecurityGroupId = valueLoadBalancersLoadbalancerInfo["SysSecurityGroupId"].asString();
		if(!valueLoadBalancersLoadbalancerInfo["CrossZoneEnabled"].isNull())
			loadBalancersObject.crossZoneEnabled = valueLoadBalancersLoadbalancerInfo["CrossZoneEnabled"].asString() == "true";
		if(!valueLoadBalancersLoadbalancerInfo["TrafficAffinityEnabled"].isNull())
			loadBalancersObject.trafficAffinityEnabled = valueLoadBalancersLoadbalancerInfo["TrafficAffinityEnabled"].asString() == "true";
		if(!valueLoadBalancersLoadbalancerInfo["AliUid"].isNull())
			loadBalancersObject.aliUid = std::stol(valueLoadBalancersLoadbalancerInfo["AliUid"].asString());
		auto allOperationLocksNode = valueLoadBalancersLoadbalancerInfo["OperationLocks"]["OperationLock"];
		for (auto valueLoadBalancersLoadbalancerInfoOperationLocksOperationLock : allOperationLocksNode)
		{
			LoadbalancerInfo::OperationLock operationLocksObject;
			if(!valueLoadBalancersLoadbalancerInfoOperationLocksOperationLock["LockType"].isNull())
				operationLocksObject.lockType = valueLoadBalancersLoadbalancerInfoOperationLocksOperationLock["LockType"].asString();
			if(!valueLoadBalancersLoadbalancerInfoOperationLocksOperationLock["LockReason"].isNull())
				operationLocksObject.lockReason = valueLoadBalancersLoadbalancerInfoOperationLocksOperationLock["LockReason"].asString();
			loadBalancersObject.operationLocks.push_back(operationLocksObject);
		}
		auto allZoneMappingsNode = valueLoadBalancersLoadbalancerInfo["ZoneMappings"]["ZoneMapping"];
		for (auto valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMapping : allZoneMappingsNode)
		{
			LoadbalancerInfo::ZoneMapping zoneMappingsObject;
			if(!valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMapping["VSwitchId"].isNull())
				zoneMappingsObject.vSwitchId = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMapping["VSwitchId"].asString();
			if(!valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMapping["ZoneId"].isNull())
				zoneMappingsObject.zoneId = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMapping["ZoneId"].asString();
			if(!valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMapping["EipType"].isNull())
				zoneMappingsObject.eipType = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMapping["EipType"].asString();
			if(!valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMapping["Status"].isNull())
				zoneMappingsObject.status = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMapping["Status"].asString();
			auto allLoadBalancerAddressesNode = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMapping["LoadBalancerAddresses"]["LoadBalancerAddress"];
			for (auto valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress : allLoadBalancerAddressesNode)
			{
				LoadbalancerInfo::ZoneMapping::LoadBalancerAddress loadBalancerAddressesObject;
				if(!valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["EniId"].isNull())
					loadBalancerAddressesObject.eniId = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["EniId"].asString();
				if(!valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv4Address"].isNull())
					loadBalancerAddressesObject.privateIPv4Address = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv4Address"].asString();
				if(!valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["AllocationId"].isNull())
					loadBalancerAddressesObject.allocationId = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["AllocationId"].asString();
				if(!valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PublicIPv4Address"].isNull())
					loadBalancerAddressesObject.publicIPv4Address = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PublicIPv4Address"].asString();
				if(!valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["Ipv6Address"].isNull())
					loadBalancerAddressesObject.ipv6Address = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["Ipv6Address"].asString();
				if(!valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv4HcStatus"].isNull())
					loadBalancerAddressesObject.privateIPv4HcStatus = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv4HcStatus"].asString();
				if(!valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv6HcStatus"].isNull())
					loadBalancerAddressesObject.privateIPv6HcStatus = valueLoadBalancersLoadbalancerInfoZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["PrivateIPv6HcStatus"].asString();
				zoneMappingsObject.loadBalancerAddresses.push_back(loadBalancerAddressesObject);
			}
			loadBalancersObject.zoneMappings.push_back(zoneMappingsObject);
		}
		auto allTagsNode = valueLoadBalancersLoadbalancerInfo["Tags"]["tagModels"];
		for (auto valueLoadBalancersLoadbalancerInfoTagstagModels : allTagsNode)
		{
			LoadbalancerInfo::TagModels tagsObject;
			if(!valueLoadBalancersLoadbalancerInfoTagstagModels["Key"].isNull())
				tagsObject.key = valueLoadBalancersLoadbalancerInfoTagstagModels["Key"].asString();
			if(!valueLoadBalancersLoadbalancerInfoTagstagModels["Value"].isNull())
				tagsObject.value = valueLoadBalancersLoadbalancerInfoTagstagModels["Value"].asString();
			loadBalancersObject.tags.push_back(tagsObject);
		}
		auto loadBalancerBillingConfigNode = value["LoadBalancerBillingConfig"];
		if(!loadBalancerBillingConfigNode["InternetBandwidth"].isNull())
			loadBalancersObject.loadBalancerBillingConfig.internetBandwidth = std::stoi(loadBalancerBillingConfigNode["InternetBandwidth"].asString());
		if(!loadBalancerBillingConfigNode["InternetChargeType"].isNull())
			loadBalancersObject.loadBalancerBillingConfig.internetChargeType = loadBalancerBillingConfigNode["InternetChargeType"].asString();
		if(!loadBalancerBillingConfigNode["PayType"].isNull())
			loadBalancersObject.loadBalancerBillingConfig.payType = loadBalancerBillingConfigNode["PayType"].asString();
		auto deletionProtectionConfigNode = value["DeletionProtectionConfig"];
		if(!deletionProtectionConfigNode["Enabled"].isNull())
			loadBalancersObject.deletionProtectionConfig.enabled = deletionProtectionConfigNode["Enabled"].asString() == "true";
		if(!deletionProtectionConfigNode["Reason"].isNull())
			loadBalancersObject.deletionProtectionConfig.reason = deletionProtectionConfigNode["Reason"].asString();
		if(!deletionProtectionConfigNode["EnabledTime"].isNull())
			loadBalancersObject.deletionProtectionConfig.enabledTime = deletionProtectionConfigNode["EnabledTime"].asString();
		auto modificationProtectionConfigNode = value["ModificationProtectionConfig"];
		if(!modificationProtectionConfigNode["Status"].isNull())
			loadBalancersObject.modificationProtectionConfig.status = modificationProtectionConfigNode["Status"].asString();
		if(!modificationProtectionConfigNode["Reason"].isNull())
			loadBalancersObject.modificationProtectionConfig.reason = modificationProtectionConfigNode["Reason"].asString();
		if(!modificationProtectionConfigNode["EnabledTime"].isNull())
			loadBalancersObject.modificationProtectionConfig.enabledTime = modificationProtectionConfigNode["EnabledTime"].asString();
		auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
		for (auto value : allSecurityGroupIds)
			loadBalancersObject.securityGroupIds.push_back(value.asString());
		loadBalancers_.push_back(loadBalancersObject);
	}
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
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListLoadBalancersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListLoadBalancersResult::getMessage()const
{
	return message_;
}

std::string ListLoadBalancersResult::getNextToken()const
{
	return nextToken_;
}

int ListLoadBalancersResult::getMaxResults()const
{
	return maxResults_;
}

int ListLoadBalancersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListLoadBalancersResult::LoadbalancerInfo> ListLoadBalancersResult::getLoadBalancers()const
{
	return loadBalancers_;
}

std::string ListLoadBalancersResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListLoadBalancersResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListLoadBalancersResult::getCode()const
{
	return code_;
}

bool ListLoadBalancersResult::getSuccess()const
{
	return success_;
}

