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

#include <alibabacloud/ccc/model/ListInstancesOfUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListInstancesOfUserResult::ListInstancesOfUserResult() :
	ServiceResult()
{}

ListInstancesOfUserResult::ListInstancesOfUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesOfUserResult::~ListInstancesOfUserResult()
{}

void ListInstancesOfUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["CallCenterInstance"];
	for (auto dataNodeListCallCenterInstance : allListNode)
	{
		Data::CallCenterInstance callCenterInstanceObject;
		if(!dataNodeListCallCenterInstance["Status"].isNull())
			callCenterInstanceObject.status = dataNodeListCallCenterInstance["Status"].asString();
		if(!dataNodeListCallCenterInstance["ConsoleUrl"].isNull())
			callCenterInstanceObject.consoleUrl = dataNodeListCallCenterInstance["ConsoleUrl"].asString();
		if(!dataNodeListCallCenterInstance["Description"].isNull())
			callCenterInstanceObject.description = dataNodeListCallCenterInstance["Description"].asString();
		if(!dataNodeListCallCenterInstance["AliyunUid"].isNull())
			callCenterInstanceObject.aliyunUid = dataNodeListCallCenterInstance["AliyunUid"].asString();
		if(!dataNodeListCallCenterInstance["Name"].isNull())
			callCenterInstanceObject.name = dataNodeListCallCenterInstance["Name"].asString();
		if(!dataNodeListCallCenterInstance["DomainName"].isNull())
			callCenterInstanceObject.domainName = dataNodeListCallCenterInstance["DomainName"].asString();
		if(!dataNodeListCallCenterInstance["Id"].isNull())
			callCenterInstanceObject.id = dataNodeListCallCenterInstance["Id"].asString();
		auto allAdminListNode = dataNodeListCallCenterInstance["AdminList"]["User"];
		for (auto dataNodeListCallCenterInstanceAdminListUser : allAdminListNode)
		{
			Data::CallCenterInstance::User adminListObject;
			if(!dataNodeListCallCenterInstanceAdminListUser["DisplayName"].isNull())
				adminListObject.displayName = dataNodeListCallCenterInstanceAdminListUser["DisplayName"].asString();
			if(!dataNodeListCallCenterInstanceAdminListUser["Extension"].isNull())
				adminListObject.extension = dataNodeListCallCenterInstanceAdminListUser["Extension"].asString();
			if(!dataNodeListCallCenterInstanceAdminListUser["LoginName"].isNull())
				adminListObject.loginName = dataNodeListCallCenterInstanceAdminListUser["LoginName"].asString();
			if(!dataNodeListCallCenterInstanceAdminListUser["Email"].isNull())
				adminListObject.email = dataNodeListCallCenterInstanceAdminListUser["Email"].asString();
			if(!dataNodeListCallCenterInstanceAdminListUser["WorkMode"].isNull())
				adminListObject.workMode = dataNodeListCallCenterInstanceAdminListUser["WorkMode"].asString();
			if(!dataNodeListCallCenterInstanceAdminListUser["Mobile"].isNull())
				adminListObject.mobile = dataNodeListCallCenterInstanceAdminListUser["Mobile"].asString();
			if(!dataNodeListCallCenterInstanceAdminListUser["UserId"].isNull())
				adminListObject.userId = dataNodeListCallCenterInstanceAdminListUser["UserId"].asString();
			if(!dataNodeListCallCenterInstanceAdminListUser["RoleName"].isNull())
				adminListObject.roleName = dataNodeListCallCenterInstanceAdminListUser["RoleName"].asString();
			if(!dataNodeListCallCenterInstanceAdminListUser["InstanceId"].isNull())
				adminListObject.instanceId = dataNodeListCallCenterInstanceAdminListUser["InstanceId"].asString();
			if(!dataNodeListCallCenterInstanceAdminListUser["RoleId"].isNull())
				adminListObject.roleId = dataNodeListCallCenterInstanceAdminListUser["RoleId"].asString();
			callCenterInstanceObject.adminList.push_back(adminListObject);
		}
		auto allNumberListNode = dataNodeListCallCenterInstance["NumberList"]["PhoneNumber"];
		for (auto dataNodeListCallCenterInstanceNumberListPhoneNumber : allNumberListNode)
		{
			Data::CallCenterInstance::PhoneNumber numberListObject;
			if(!dataNodeListCallCenterInstanceNumberListPhoneNumber["Active"].isNull())
				numberListObject.active = dataNodeListCallCenterInstanceNumberListPhoneNumber["Active"].asString() == "true";
			if(!dataNodeListCallCenterInstanceNumberListPhoneNumber["UserId"].isNull())
				numberListObject.userId = dataNodeListCallCenterInstanceNumberListPhoneNumber["UserId"].asString();
			if(!dataNodeListCallCenterInstanceNumberListPhoneNumber["Number"].isNull())
				numberListObject.number = dataNodeListCallCenterInstanceNumberListPhoneNumber["Number"].asString();
			if(!dataNodeListCallCenterInstanceNumberListPhoneNumber["City"].isNull())
				numberListObject.city = dataNodeListCallCenterInstanceNumberListPhoneNumber["City"].asString();
			if(!dataNodeListCallCenterInstanceNumberListPhoneNumber["InstanceId"].isNull())
				numberListObject.instanceId = dataNodeListCallCenterInstanceNumberListPhoneNumber["InstanceId"].asString();
			if(!dataNodeListCallCenterInstanceNumberListPhoneNumber["Usage"].isNull())
				numberListObject.usage = dataNodeListCallCenterInstanceNumberListPhoneNumber["Usage"].asString();
			if(!dataNodeListCallCenterInstanceNumberListPhoneNumber["ContactFlowId"].isNull())
				numberListObject.contactFlowId = dataNodeListCallCenterInstanceNumberListPhoneNumber["ContactFlowId"].asString();
			if(!dataNodeListCallCenterInstanceNumberListPhoneNumber["Province"].isNull())
				numberListObject.province = dataNodeListCallCenterInstanceNumberListPhoneNumber["Province"].asString();
			auto allSkillGroupsNode = dataNodeListCallCenterInstanceNumberListPhoneNumber["SkillGroups"]["SkillGroup"];
			for (auto dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup : allSkillGroupsNode)
			{
				Data::CallCenterInstance::PhoneNumber::SkillGroup skillGroupsObject;
				if(!dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["DisplayName"].isNull())
					skillGroupsObject.displayName = dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["DisplayName"].asString();
				if(!dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["Description"].isNull())
					skillGroupsObject.description = dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["Description"].asString();
				if(!dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["PhoneNumberCount"].isNull())
					skillGroupsObject.phoneNumberCount = std::stoi(dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["PhoneNumberCount"].asString());
				if(!dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["SkillGroupId"].isNull())
					skillGroupsObject.skillGroupId = dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["SkillGroupId"].asString();
				if(!dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["UserCount"].isNull())
					skillGroupsObject.userCount = std::stoi(dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["UserCount"].asString());
				if(!dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["InstanceId"].isNull())
					skillGroupsObject.instanceId = dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["InstanceId"].asString();
				if(!dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["Name"].isNull())
					skillGroupsObject.name = dataNodeListCallCenterInstanceNumberListPhoneNumberSkillGroupsSkillGroup["Name"].asString();
				numberListObject.skillGroups.push_back(skillGroupsObject);
			}
			callCenterInstanceObject.numberList.push_back(numberListObject);
		}
		data_.list.push_back(callCenterInstanceObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListInstancesOfUserResult::getMessage()const
{
	return message_;
}

int ListInstancesOfUserResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListInstancesOfUserResult::Data ListInstancesOfUserResult::getData()const
{
	return data_;
}

std::string ListInstancesOfUserResult::getCode()const
{
	return code_;
}

