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

#include <alibabacloud/tag/model/ListPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tag;
using namespace AlibabaCloud::Tag::Model;

ListPoliciesResult::ListPoliciesResult() :
	ServiceResult()
{}

ListPoliciesResult::ListPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPoliciesResult::~ListPoliciesResult()
{}

void ListPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPolicyListNode = value["PolicyList"]["Policy"];
	for (auto valuePolicyListPolicy : allPolicyListNode)
	{
		Policy policyListObject;
		if(!valuePolicyListPolicy["PolicyContent"].isNull())
			policyListObject.policyContent = valuePolicyListPolicy["PolicyContent"].asString();
		if(!valuePolicyListPolicy["PolicyDesc"].isNull())
			policyListObject.policyDesc = valuePolicyListPolicy["PolicyDesc"].asString();
		if(!valuePolicyListPolicy["PolicyId"].isNull())
			policyListObject.policyId = valuePolicyListPolicy["PolicyId"].asString();
		if(!valuePolicyListPolicy["PolicyName"].isNull())
			policyListObject.policyName = valuePolicyListPolicy["PolicyName"].asString();
		if(!valuePolicyListPolicy["UserType"].isNull())
			policyListObject.userType = valuePolicyListPolicy["UserType"].asString();
		policyList_.push_back(policyListObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListPoliciesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListPoliciesResult::Policy> ListPoliciesResult::getPolicyList()const
{
	return policyList_;
}

