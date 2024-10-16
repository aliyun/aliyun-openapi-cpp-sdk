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

#include <alibabacloud/gwlb/model/ListLoadBalancersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gwlb;
using namespace AlibabaCloud::Gwlb::Model;

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
	auto allLoadBalancersNode = value["LoadBalancers"]["Data"];
	for (auto valueLoadBalancersData : allLoadBalancersNode)
	{
		Data loadBalancersObject;
		if(!valueLoadBalancersData["AddressIpVersion"].isNull())
			loadBalancersObject.addressIpVersion = valueLoadBalancersData["AddressIpVersion"].asString();
		if(!valueLoadBalancersData["CreateTime"].isNull())
			loadBalancersObject.createTime = valueLoadBalancersData["CreateTime"].asString();
		if(!valueLoadBalancersData["CrossZoneEnabled"].isNull())
			loadBalancersObject.crossZoneEnabled = valueLoadBalancersData["CrossZoneEnabled"].asString() == "true";
		if(!valueLoadBalancersData["LoadBalancerBusinessStatus"].isNull())
			loadBalancersObject.loadBalancerBusinessStatus = valueLoadBalancersData["LoadBalancerBusinessStatus"].asString();
		if(!valueLoadBalancersData["LoadBalancerId"].isNull())
			loadBalancersObject.loadBalancerId = valueLoadBalancersData["LoadBalancerId"].asString();
		if(!valueLoadBalancersData["LoadBalancerName"].isNull())
			loadBalancersObject.loadBalancerName = valueLoadBalancersData["LoadBalancerName"].asString();
		if(!valueLoadBalancersData["LoadBalancerStatus"].isNull())
			loadBalancersObject.loadBalancerStatus = valueLoadBalancersData["LoadBalancerStatus"].asString();
		if(!valueLoadBalancersData["ResourceGroupId"].isNull())
			loadBalancersObject.resourceGroupId = valueLoadBalancersData["ResourceGroupId"].asString();
		if(!valueLoadBalancersData["VpcId"].isNull())
			loadBalancersObject.vpcId = valueLoadBalancersData["VpcId"].asString();
		auto allTagsNode = valueLoadBalancersData["Tags"]["TagModel"];
		for (auto valueLoadBalancersDataTagsTagModel : allTagsNode)
		{
			Data::TagModel tagsObject;
			if(!valueLoadBalancersDataTagsTagModel["Key"].isNull())
				tagsObject.key = valueLoadBalancersDataTagsTagModel["Key"].asString();
			if(!valueLoadBalancersDataTagsTagModel["Value"].isNull())
				tagsObject.value = valueLoadBalancersDataTagsTagModel["Value"].asString();
			loadBalancersObject.tags.push_back(tagsObject);
		}
		auto allZoneMappingsNode = valueLoadBalancersData["ZoneMappings"]["ZoneEniModel"];
		for (auto valueLoadBalancersDataZoneMappingsZoneEniModel : allZoneMappingsNode)
		{
			Data::ZoneEniModel zoneMappingsObject;
			if(!valueLoadBalancersDataZoneMappingsZoneEniModel["VSwitchId"].isNull())
				zoneMappingsObject.vSwitchId = valueLoadBalancersDataZoneMappingsZoneEniModel["VSwitchId"].asString();
			if(!valueLoadBalancersDataZoneMappingsZoneEniModel["ZoneId"].isNull())
				zoneMappingsObject.zoneId = valueLoadBalancersDataZoneMappingsZoneEniModel["ZoneId"].asString();
			auto allLoadBalancerAddressesNode = valueLoadBalancersDataZoneMappingsZoneEniModel["LoadBalancerAddresses"]["EniModels"];
			for (auto valueLoadBalancersDataZoneMappingsZoneEniModelLoadBalancerAddressesEniModels : allLoadBalancerAddressesNode)
			{
				Data::ZoneEniModel::EniModels loadBalancerAddressesObject;
				if(!valueLoadBalancersDataZoneMappingsZoneEniModelLoadBalancerAddressesEniModels["EniId"].isNull())
					loadBalancerAddressesObject.eniId = valueLoadBalancersDataZoneMappingsZoneEniModelLoadBalancerAddressesEniModels["EniId"].asString();
				if(!valueLoadBalancersDataZoneMappingsZoneEniModelLoadBalancerAddressesEniModels["PrivateIpv4Address"].isNull())
					loadBalancerAddressesObject.privateIpv4Address = valueLoadBalancersDataZoneMappingsZoneEniModelLoadBalancerAddressesEniModels["PrivateIpv4Address"].asString();
				zoneMappingsObject.loadBalancerAddresses.push_back(loadBalancerAddressesObject);
			}
			loadBalancersObject.zoneMappings.push_back(zoneMappingsObject);
		}
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

std::vector<ListLoadBalancersResult::Data> ListLoadBalancersResult::getLoadBalancers()const
{
	return loadBalancers_;
}

