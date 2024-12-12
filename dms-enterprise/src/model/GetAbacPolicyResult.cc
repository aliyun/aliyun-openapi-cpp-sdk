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

#include <alibabacloud/dms-enterprise/model/GetAbacPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetAbacPolicyResult::GetAbacPolicyResult() :
	ServiceResult()
{}

GetAbacPolicyResult::GetAbacPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAbacPolicyResult::~GetAbacPolicyResult()
{}

void GetAbacPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto policyNode = value["Policy"];
	if(!policyNode["PolicyName"].isNull())
		policy_.policyName = policyNode["PolicyName"].asString();
	if(!policyNode["PolicyDesc"].isNull())
		policy_.policyDesc = policyNode["PolicyDesc"].asString();
	if(!policyNode["PolicyContent"].isNull())
		policy_.policyContent = policyNode["PolicyContent"].asString();
	if(!policyNode["CreatorId"].isNull())
		policy_.creatorId = std::stol(policyNode["CreatorId"].asString());
	if(!policyNode["PolicySource"].isNull())
		policy_.policySource = policyNode["PolicySource"].asString();
	if(!policyNode["AuthorizedQuantity"].isNull())
		policy_.authorizedQuantity = policyNode["AuthorizedQuantity"].asString();
	if(!policyNode["PolicyId"].isNull())
		policy_.policyId = std::stol(policyNode["PolicyId"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetAbacPolicyResult::Policy GetAbacPolicyResult::getPolicy()const
{
	return policy_;
}

std::string GetAbacPolicyResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetAbacPolicyResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetAbacPolicyResult::getSuccess()const
{
	return success_;
}

