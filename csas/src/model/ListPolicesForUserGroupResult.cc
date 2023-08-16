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

#include <alibabacloud/csas/model/ListPolicesForUserGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListPolicesForUserGroupResult::ListPolicesForUserGroupResult() :
	ServiceResult()
{}

ListPolicesForUserGroupResult::ListPolicesForUserGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPolicesForUserGroupResult::~ListPolicesForUserGroupResult()
{}

void ListPolicesForUserGroupResult::parse(const std::string &payload)
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
		auto allPolicesNode = valueUserGroupsuserGroup["Polices"]["policy"];
		for (auto valueUserGroupsuserGroupPolicespolicy : allPolicesNode)
		{
			UserGroup::Policy policesObject;
			if(!valueUserGroupsuserGroupPolicespolicy["PolicyId"].isNull())
				policesObject.policyId = valueUserGroupsuserGroupPolicespolicy["PolicyId"].asString();
			if(!valueUserGroupsuserGroupPolicespolicy["PolicyType"].isNull())
				policesObject.policyType = valueUserGroupsuserGroupPolicespolicy["PolicyType"].asString();
			if(!valueUserGroupsuserGroupPolicespolicy["Name"].isNull())
				policesObject.name = valueUserGroupsuserGroupPolicespolicy["Name"].asString();
			userGroupsObject.polices.push_back(policesObject);
		}
		userGroups_.push_back(userGroupsObject);
	}

}

std::vector<ListPolicesForUserGroupResult::UserGroup> ListPolicesForUserGroupResult::getUserGroups()const
{
	return userGroups_;
}

