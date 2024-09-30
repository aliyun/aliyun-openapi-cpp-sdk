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

#include <alibabacloud/tag/model/GetPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tag;
using namespace AlibabaCloud::Tag::Model;

GetPolicyResult::GetPolicyResult() :
	ServiceResult()
{}

GetPolicyResult::GetPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPolicyResult::~GetPolicyResult()
{}

void GetPolicyResult::parse(const std::string &payload)
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
	if(!policyNode["UserType"].isNull())
		policy_.userType = policyNode["UserType"].asString();

}

GetPolicyResult::Policy GetPolicyResult::getPolicy()const
{
	return policy_;
}

