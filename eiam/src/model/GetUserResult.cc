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

#include <alibabacloud/eiam/model/GetUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetUserResult::GetUserResult() :
	ServiceResult()
{}

GetUserResult::GetUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserResult::~GetUserResult()
{}

void GetUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userNode = value["User"];
	if(!userNode["UserId"].isNull())
		user_.userId = userNode["UserId"].asString();
	if(!userNode["Username"].isNull())
		user_.username = userNode["Username"].asString();
	if(!userNode["DisplayName"].isNull())
		user_.displayName = userNode["DisplayName"].asString();
	if(!userNode["PasswordSet"].isNull())
		user_.passwordSet = userNode["PasswordSet"].asString() == "true";
	if(!userNode["PhoneRegion"].isNull())
		user_.phoneRegion = userNode["PhoneRegion"].asString();
	if(!userNode["PhoneNumber"].isNull())
		user_.phoneNumber = userNode["PhoneNumber"].asString();
	if(!userNode["PhoneNumberVerified"].isNull())
		user_.phoneNumberVerified = userNode["PhoneNumberVerified"].asString() == "true";
	if(!userNode["Email"].isNull())
		user_.email = userNode["Email"].asString();
	if(!userNode["EmailVerified"].isNull())
		user_.emailVerified = userNode["EmailVerified"].asString() == "true";
	if(!userNode["UserExternalId"].isNull())
		user_.userExternalId = userNode["UserExternalId"].asString();
	if(!userNode["UserSourceType"].isNull())
		user_.userSourceType = userNode["UserSourceType"].asString();
	if(!userNode["UserSourceId"].isNull())
		user_.userSourceId = userNode["UserSourceId"].asString();
	if(!userNode["Status"].isNull())
		user_.status = userNode["Status"].asString();
	if(!userNode["AccountExpireTime"].isNull())
		user_.accountExpireTime = std::stol(userNode["AccountExpireTime"].asString());
	if(!userNode["PasswordExpireTime"].isNull())
		user_.passwordExpireTime = std::stol(userNode["PasswordExpireTime"].asString());
	if(!userNode["RegisterTime"].isNull())
		user_.registerTime = std::stol(userNode["RegisterTime"].asString());
	if(!userNode["LockExpireTime"].isNull())
		user_.lockExpireTime = std::stol(userNode["LockExpireTime"].asString());
	if(!userNode["CreateTime"].isNull())
		user_.createTime = std::stol(userNode["CreateTime"].asString());
	if(!userNode["UpdateTime"].isNull())
		user_.updateTime = std::stol(userNode["UpdateTime"].asString());
	if(!userNode["Description"].isNull())
		user_.description = userNode["Description"].asString();
	if(!userNode["PrimaryOrganizationalUnitId"].isNull())
		user_.primaryOrganizationalUnitId = userNode["PrimaryOrganizationalUnitId"].asString();
	if(!userNode["InstanceId"].isNull())
		user_.instanceId = userNode["InstanceId"].asString();
	if(!userNode["Locked"].isNull())
		user_.locked = userNode["Locked"].asString() == "true";
	if(!userNode["ExtensionAttributes"].isNull())
		user_.extensionAttributes = userNode["ExtensionAttributes"].asString();
	if(!userNode["PreferredLanguage"].isNull())
		user_.preferredLanguage = userNode["PreferredLanguage"].asString();
	auto allOrganizationalUnitsNode = userNode["OrganizationalUnits"]["OrganizationalUnit"];
	for (auto userNodeOrganizationalUnitsOrganizationalUnit : allOrganizationalUnitsNode)
	{
		User::OrganizationalUnit organizationalUnitObject;
		if(!userNodeOrganizationalUnitsOrganizationalUnit["OrganizationalUnitId"].isNull())
			organizationalUnitObject.organizationalUnitId = userNodeOrganizationalUnitsOrganizationalUnit["OrganizationalUnitId"].asString();
		if(!userNodeOrganizationalUnitsOrganizationalUnit["OrganizationalUnitName"].isNull())
			organizationalUnitObject.organizationalUnitName = userNodeOrganizationalUnitsOrganizationalUnit["OrganizationalUnitName"].asString();
		if(!userNodeOrganizationalUnitsOrganizationalUnit["Primary"].isNull())
			organizationalUnitObject.primary = userNodeOrganizationalUnitsOrganizationalUnit["Primary"].asString() == "true";
		user_.organizationalUnits.push_back(organizationalUnitObject);
	}
	auto allCustomFieldsNode = userNode["CustomFields"]["CustomField"];
	for (auto userNodeCustomFieldsCustomField : allCustomFieldsNode)
	{
		User::CustomField customFieldObject;
		if(!userNodeCustomFieldsCustomField["FieldName"].isNull())
			customFieldObject.fieldName = userNodeCustomFieldsCustomField["FieldName"].asString();
		if(!userNodeCustomFieldsCustomField["FieldValue"].isNull())
			customFieldObject.fieldValue = userNodeCustomFieldsCustomField["FieldValue"].asString();
		user_.customFields.push_back(customFieldObject);
	}
	auto allGroupsNode = userNode["Groups"]["Group"];
	for (auto userNodeGroupsGroup : allGroupsNode)
	{
		User::Group groupObject;
		if(!userNodeGroupsGroup["GroupId"].isNull())
			groupObject.groupId = userNodeGroupsGroup["GroupId"].asString();
		if(!userNodeGroupsGroup["GroupName"].isNull())
			groupObject.groupName = userNodeGroupsGroup["GroupName"].asString();
		if(!userNodeGroupsGroup["Description"].isNull())
			groupObject.description = userNodeGroupsGroup["Description"].asString();
		user_.groups.push_back(groupObject);
	}

}

GetUserResult::User GetUserResult::getUser()const
{
	return user_;
}

