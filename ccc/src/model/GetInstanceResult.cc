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

#include <alibabacloud/ccc/model/GetInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetInstanceResult::GetInstanceResult() :
	ServiceResult()
{}

GetInstanceResult::GetInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceResult::~GetInstanceResult()
{}

void GetInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["ConsoleUrl"].isNull())
		data_.consoleUrl = dataNode["ConsoleUrl"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["AliyunUid"].isNull())
		data_.aliyunUid = dataNode["AliyunUid"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["DomainName"].isNull())
		data_.domainName = dataNode["DomainName"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = dataNode["Id"].asString();
	auto allAdminListNode = dataNode["AdminList"]["User"];
	for (auto dataNodeAdminListUser : allAdminListNode)
	{
		Data::User userObject;
		if(!dataNodeAdminListUser["DisplayName"].isNull())
			userObject.displayName = dataNodeAdminListUser["DisplayName"].asString();
		if(!dataNodeAdminListUser["Extension"].isNull())
			userObject.extension = dataNodeAdminListUser["Extension"].asString();
		if(!dataNodeAdminListUser["LoginName"].isNull())
			userObject.loginName = dataNodeAdminListUser["LoginName"].asString();
		if(!dataNodeAdminListUser["Email"].isNull())
			userObject.email = dataNodeAdminListUser["Email"].asString();
		if(!dataNodeAdminListUser["WorkMode"].isNull())
			userObject.workMode = dataNodeAdminListUser["WorkMode"].asString();
		if(!dataNodeAdminListUser["Mobile"].isNull())
			userObject.mobile = dataNodeAdminListUser["Mobile"].asString();
		if(!dataNodeAdminListUser["UserId"].isNull())
			userObject.userId = dataNodeAdminListUser["UserId"].asString();
		if(!dataNodeAdminListUser["RoleName"].isNull())
			userObject.roleName = dataNodeAdminListUser["RoleName"].asString();
		if(!dataNodeAdminListUser["InstanceId"].isNull())
			userObject.instanceId = dataNodeAdminListUser["InstanceId"].asString();
		if(!dataNodeAdminListUser["RoleId"].isNull())
			userObject.roleId = dataNodeAdminListUser["RoleId"].asString();
		data_.adminList.push_back(userObject);
	}
	auto allNumberListNode = dataNode["NumberList"]["PhoneNumber"];
	for (auto dataNodeNumberListPhoneNumber : allNumberListNode)
	{
		Data::PhoneNumber phoneNumberObject;
		if(!dataNodeNumberListPhoneNumber["Active"].isNull())
			phoneNumberObject.active = dataNodeNumberListPhoneNumber["Active"].asString() == "true";
		if(!dataNodeNumberListPhoneNumber["UserId"].isNull())
			phoneNumberObject.userId = dataNodeNumberListPhoneNumber["UserId"].asString();
		if(!dataNodeNumberListPhoneNumber["Number"].isNull())
			phoneNumberObject.number = dataNodeNumberListPhoneNumber["Number"].asString();
		if(!dataNodeNumberListPhoneNumber["City"].isNull())
			phoneNumberObject.city = dataNodeNumberListPhoneNumber["City"].asString();
		if(!dataNodeNumberListPhoneNumber["InstanceId"].isNull())
			phoneNumberObject.instanceId = dataNodeNumberListPhoneNumber["InstanceId"].asString();
		if(!dataNodeNumberListPhoneNumber["Usage"].isNull())
			phoneNumberObject.usage = dataNodeNumberListPhoneNumber["Usage"].asString();
		if(!dataNodeNumberListPhoneNumber["ContactFlowId"].isNull())
			phoneNumberObject.contactFlowId = dataNodeNumberListPhoneNumber["ContactFlowId"].asString();
		if(!dataNodeNumberListPhoneNumber["Province"].isNull())
			phoneNumberObject.province = dataNodeNumberListPhoneNumber["Province"].asString();
		auto allSkillGroupsNode = dataNodeNumberListPhoneNumber["SkillGroups"]["SkillGroup"];
		for (auto dataNodeNumberListPhoneNumberSkillGroupsSkillGroup : allSkillGroupsNode)
		{
			Data::PhoneNumber::SkillGroup skillGroupsObject;
			if(!dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["DisplayName"].isNull())
				skillGroupsObject.displayName = dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["DisplayName"].asString();
			if(!dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["Description"].isNull())
				skillGroupsObject.description = dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["Description"].asString();
			if(!dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["PhoneNumberCount"].isNull())
				skillGroupsObject.phoneNumberCount = std::stoi(dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["PhoneNumberCount"].asString());
			if(!dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["SkillGroupId"].isNull())
				skillGroupsObject.skillGroupId = dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["SkillGroupId"].asString();
			if(!dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["UserCount"].isNull())
				skillGroupsObject.userCount = std::stoi(dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["UserCount"].asString());
			if(!dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["InstanceId"].isNull())
				skillGroupsObject.instanceId = dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["InstanceId"].asString();
			if(!dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["Name"].isNull())
				skillGroupsObject.name = dataNodeNumberListPhoneNumberSkillGroupsSkillGroup["Name"].asString();
			phoneNumberObject.skillGroups.push_back(skillGroupsObject);
		}
		data_.numberList.push_back(phoneNumberObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetInstanceResult::getMessage()const
{
	return message_;
}

int GetInstanceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetInstanceResult::Data GetInstanceResult::getData()const
{
	return data_;
}

std::string GetInstanceResult::getCode()const
{
	return code_;
}

