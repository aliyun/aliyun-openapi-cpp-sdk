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

#include <alibabacloud/csas/model/ListUserGroupsForPrivateAccessPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListUserGroupsForPrivateAccessPolicyResult::ListUserGroupsForPrivateAccessPolicyResult() :
	ServiceResult()
{}

ListUserGroupsForPrivateAccessPolicyResult::ListUserGroupsForPrivateAccessPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserGroupsForPrivateAccessPolicyResult::~ListUserGroupsForPrivateAccessPolicyResult()
{}

void ListUserGroupsForPrivateAccessPolicyResult::parse(const std::string &payload)
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
		auto allUserGroupsNode = valuePolicespolicy["UserGroups"]["userGroup"];
		for (auto valuePolicespolicyUserGroupsuserGroup : allUserGroupsNode)
		{
			Policy::UserGroup userGroupsObject;
			if(!valuePolicespolicyUserGroupsuserGroup["UserGroupId"].isNull())
				userGroupsObject.userGroupId = valuePolicespolicyUserGroupsuserGroup["UserGroupId"].asString();
			if(!valuePolicespolicyUserGroupsuserGroup["Name"].isNull())
				userGroupsObject.name = valuePolicespolicyUserGroupsuserGroup["Name"].asString();
			if(!valuePolicespolicyUserGroupsuserGroup["Description"].isNull())
				userGroupsObject.description = valuePolicespolicyUserGroupsuserGroup["Description"].asString();
			if(!valuePolicespolicyUserGroupsuserGroup["CreateTime"].isNull())
				userGroupsObject.createTime = valuePolicespolicyUserGroupsuserGroup["CreateTime"].asString();
			auto allAttributesNode = valuePolicespolicyUserGroupsuserGroup["Attributes"]["attribute"];
			for (auto valuePolicespolicyUserGroupsuserGroupAttributesattribute : allAttributesNode)
			{
				Policy::UserGroup::Attribute attributesObject;
				if(!valuePolicespolicyUserGroupsuserGroupAttributesattribute["UserGroupType"].isNull())
					attributesObject.userGroupType = valuePolicespolicyUserGroupsuserGroupAttributesattribute["UserGroupType"].asString();
				if(!valuePolicespolicyUserGroupsuserGroupAttributesattribute["Relation"].isNull())
					attributesObject.relation = valuePolicespolicyUserGroupsuserGroupAttributesattribute["Relation"].asString();
				if(!valuePolicespolicyUserGroupsuserGroupAttributesattribute["Value"].isNull())
					attributesObject.value = valuePolicespolicyUserGroupsuserGroupAttributesattribute["Value"].asString();
				if(!valuePolicespolicyUserGroupsuserGroupAttributesattribute["IdpId"].isNull())
					attributesObject.idpId = std::stoi(valuePolicespolicyUserGroupsuserGroupAttributesattribute["IdpId"].asString());
				userGroupsObject.attributes.push_back(attributesObject);
			}
			policesObject.userGroups.push_back(userGroupsObject);
		}
		polices_.push_back(policesObject);
	}

}

std::vector<ListUserGroupsForPrivateAccessPolicyResult::Policy> ListUserGroupsForPrivateAccessPolicyResult::getPolices()const
{
	return polices_;
}

