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

#include <alibabacloud/csas/model/ListPrivateAccessPolicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListPrivateAccessPolicesResult::ListPrivateAccessPolicesResult() :
	ServiceResult()
{}

ListPrivateAccessPolicesResult::ListPrivateAccessPolicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrivateAccessPolicesResult::~ListPrivateAccessPolicesResult()
{}

void ListPrivateAccessPolicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPolicesNode = value["Polices"]["policy"];
	for (auto valuePolicespolicy : allPolicesNode)
	{
		Policy policesObject;
		if(!valuePolicespolicy["PolicyId"].isNull())
			policesObject.policyId = valuePolicespolicy["PolicyId"].asString();
		if(!valuePolicespolicy["Name"].isNull())
			policesObject.name = valuePolicespolicy["Name"].asString();
		if(!valuePolicespolicy["Description"].isNull())
			policesObject.description = valuePolicespolicy["Description"].asString();
		if(!valuePolicespolicy["PolicyAction"].isNull())
			policesObject.policyAction = valuePolicespolicy["PolicyAction"].asString();
		if(!valuePolicespolicy["Priority"].isNull())
			policesObject.priority = std::stoi(valuePolicespolicy["Priority"].asString());
		if(!valuePolicespolicy["Status"].isNull())
			policesObject.status = valuePolicespolicy["Status"].asString();
		if(!valuePolicespolicy["CreateTime"].isNull())
			policesObject.createTime = valuePolicespolicy["CreateTime"].asString();
		if(!valuePolicespolicy["UserGroupMode"].isNull())
			policesObject.userGroupMode = valuePolicespolicy["UserGroupMode"].asString();
		if(!valuePolicespolicy["ApplicationType"].isNull())
			policesObject.applicationType = valuePolicespolicy["ApplicationType"].asString();
		if(!valuePolicespolicy["DeviceAttributeId"].isNull())
			policesObject.deviceAttributeId = valuePolicespolicy["DeviceAttributeId"].asString();
		if(!valuePolicespolicy["DeviceAttributeAction"].isNull())
			policesObject.deviceAttributeAction = valuePolicespolicy["DeviceAttributeAction"].asString();
		auto allCustomUserAttributesNode = valuePolicespolicy["CustomUserAttributes"]["customUserAttribute"];
		for (auto valuePolicespolicyCustomUserAttributescustomUserAttribute : allCustomUserAttributesNode)
		{
			Policy::CustomUserAttribute customUserAttributesObject;
			if(!valuePolicespolicyCustomUserAttributescustomUserAttribute["UserGroupType"].isNull())
				customUserAttributesObject.userGroupType = valuePolicespolicyCustomUserAttributescustomUserAttribute["UserGroupType"].asString();
			if(!valuePolicespolicyCustomUserAttributescustomUserAttribute["Relation"].isNull())
				customUserAttributesObject.relation = valuePolicespolicyCustomUserAttributescustomUserAttribute["Relation"].asString();
			if(!valuePolicespolicyCustomUserAttributescustomUserAttribute["Value"].isNull())
				customUserAttributesObject.value = valuePolicespolicyCustomUserAttributescustomUserAttribute["Value"].asString();
			if(!valuePolicespolicyCustomUserAttributescustomUserAttribute["IdpId"].isNull())
				customUserAttributesObject.idpId = std::stoi(valuePolicespolicyCustomUserAttributescustomUserAttribute["IdpId"].asString());
			policesObject.customUserAttributes.push_back(customUserAttributesObject);
		}
		auto allUserGroupIds = value["UserGroupIds"]["userGroupId"];
		for (auto value : allUserGroupIds)
			policesObject.userGroupIds.push_back(value.asString());
		auto allApplicationIds = value["ApplicationIds"]["applicationId"];
		for (auto value : allApplicationIds)
			policesObject.applicationIds.push_back(value.asString());
		auto allTagIds = value["TagIds"]["tagId"];
		for (auto value : allTagIds)
			policesObject.tagIds.push_back(value.asString());
		polices_.push_back(policesObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());

}

int ListPrivateAccessPolicesResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListPrivateAccessPolicesResult::Policy> ListPrivateAccessPolicesResult::getPolices()const
{
	return polices_;
}

