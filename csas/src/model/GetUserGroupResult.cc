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

#include <alibabacloud/csas/model/GetUserGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

GetUserGroupResult::GetUserGroupResult() :
	ServiceResult()
{}

GetUserGroupResult::GetUserGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserGroupResult::~GetUserGroupResult()
{}

void GetUserGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userGroupNode = value["UserGroup"];
	if(!userGroupNode["UserGroupId"].isNull())
		userGroup_.userGroupId = userGroupNode["UserGroupId"].asString();
	if(!userGroupNode["Name"].isNull())
		userGroup_.name = userGroupNode["Name"].asString();
	if(!userGroupNode["Description"].isNull())
		userGroup_.description = userGroupNode["Description"].asString();
	if(!userGroupNode["CreateTime"].isNull())
		userGroup_.createTime = userGroupNode["CreateTime"].asString();
	auto allAttributesNode = userGroupNode["Attributes"]["attribute"];
	for (auto userGroupNodeAttributesattribute : allAttributesNode)
	{
		UserGroup::Attribute attributeObject;
		if(!userGroupNodeAttributesattribute["UserGroupType"].isNull())
			attributeObject.userGroupType = userGroupNodeAttributesattribute["UserGroupType"].asString();
		if(!userGroupNodeAttributesattribute["Relation"].isNull())
			attributeObject.relation = userGroupNodeAttributesattribute["Relation"].asString();
		if(!userGroupNodeAttributesattribute["Value"].isNull())
			attributeObject.value = userGroupNodeAttributesattribute["Value"].asString();
		if(!userGroupNodeAttributesattribute["IdpId"].isNull())
			attributeObject.idpId = std::stoi(userGroupNodeAttributesattribute["IdpId"].asString());
		userGroup_.attributes.push_back(attributeObject);
	}

}

GetUserGroupResult::UserGroup GetUserGroupResult::getUserGroup()const
{
	return userGroup_;
}

