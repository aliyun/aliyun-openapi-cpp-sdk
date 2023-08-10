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

#include <alibabacloud/adcp/model/DescribePoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adcp;
using namespace AlibabaCloud::Adcp::Model;

DescribePoliciesResult::DescribePoliciesResult() :
	ServiceResult()
{}

DescribePoliciesResult::DescribePoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePoliciesResult::~DescribePoliciesResult()
{}

void DescribePoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoliciesNode = value["Policies"]["policy"];
	for (auto valuePoliciespolicy : allPoliciesNode)
	{
		Policy policiesObject;
		if(!valuePoliciespolicy["Category"].isNull())
			policiesObject.category = valuePoliciespolicy["Category"].asString();
		auto allNames = value["Names"]["name"];
		for (auto value : allNames)
			policiesObject.names.push_back(value.asString());
		policies_.push_back(policiesObject);
	}

}

std::vector<DescribePoliciesResult::Policy> DescribePoliciesResult::getPolicies()const
{
	return policies_;
}

