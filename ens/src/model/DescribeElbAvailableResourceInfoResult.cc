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

#include <alibabacloud/ens/model/DescribeElbAvailableResourceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeElbAvailableResourceInfoResult::DescribeElbAvailableResourceInfoResult() :
	ServiceResult()
{}

DescribeElbAvailableResourceInfoResult::DescribeElbAvailableResourceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeElbAvailableResourceInfoResult::~DescribeElbAvailableResourceInfoResult()
{}

void DescribeElbAvailableResourceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allElbAvailableResourceInfoNode = value["ElbAvailableResourceInfo"]["ElbAvailableResourceInfoItem"];
	for (auto valueElbAvailableResourceInfoElbAvailableResourceInfoItem : allElbAvailableResourceInfoNode)
	{
		ElbAvailableResourceInfoItem elbAvailableResourceInfoObject;
		if(!valueElbAvailableResourceInfoElbAvailableResourceInfoItem["EnsRegionId"].isNull())
			elbAvailableResourceInfoObject.ensRegionId = valueElbAvailableResourceInfoElbAvailableResourceInfoItem["EnsRegionId"].asString();
		if(!valueElbAvailableResourceInfoElbAvailableResourceInfoItem["EnName"].isNull())
			elbAvailableResourceInfoObject.enName = valueElbAvailableResourceInfoElbAvailableResourceInfoItem["EnName"].asString();
		if(!valueElbAvailableResourceInfoElbAvailableResourceInfoItem["Area"].isNull())
			elbAvailableResourceInfoObject.area = valueElbAvailableResourceInfoElbAvailableResourceInfoItem["Area"].asString();
		if(!valueElbAvailableResourceInfoElbAvailableResourceInfoItem["Province"].isNull())
			elbAvailableResourceInfoObject.province = valueElbAvailableResourceInfoElbAvailableResourceInfoItem["Province"].asString();
		if(!valueElbAvailableResourceInfoElbAvailableResourceInfoItem["Name"].isNull())
			elbAvailableResourceInfoObject.name = valueElbAvailableResourceInfoElbAvailableResourceInfoItem["Name"].asString();
		if(!valueElbAvailableResourceInfoElbAvailableResourceInfoItem["CanBuyCount"].isNull())
			elbAvailableResourceInfoObject.canBuyCount = valueElbAvailableResourceInfoElbAvailableResourceInfoItem["CanBuyCount"].asString();
		auto allLoadBalancerSpec = value["LoadBalancerSpec"]["LoadBalancerSpec"];
		for (auto value : allLoadBalancerSpec)
			elbAvailableResourceInfoObject.loadBalancerSpec.push_back(value.asString());
		auto allAbility = value["Ability"]["Ability"];
		for (auto value : allAbility)
			elbAvailableResourceInfoObject.ability.push_back(value.asString());
		elbAvailableResourceInfo_.push_back(elbAvailableResourceInfoObject);
	}

}

std::vector<DescribeElbAvailableResourceInfoResult::ElbAvailableResourceInfoItem> DescribeElbAvailableResourceInfoResult::getElbAvailableResourceInfo()const
{
	return elbAvailableResourceInfo_;
}

