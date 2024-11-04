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

#include <alibabacloud/alb/model/ListLoadBalancersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

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
	auto allLoadBalancersNode = value["LoadBalancers"]["loadBalancer"];
	for (auto valueLoadBalancersloadBalancer : allLoadBalancersNode)
	{
		LoadBalancer loadBalancersObject;
		if(!valueLoadBalancersloadBalancer["AddressAllocatedMode"].isNull())
			loadBalancersObject.addressAllocatedMode = valueLoadBalancersloadBalancer["AddressAllocatedMode"].asString();
		if(!valueLoadBalancersloadBalancer["AddressType"].isNull())
			loadBalancersObject.addressType = valueLoadBalancersloadBalancer["AddressType"].asString();
		if(!valueLoadBalancersloadBalancer["BandwidthCapacity"].isNull())
			loadBalancersObject.bandwidthCapacity = std::stoi(valueLoadBalancersloadBalancer["BandwidthCapacity"].asString());
		if(!valueLoadBalancersloadBalancer["BandwidthPackageId"].isNull())
			loadBalancersObject.bandwidthPackageId = valueLoadBalancersloadBalancer["BandwidthPackageId"].asString();
		if(!valueLoadBalancersloadBalancer["CreateTime"].isNull())
			loadBalancersObject.createTime = valueLoadBalancersloadBalancer["CreateTime"].asString();
		if(!valueLoadBalancersloadBalancer["DNSName"].isNull())
			loadBalancersObject.dNSName = valueLoadBalancersloadBalancer["DNSName"].asString();
		if(!valueLoadBalancersloadBalancer["ServiceManagedEnabled"].isNull())
			loadBalancersObject.serviceManagedEnabled = valueLoadBalancersloadBalancer["ServiceManagedEnabled"].asString() == "true";
		if(!valueLoadBalancersloadBalancer["ServiceManagedMode"].isNull())
			loadBalancersObject.serviceManagedMode = valueLoadBalancersloadBalancer["ServiceManagedMode"].asString();
		if(!valueLoadBalancersloadBalancer["LoadBalancerBussinessStatus"].isNull())
			loadBalancersObject.loadBalancerBussinessStatus = valueLoadBalancersloadBalancer["LoadBalancerBussinessStatus"].asString();
		if(!valueLoadBalancersloadBalancer["LoadBalancerEdition"].isNull())
			loadBalancersObject.loadBalancerEdition = valueLoadBalancersloadBalancer["LoadBalancerEdition"].asString();
		if(!valueLoadBalancersloadBalancer["LoadBalancerId"].isNull())
			loadBalancersObject.loadBalancerId = valueLoadBalancersloadBalancer["LoadBalancerId"].asString();
		if(!valueLoadBalancersloadBalancer["LoadBalancerName"].isNull())
			loadBalancersObject.loadBalancerName = valueLoadBalancersloadBalancer["LoadBalancerName"].asString();
		if(!valueLoadBalancersloadBalancer["LoadBalancerStatus"].isNull())
			loadBalancersObject.loadBalancerStatus = valueLoadBalancersloadBalancer["LoadBalancerStatus"].asString();
		if(!valueLoadBalancersloadBalancer["ResourceGroupId"].isNull())
			loadBalancersObject.resourceGroupId = valueLoadBalancersloadBalancer["ResourceGroupId"].asString();
		if(!valueLoadBalancersloadBalancer["VpcId"].isNull())
			loadBalancersObject.vpcId = valueLoadBalancersloadBalancer["VpcId"].asString();
		if(!valueLoadBalancersloadBalancer["ConfigManagedEnabled"].isNull())
			loadBalancersObject.configManagedEnabled = valueLoadBalancersloadBalancer["ConfigManagedEnabled"].asString() == "true";
		if(!valueLoadBalancersloadBalancer["AddressIpVersion"].isNull())
			loadBalancersObject.addressIpVersion = valueLoadBalancersloadBalancer["AddressIpVersion"].asString();
		if(!valueLoadBalancersloadBalancer["Ipv6AddressType"].isNull())
			loadBalancersObject.ipv6AddressType = valueLoadBalancersloadBalancer["Ipv6AddressType"].asString();
		auto allLoadBalancerOperationLocksNode = valueLoadBalancersloadBalancer["LoadBalancerOperationLocks"]["LoadBalancerOperationLock"];
		for (auto valueLoadBalancersloadBalancerLoadBalancerOperationLocksLoadBalancerOperationLock : allLoadBalancerOperationLocksNode)
		{
			LoadBalancer::LoadBalancerOperationLock loadBalancerOperationLocksObject;
			if(!valueLoadBalancersloadBalancerLoadBalancerOperationLocksLoadBalancerOperationLock["LockReason"].isNull())
				loadBalancerOperationLocksObject.lockReason = valueLoadBalancersloadBalancerLoadBalancerOperationLocksLoadBalancerOperationLock["LockReason"].asString();
			if(!valueLoadBalancersloadBalancerLoadBalancerOperationLocksLoadBalancerOperationLock["LockType"].isNull())
				loadBalancerOperationLocksObject.lockType = valueLoadBalancersloadBalancerLoadBalancerOperationLocksLoadBalancerOperationLock["LockType"].asString();
			loadBalancersObject.loadBalancerOperationLocks.push_back(loadBalancerOperationLocksObject);
		}
		auto allTagsNode = valueLoadBalancersloadBalancer["Tags"]["Tag"];
		for (auto valueLoadBalancersloadBalancerTagsTag : allTagsNode)
		{
			LoadBalancer::Tag tagsObject;
			if(!valueLoadBalancersloadBalancerTagsTag["Key"].isNull())
				tagsObject.key = valueLoadBalancersloadBalancerTagsTag["Key"].asString();
			if(!valueLoadBalancersloadBalancerTagsTag["Value"].isNull())
				tagsObject.value = valueLoadBalancersloadBalancerTagsTag["Value"].asString();
			loadBalancersObject.tags.push_back(tagsObject);
		}
		auto allAssociatedResourcesNode = valueLoadBalancersloadBalancer["AssociatedResources"]["AssociatedResource"];
		for (auto valueLoadBalancersloadBalancerAssociatedResourcesAssociatedResource : allAssociatedResourcesNode)
		{
			LoadBalancer::AssociatedResource associatedResourcesObject;
			if(!valueLoadBalancersloadBalancerAssociatedResourcesAssociatedResource["AssociatedResourceType"].isNull())
				associatedResourcesObject.associatedResourceType = valueLoadBalancersloadBalancerAssociatedResourcesAssociatedResource["AssociatedResourceType"].asString();
			if(!valueLoadBalancersloadBalancerAssociatedResourcesAssociatedResource["AssociatedResourceId"].isNull())
				associatedResourcesObject.associatedResourceId = valueLoadBalancersloadBalancerAssociatedResourcesAssociatedResource["AssociatedResourceId"].asString();
			if(!valueLoadBalancersloadBalancerAssociatedResourcesAssociatedResource["PolicyId"].isNull())
				associatedResourcesObject.policyId = valueLoadBalancersloadBalancerAssociatedResourcesAssociatedResource["PolicyId"].asString();
			if(!valueLoadBalancersloadBalancerAssociatedResourcesAssociatedResource["Status"].isNull())
				associatedResourcesObject.status = valueLoadBalancersloadBalancerAssociatedResourcesAssociatedResource["Status"].asString();
			if(!valueLoadBalancersloadBalancerAssociatedResourcesAssociatedResource["AssociatedMode"].isNull())
				associatedResourcesObject.associatedMode = valueLoadBalancersloadBalancerAssociatedResourcesAssociatedResource["AssociatedMode"].asString();
			loadBalancersObject.associatedResources.push_back(associatedResourcesObject);
		}
		auto accessLogConfigNode = value["AccessLogConfig"];
		if(!accessLogConfigNode["LogProject"].isNull())
			loadBalancersObject.accessLogConfig.logProject = accessLogConfigNode["LogProject"].asString();
		if(!accessLogConfigNode["LogStore"].isNull())
			loadBalancersObject.accessLogConfig.logStore = accessLogConfigNode["LogStore"].asString();
		auto deletionProtectionConfigNode = value["DeletionProtectionConfig"];
		if(!deletionProtectionConfigNode["Enabled"].isNull())
			loadBalancersObject.deletionProtectionConfig.enabled = deletionProtectionConfigNode["Enabled"].asString() == "true";
		if(!deletionProtectionConfigNode["EnabledTime"].isNull())
			loadBalancersObject.deletionProtectionConfig.enabledTime = deletionProtectionConfigNode["EnabledTime"].asString();
		auto loadBalancerBillingConfigNode = value["LoadBalancerBillingConfig"];
		if(!loadBalancerBillingConfigNode["InternetBandwidth"].isNull())
			loadBalancersObject.loadBalancerBillingConfig.internetBandwidth = std::stoi(loadBalancerBillingConfigNode["InternetBandwidth"].asString());
		if(!loadBalancerBillingConfigNode["InternetChargeType"].isNull())
			loadBalancersObject.loadBalancerBillingConfig.internetChargeType = loadBalancerBillingConfigNode["InternetChargeType"].asString();
		if(!loadBalancerBillingConfigNode["PayType"].isNull())
			loadBalancersObject.loadBalancerBillingConfig.payType = loadBalancerBillingConfigNode["PayType"].asString();
		auto modificationProtectionConfigNode = value["ModificationProtectionConfig"];
		if(!modificationProtectionConfigNode["Reason"].isNull())
			loadBalancersObject.modificationProtectionConfig.reason = modificationProtectionConfigNode["Reason"].asString();
		if(!modificationProtectionConfigNode["Status"].isNull())
			loadBalancersObject.modificationProtectionConfig.status = modificationProtectionConfigNode["Status"].asString();
		loadBalancers_.push_back(loadBalancersObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListLoadBalancersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListLoadBalancersResult::getNextToken()const
{
	return nextToken_;
}

int ListLoadBalancersResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListLoadBalancersResult::LoadBalancer> ListLoadBalancersResult::getLoadBalancers()const
{
	return loadBalancers_;
}

