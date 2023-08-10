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

#include <alibabacloud/adcp/model/DescribePolicyDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adcp;
using namespace AlibabaCloud::Adcp::Model;

DescribePolicyDetailsResult::DescribePolicyDetailsResult() :
	ServiceResult()
{}

DescribePolicyDetailsResult::DescribePolicyDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePolicyDetailsResult::~DescribePolicyDetailsResult()
{}

void DescribePolicyDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto policyNode = value["Policy"];
	if(!policyNode["Name"].isNull())
		policy_.name = policyNode["Name"].asString();
	if(!policyNode["Category"].isNull())
		policy_.category = policyNode["Category"].asString();
	if(!policyNode["Description"].isNull())
		policy_.description = policyNode["Description"].asString();
	if(!policyNode["Action"].isNull())
		policy_.action = policyNode["Action"].asString();
	if(!policyNode["Severity"].isNull())
		policy_.severity = policyNode["Severity"].asString();
	if(!policyNode["Template"].isNull())
		policy_._template = policyNode["Template"].asString();
	if(!policyNode["NoConfig"].isNull())
		policy_.noConfig = std::stoi(policyNode["NoConfig"].asString());
	if(!policyNode["Created"].isNull())
		policy_.created = policyNode["Created"].asString();
	if(!policyNode["Updated"].isNull())
		policy_.updated = policyNode["Updated"].asString();

}

DescribePolicyDetailsResult::Policy DescribePolicyDetailsResult::getPolicy()const
{
	return policy_;
}

