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

#include <alibabacloud/csas/model/ListUserGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListUserGroupsResult::ListUserGroupsResult() :
	ServiceResult()
{}

ListUserGroupsResult::ListUserGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserGroupsResult::~ListUserGroupsResult()
{}

void ListUserGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserGroupsNode = value["UserGroups"]["userGroup"];
	for (auto valueUserGroupsuserGroup : allUserGroupsNode)
	{
		UserGroup userGroupsObject;
		if(!valueUserGroupsuserGroup["UserGroupId"].isNull())
			userGroupsObject.userGroupId = valueUserGroupsuserGroup["UserGroupId"].asString();
		if(!valueUserGroupsuserGroup["Name"].isNull())
			userGroupsObject.name = valueUserGroupsuserGroup["Name"].asString();
		if(!valueUserGroupsuserGroup["Description"].isNull())
			userGroupsObject.description = valueUserGroupsuserGroup["Description"].asString();
		if(!valueUserGroupsuserGroup["CreateTime"].isNull())
			userGroupsObject.createTime = valueUserGroupsuserGroup["CreateTime"].asString();
		auto allAttributesNode = valueUserGroupsuserGroup["Attributes"]["attribute"];
		for (auto valueUserGroupsuserGroupAttributesattribute : allAttributesNode)
		{
			UserGroup::Attribute attributesObject;
			if(!valueUserGroupsuserGroupAttributesattribute["UserGroupType"].isNull())
				attributesObject.userGroupType = valueUserGroupsuserGroupAttributesattribute["UserGroupType"].asString();
			if(!valueUserGroupsuserGroupAttributesattribute["Relation"].isNull())
				attributesObject.relation = valueUserGroupsuserGroupAttributesattribute["Relation"].asString();
			if(!valueUserGroupsuserGroupAttributesattribute["Value"].isNull())
				attributesObject.value = valueUserGroupsuserGroupAttributesattribute["Value"].asString();
			if(!valueUserGroupsuserGroupAttributesattribute["IdpId"].isNull())
				attributesObject.idpId = std::stoi(valueUserGroupsuserGroupAttributesattribute["IdpId"].asString());
			userGroupsObject.attributes.push_back(attributesObject);
		}
		userGroups_.push_back(userGroupsObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());

}

int ListUserGroupsResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListUserGroupsResult::UserGroup> ListUserGroupsResult::getUserGroups()const
{
	return userGroups_;
}

