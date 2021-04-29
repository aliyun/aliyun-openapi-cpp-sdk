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

#include <alibabacloud/smartag/model/DescribePolicyBasedRoutingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribePolicyBasedRoutingsResult::DescribePolicyBasedRoutingsResult() :
	ServiceResult()
{}

DescribePolicyBasedRoutingsResult::DescribePolicyBasedRoutingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePolicyBasedRoutingsResult::~DescribePolicyBasedRoutingsResult()
{}

void DescribePolicyBasedRoutingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPolicyBasedRoutingsNode = value["PolicyBasedRoutings"]["PolicyBasedRouting"];
	for (auto valuePolicyBasedRoutingsPolicyBasedRouting : allPolicyBasedRoutingsNode)
	{
		PolicyBasedRouting policyBasedRoutingsObject;
		if(!valuePolicyBasedRoutingsPolicyBasedRouting["PbrInstanceId"].isNull())
			policyBasedRoutingsObject.pbrInstanceId = valuePolicyBasedRoutingsPolicyBasedRouting["PbrInstanceId"].asString();
		if(!valuePolicyBasedRoutingsPolicyBasedRouting["Description"].isNull())
			policyBasedRoutingsObject.description = valuePolicyBasedRoutingsPolicyBasedRouting["Description"].asString();
		if(!valuePolicyBasedRoutingsPolicyBasedRouting["Priority"].isNull())
			policyBasedRoutingsObject.priority = std::stoi(valuePolicyBasedRoutingsPolicyBasedRouting["Priority"].asString());
		if(!valuePolicyBasedRoutingsPolicyBasedRouting["Name"].isNull())
			policyBasedRoutingsObject.name = valuePolicyBasedRoutingsPolicyBasedRouting["Name"].asString();
		policyBasedRoutings_.push_back(policyBasedRoutingsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribePolicyBasedRoutingsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribePolicyBasedRoutingsResult::getPageSize()const
{
	return pageSize_;
}

int DescribePolicyBasedRoutingsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribePolicyBasedRoutingsResult::PolicyBasedRouting> DescribePolicyBasedRoutingsResult::getPolicyBasedRoutings()const
{
	return policyBasedRoutings_;
}

