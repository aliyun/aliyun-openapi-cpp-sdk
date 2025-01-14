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

#include <alibabacloud/csas/model/ListUserPrivateAccessPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListUserPrivateAccessPoliciesResult::ListUserPrivateAccessPoliciesResult() :
	ServiceResult()
{}

ListUserPrivateAccessPoliciesResult::ListUserPrivateAccessPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserPrivateAccessPoliciesResult::~ListUserPrivateAccessPoliciesResult()
{}

void ListUserPrivateAccessPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPolicesNode = value["Polices"]["policies"];
	for (auto valuePolicespolicies : allPolicesNode)
	{
		Policies policesObject;
		if(!valuePolicespolicies["PolicyId"].isNull())
			policesObject.policyId = valuePolicespolicies["PolicyId"].asString();
		if(!valuePolicespolicies["Name"].isNull())
			policesObject.name = valuePolicespolicies["Name"].asString();
		if(!valuePolicespolicies["Priority"].isNull())
			policesObject.priority = std::stol(valuePolicespolicies["Priority"].asString());
		if(!valuePolicespolicies["PolicyAction"].isNull())
			policesObject.policyAction = valuePolicespolicies["PolicyAction"].asString();
		if(!valuePolicespolicies["UserGroupMode"].isNull())
			policesObject.userGroupMode = valuePolicespolicies["UserGroupMode"].asString();
		if(!valuePolicespolicies["MatchedUserGroup"].isNull())
			policesObject.matchedUserGroup = valuePolicespolicies["MatchedUserGroup"].asString();
		if(!valuePolicespolicies["DeviceAttributeName"].isNull())
			policesObject.deviceAttributeName = valuePolicespolicies["DeviceAttributeName"].asString();
		auto allCustomUserAttributesNode = valuePolicespolicies["CustomUserAttributes"]["customUserAttributesItem"];
		for (auto valuePolicespoliciesCustomUserAttributescustomUserAttributesItem : allCustomUserAttributesNode)
		{
			Policies::CustomUserAttributesItem customUserAttributesObject;
			if(!valuePolicespoliciesCustomUserAttributescustomUserAttributesItem["UserGroupType"].isNull())
				customUserAttributesObject.userGroupType = valuePolicespoliciesCustomUserAttributescustomUserAttributesItem["UserGroupType"].asString();
			if(!valuePolicespoliciesCustomUserAttributescustomUserAttributesItem["Relation"].isNull())
				customUserAttributesObject.relation = valuePolicespoliciesCustomUserAttributescustomUserAttributesItem["Relation"].asString();
			if(!valuePolicespoliciesCustomUserAttributescustomUserAttributesItem["Value"].isNull())
				customUserAttributesObject.value = valuePolicespoliciesCustomUserAttributescustomUserAttributesItem["Value"].asString();
			if(!valuePolicespoliciesCustomUserAttributescustomUserAttributesItem["IdpId"].isNull())
				customUserAttributesObject.idpId = std::stoi(valuePolicespoliciesCustomUserAttributescustomUserAttributesItem["IdpId"].asString());
			policesObject.customUserAttributes.push_back(customUserAttributesObject);
		}
		polices_.push_back(policesObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());

}

int ListUserPrivateAccessPoliciesResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListUserPrivateAccessPoliciesResult::Policies> ListUserPrivateAccessPoliciesResult::getPolices()const
{
	return polices_;
}

