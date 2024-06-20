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

#include <alibabacloud/csas/model/GetPrivateAccessPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

GetPrivateAccessPolicyResult::GetPrivateAccessPolicyResult() :
	ServiceResult()
{}

GetPrivateAccessPolicyResult::GetPrivateAccessPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPrivateAccessPolicyResult::~GetPrivateAccessPolicyResult()
{}

void GetPrivateAccessPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto policyNode = value["Policy"];
	if(!policyNode["PolicyId"].isNull())
		policy_.policyId = policyNode["PolicyId"].asString();
	if(!policyNode["Name"].isNull())
		policy_.name = policyNode["Name"].asString();
	if(!policyNode["Description"].isNull())
		policy_.description = policyNode["Description"].asString();
	if(!policyNode["PolicyAction"].isNull())
		policy_.policyAction = policyNode["PolicyAction"].asString();
	if(!policyNode["Priority"].isNull())
		policy_.priority = std::stoi(policyNode["Priority"].asString());
	if(!policyNode["Status"].isNull())
		policy_.status = policyNode["Status"].asString();
	if(!policyNode["CreateTime"].isNull())
		policy_.createTime = policyNode["CreateTime"].asString();
	if(!policyNode["UserGroupMode"].isNull())
		policy_.userGroupMode = policyNode["UserGroupMode"].asString();
	if(!policyNode["ApplicationType"].isNull())
		policy_.applicationType = policyNode["ApplicationType"].asString();
	if(!policyNode["DeviceAttributeId"].isNull())
		policy_.deviceAttributeId = policyNode["DeviceAttributeId"].asString();
	if(!policyNode["DeviceAttributeAction"].isNull())
		policy_.deviceAttributeAction = policyNode["DeviceAttributeAction"].asString();
	auto allCustomUserAttributesNode = policyNode["CustomUserAttributes"]["customUserAttribute"];
	for (auto policyNodeCustomUserAttributescustomUserAttribute : allCustomUserAttributesNode)
	{
		Policy::CustomUserAttribute customUserAttributeObject;
		if(!policyNodeCustomUserAttributescustomUserAttribute["UserGroupType"].isNull())
			customUserAttributeObject.userGroupType = policyNodeCustomUserAttributescustomUserAttribute["UserGroupType"].asString();
		if(!policyNodeCustomUserAttributescustomUserAttribute["Relation"].isNull())
			customUserAttributeObject.relation = policyNodeCustomUserAttributescustomUserAttribute["Relation"].asString();
		if(!policyNodeCustomUserAttributescustomUserAttribute["Value"].isNull())
			customUserAttributeObject.value = policyNodeCustomUserAttributescustomUserAttribute["Value"].asString();
		if(!policyNodeCustomUserAttributescustomUserAttribute["IdpId"].isNull())
			customUserAttributeObject.idpId = std::stoi(policyNodeCustomUserAttributescustomUserAttribute["IdpId"].asString());
		policy_.customUserAttributes.push_back(customUserAttributeObject);
	}
		auto allUserGroupIds = policyNode["UserGroupIds"]["userGroupId"];
		for (auto value : allUserGroupIds)
			policy_.userGroupIds.push_back(value.asString());
		auto allApplicationIds = policyNode["ApplicationIds"]["applicationId"];
		for (auto value : allApplicationIds)
			policy_.applicationIds.push_back(value.asString());
		auto allTagIds = policyNode["TagIds"]["tagId"];
		for (auto value : allTagIds)
			policy_.tagIds.push_back(value.asString());

}

GetPrivateAccessPolicyResult::Policy GetPrivateAccessPolicyResult::getPolicy()const
{
	return policy_;
}

