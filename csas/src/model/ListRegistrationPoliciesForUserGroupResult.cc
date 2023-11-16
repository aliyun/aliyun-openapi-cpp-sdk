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

#include <alibabacloud/csas/model/ListRegistrationPoliciesForUserGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListRegistrationPoliciesForUserGroupResult::ListRegistrationPoliciesForUserGroupResult() :
	ServiceResult()
{}

ListRegistrationPoliciesForUserGroupResult::ListRegistrationPoliciesForUserGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRegistrationPoliciesForUserGroupResult::~ListRegistrationPoliciesForUserGroupResult()
{}

void ListRegistrationPoliciesForUserGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserGroupsNode = value["UserGroups"]["data"];
	for (auto valueUserGroupsdata : allUserGroupsNode)
	{
		Data userGroupsObject;
		if(!valueUserGroupsdata["UserGroupId"].isNull())
			userGroupsObject.userGroupId = valueUserGroupsdata["UserGroupId"].asString();
		auto allPoliciesNode = valueUserGroupsdata["Policies"]["policiesItem"];
		for (auto valueUserGroupsdataPoliciespoliciesItem : allPoliciesNode)
		{
			Data::PoliciesItem policiesObject;
			if(!valueUserGroupsdataPoliciespoliciesItem["Name"].isNull())
				policiesObject.name = valueUserGroupsdataPoliciespoliciesItem["Name"].asString();
			if(!valueUserGroupsdataPoliciespoliciesItem["PolicyId"].isNull())
				policiesObject.policyId = valueUserGroupsdataPoliciespoliciesItem["PolicyId"].asString();
			if(!valueUserGroupsdataPoliciespoliciesItem["Description"].isNull())
				policiesObject.description = valueUserGroupsdataPoliciespoliciesItem["Description"].asString();
			if(!valueUserGroupsdataPoliciespoliciesItem["Priority"].isNull())
				policiesObject.priority = std::stol(valueUserGroupsdataPoliciespoliciesItem["Priority"].asString());
			if(!valueUserGroupsdataPoliciespoliciesItem["Status"].isNull())
				policiesObject.status = valueUserGroupsdataPoliciespoliciesItem["Status"].asString();
			if(!valueUserGroupsdataPoliciespoliciesItem["MatchMode"].isNull())
				policiesObject.matchMode = valueUserGroupsdataPoliciespoliciesItem["MatchMode"].asString();
			if(!valueUserGroupsdataPoliciespoliciesItem["CreateTime"].isNull())
				policiesObject.createTime = valueUserGroupsdataPoliciespoliciesItem["CreateTime"].asString();
			auto allLimitDetailNode = valueUserGroupsdataPoliciespoliciesItem["LimitDetail"]["limitDetailItem"];
			for (auto valueUserGroupsdataPoliciespoliciesItemLimitDetaillimitDetailItem : allLimitDetailNode)
			{
				Data::PoliciesItem::LimitDetailItem limitDetailObject;
				if(!valueUserGroupsdataPoliciespoliciesItemLimitDetaillimitDetailItem["DeviceBelong"].isNull())
					limitDetailObject.deviceBelong = valueUserGroupsdataPoliciespoliciesItemLimitDetaillimitDetailItem["DeviceBelong"].asString();
				if(!valueUserGroupsdataPoliciespoliciesItemLimitDetaillimitDetailItem["LimitType"].isNull())
					limitDetailObject.limitType = valueUserGroupsdataPoliciespoliciesItemLimitDetaillimitDetailItem["LimitType"].asString();
				auto limitCountNode = value["LimitCount"];
				if(!limitCountNode["All"].isNull())
					limitDetailObject.limitCount.all = limitCountNode["All"].asString();
				if(!limitCountNode["PC"].isNull())
					limitDetailObject.limitCount.pC = limitCountNode["PC"].asString();
				if(!limitCountNode["Mobile"].isNull())
					limitDetailObject.limitCount.mobile = limitCountNode["Mobile"].asString();
				policiesObject.limitDetail.push_back(limitDetailObject);
			}
			auto allWhitelist = value["Whitelist"]["whitelist"];
			for (auto value : allWhitelist)
				policiesObject.whitelist.push_back(value.asString());
			userGroupsObject.policies.push_back(policiesObject);
		}
		userGroups_.push_back(userGroupsObject);
	}

}

std::vector<ListRegistrationPoliciesForUserGroupResult::Data> ListRegistrationPoliciesForUserGroupResult::getUserGroups()const
{
	return userGroups_;
}

