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

#include <alibabacloud/gwlb/model/GetLoadBalancerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gwlb;
using namespace AlibabaCloud::Gwlb::Model;

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
	auto allTagsNode = value["Tags"]["TagModel"];
	for (auto valueTagsTagModel : allTagsNode)
	{
		TagModel tagsObject;
		if(!valueTagsTagModel["Key"].isNull())
			tagsObject.key = valueTagsTagModel["Key"].asString();
		if(!valueTagsTagModel["Value"].isNull())
			tagsObject.value = valueTagsTagModel["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto allZoneMappingsNode = value["ZoneMappings"]["ZoneEniModel"];
	for (auto valueZoneMappingsZoneEniModel : allZoneMappingsNode)
	{
		ZoneEniModel zoneMappingsObject;
		if(!valueZoneMappingsZoneEniModel["VSwitchId"].isNull())
			zoneMappingsObject.vSwitchId = valueZoneMappingsZoneEniModel["VSwitchId"].asString();
		if(!valueZoneMappingsZoneEniModel["ZoneId"].isNull())
			zoneMappingsObject.zoneId = valueZoneMappingsZoneEniModel["ZoneId"].asString();
		auto allLoadBalancerAddressesNode = valueZoneMappingsZoneEniModel["LoadBalancerAddresses"]["EniModels"];
		for (auto valueZoneMappingsZoneEniModelLoadBalancerAddressesEniModels : allLoadBalancerAddressesNode)
		{
			ZoneEniModel::EniModels loadBalancerAddressesObject;
			if(!valueZoneMappingsZoneEniModelLoadBalancerAddressesEniModels["EniId"].isNull())
				loadBalancerAddressesObject.eniId = valueZoneMappingsZoneEniModelLoadBalancerAddressesEniModels["EniId"].asString();
			if(!valueZoneMappingsZoneEniModelLoadBalancerAddressesEniModels["PrivateIpv4Address"].isNull())
				loadBalancerAddressesObject.privateIpv4Address = valueZoneMappingsZoneEniModelLoadBalancerAddressesEniModels["PrivateIpv4Address"].asString();
			zoneMappingsObject.loadBalancerAddresses.push_back(loadBalancerAddressesObject);
		}
		zoneMappings_.push_back(zoneMappingsObject);
	}
	if(!value["AddressIpVersion"].isNull())
		addressIpVersion_ = value["AddressIpVersion"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["CrossZoneEnabled"].isNull())
		crossZoneEnabled_ = value["CrossZoneEnabled"].asString() == "true";
	if(!value["LoadBalancerBusinessStatus"].isNull())
		loadBalancerBusinessStatus_ = value["LoadBalancerBusinessStatus"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["LoadBalancerName"].isNull())
		loadBalancerName_ = value["LoadBalancerName"].asString();
	if(!value["LoadBalancerStatus"].isNull())
		loadBalancerStatus_ = value["LoadBalancerStatus"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();

}

std::string GetLoadBalancerAttributeResult::getLoadBalancerName()const
{
	return loadBalancerName_;
}

std::string GetLoadBalancerAttributeResult::getAddressIpVersion()const
{
	return addressIpVersion_;
}

std::string GetLoadBalancerAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string GetLoadBalancerAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string GetLoadBalancerAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::vector<GetLoadBalancerAttributeResult::ZoneEniModel> GetLoadBalancerAttributeResult::getZoneMappings()const
{
	return zoneMappings_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerBusinessStatus()const
{
	return loadBalancerBusinessStatus_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerStatus()const
{
	return loadBalancerStatus_;
}

std::vector<GetLoadBalancerAttributeResult::TagModel> GetLoadBalancerAttributeResult::getTags()const
{
	return tags_;
}

bool GetLoadBalancerAttributeResult::getCrossZoneEnabled()const
{
	return crossZoneEnabled_;
}

