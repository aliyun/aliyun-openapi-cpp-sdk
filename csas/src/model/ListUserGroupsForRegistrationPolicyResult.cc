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

#include <alibabacloud/csas/model/ListUserGroupsForRegistrationPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListUserGroupsForRegistrationPolicyResult::ListUserGroupsForRegistrationPolicyResult() :
	ServiceResult()
{}

ListUserGroupsForRegistrationPolicyResult::ListUserGroupsForRegistrationPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserGroupsForRegistrationPolicyResult::~ListUserGroupsForRegistrationPolicyResult()
{}

void ListUserGroupsForRegistrationPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoliciesNode = value["Policies"]["data"];
	for (auto valuePoliciesdata : allPoliciesNode)
	{
		Data policiesObject;
		if(!valuePoliciesdata["PolicyId"].isNull())
			policiesObject.policyId = valuePoliciesdata["PolicyId"].asString();
		auto allUserGroupsNode = valuePoliciesdata["UserGroups"]["userGroupsItem"];
		for (auto valuePoliciesdataUserGroupsuserGroupsItem : allUserGroupsNode)
		{
			Data::UserGroupsItem userGroupsObject;
			if(!valuePoliciesdataUserGroupsuserGroupsItem["UserGroupId"].isNull())
				userGroupsObject.userGroupId = valuePoliciesdataUserGroupsuserGroupsItem["UserGroupId"].asString();
			if(!valuePoliciesdataUserGroupsuserGroupsItem["Name"].isNull())
				userGroupsObject.name = valuePoliciesdataUserGroupsuserGroupsItem["Name"].asString();
			if(!valuePoliciesdataUserGroupsuserGroupsItem["Description"].isNull())
				userGroupsObject.description = valuePoliciesdataUserGroupsuserGroupsItem["Description"].asString();
			if(!valuePoliciesdataUserGroupsuserGroupsItem["CreateTime"].isNull())
				userGroupsObject.createTime = valuePoliciesdataUserGroupsuserGroupsItem["CreateTime"].asString();
			auto allAttributesNode = valuePoliciesdataUserGroupsuserGroupsItem["Attributes"]["attributesItem"];
			for (auto valuePoliciesdataUserGroupsuserGroupsItemAttributesattributesItem : allAttributesNode)
			{
				Data::UserGroupsItem::AttributesItem attributesObject;
				if(!valuePoliciesdataUserGroupsuserGroupsItemAttributesattributesItem["UserGroupType"].isNull())
					attributesObject.userGroupType = valuePoliciesdataUserGroupsuserGroupsItemAttributesattributesItem["UserGroupType"].asString();
				if(!valuePoliciesdataUserGroupsuserGroupsItemAttributesattributesItem["Relation"].isNull())
					attributesObject.relation = valuePoliciesdataUserGroupsuserGroupsItemAttributesattributesItem["Relation"].asString();
				if(!valuePoliciesdataUserGroupsuserGroupsItemAttributesattributesItem["Value"].isNull())
					attributesObject.value = valuePoliciesdataUserGroupsuserGroupsItemAttributesattributesItem["Value"].asString();
				if(!valuePoliciesdataUserGroupsuserGroupsItemAttributesattributesItem["IdpId"].isNull())
					attributesObject.idpId = std::stoi(valuePoliciesdataUserGroupsuserGroupsItemAttributesattributesItem["IdpId"].asString());
				userGroupsObject.attributes.push_back(attributesObject);
			}
			policiesObject.userGroups.push_back(userGroupsObject);
		}
		policies_.push_back(policiesObject);
	}

}

std::vector<ListUserGroupsForRegistrationPolicyResult::Data> ListUserGroupsForRegistrationPolicyResult::getPolicies()const
{
	return policies_;
}

