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

#include <alibabacloud/dms-enterprise/model/ListAbacPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListAbacPoliciesResult::ListAbacPoliciesResult() :
	ServiceResult()
{}

ListAbacPoliciesResult::ListAbacPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAbacPoliciesResult::~ListAbacPoliciesResult()
{}

void ListAbacPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPolicyListNode = value["PolicyList"]["policyListItem"];
	for (auto valuePolicyListpolicyListItem : allPolicyListNode)
	{
		PolicyListItem policyListObject;
		if(!valuePolicyListpolicyListItem["AbacPolicyId"].isNull())
			policyListObject.abacPolicyId = std::stol(valuePolicyListpolicyListItem["AbacPolicyId"].asString());
		if(!valuePolicyListpolicyListItem["AbacPolicyName"].isNull())
			policyListObject.abacPolicyName = valuePolicyListpolicyListItem["AbacPolicyName"].asString();
		if(!valuePolicyListpolicyListItem["AbacPolicyDesc"].isNull())
			policyListObject.abacPolicyDesc = valuePolicyListpolicyListItem["AbacPolicyDesc"].asString();
		if(!valuePolicyListpolicyListItem["AbacPolicyContent"].isNull())
			policyListObject.abacPolicyContent = valuePolicyListpolicyListItem["AbacPolicyContent"].asString();
		if(!valuePolicyListpolicyListItem["CreatorId"].isNull())
			policyListObject.creatorId = std::stol(valuePolicyListpolicyListItem["CreatorId"].asString());
		if(!valuePolicyListpolicyListItem["AbacPolicySource"].isNull())
			policyListObject.abacPolicySource = valuePolicyListpolicyListItem["AbacPolicySource"].asString();
		policyList_.push_back(policyListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Tid"].isNull())
		tid_ = std::stol(value["Tid"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListAbacPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListAbacPoliciesResult::PolicyListItem> ListAbacPoliciesResult::getPolicyList()const
{
	return policyList_;
}

std::string ListAbacPoliciesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListAbacPoliciesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListAbacPoliciesResult::getSuccess()const
{
	return success_;
}

long ListAbacPoliciesResult::getTid()const
{
	return tid_;
}

