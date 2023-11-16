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

#include <alibabacloud/csas/model/UpdateRegistrationPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

UpdateRegistrationPolicyResult::UpdateRegistrationPolicyResult() :
	ServiceResult()
{}

UpdateRegistrationPolicyResult::UpdateRegistrationPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateRegistrationPolicyResult::~UpdateRegistrationPolicyResult()
{}

void UpdateRegistrationPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto policyNode = value["Policy"];
	if(!policyNode["Name"].isNull())
		policy_.name = policyNode["Name"].asString();
	if(!policyNode["PolicyId"].isNull())
		policy_.policyId = policyNode["PolicyId"].asString();
	if(!policyNode["Priority"].isNull())
		policy_.priority = policyNode["Priority"].asString();
	if(!policyNode["Description"].isNull())
		policy_.description = policyNode["Description"].asString();
	if(!policyNode["Status"].isNull())
		policy_.status = policyNode["Status"].asString();
	if(!policyNode["MatchMode"].isNull())
		policy_.matchMode = policyNode["MatchMode"].asString();
	if(!policyNode["CreateTime"].isNull())
		policy_.createTime = policyNode["CreateTime"].asString();
	auto allLimitDetailNode = policyNode["LimitDetail"]["limitDetailItem"];
	for (auto policyNodeLimitDetaillimitDetailItem : allLimitDetailNode)
	{
		Policy::LimitDetailItem limitDetailItemObject;
		if(!policyNodeLimitDetaillimitDetailItem["DeviceBelong"].isNull())
			limitDetailItemObject.deviceBelong = policyNodeLimitDetaillimitDetailItem["DeviceBelong"].asString();
		if(!policyNodeLimitDetaillimitDetailItem["LimitType"].isNull())
			limitDetailItemObject.limitType = policyNodeLimitDetaillimitDetailItem["LimitType"].asString();
		auto limitCountNode = value["LimitCount"];
		if(!limitCountNode["All"].isNull())
			limitDetailItemObject.limitCount.all = std::stoi(limitCountNode["All"].asString());
		if(!limitCountNode["PC"].isNull())
			limitDetailItemObject.limitCount.pC = std::stoi(limitCountNode["PC"].asString());
		if(!limitCountNode["Mobile"].isNull())
			limitDetailItemObject.limitCount.mobile = std::stoi(limitCountNode["Mobile"].asString());
		policy_.limitDetail.push_back(limitDetailItemObject);
	}
		auto allWhitelist = policyNode["Whitelist"]["whitelist"];
		for (auto value : allWhitelist)
			policy_.whitelist.push_back(value.asString());
		auto allUserGroupIds = policyNode["UserGroupIds"]["userGroupIds"];
		for (auto value : allUserGroupIds)
			policy_.userGroupIds.push_back(value.asString());

}

UpdateRegistrationPolicyResult::Policy UpdateRegistrationPolicyResult::getPolicy()const
{
	return policy_;
}

