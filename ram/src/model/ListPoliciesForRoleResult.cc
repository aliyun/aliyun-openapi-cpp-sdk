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

#include <alibabacloud/ram/model/ListPoliciesForRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

ListPoliciesForRoleResult::ListPoliciesForRoleResult() :
	ServiceResult()
{}

ListPoliciesForRoleResult::ListPoliciesForRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPoliciesForRoleResult::~ListPoliciesForRoleResult()
{}

void ListPoliciesForRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoliciesNode = value["Policies"]["Policy"];
	for (auto valuePoliciesPolicy : allPoliciesNode)
	{
		Policy policiesObject;
		if(!valuePoliciesPolicy["DefaultVersion"].isNull())
			policiesObject.defaultVersion = valuePoliciesPolicy["DefaultVersion"].asString();
		if(!valuePoliciesPolicy["Description"].isNull())
			policiesObject.description = valuePoliciesPolicy["Description"].asString();
		if(!valuePoliciesPolicy["PolicyName"].isNull())
			policiesObject.policyName = valuePoliciesPolicy["PolicyName"].asString();
		if(!valuePoliciesPolicy["AttachDate"].isNull())
			policiesObject.attachDate = valuePoliciesPolicy["AttachDate"].asString();
		if(!valuePoliciesPolicy["PolicyType"].isNull())
			policiesObject.policyType = valuePoliciesPolicy["PolicyType"].asString();
		policies_.push_back(policiesObject);
	}

}

std::vector<ListPoliciesForRoleResult::Policy> ListPoliciesForRoleResult::getPolicies()const
{
	return policies_;
}

