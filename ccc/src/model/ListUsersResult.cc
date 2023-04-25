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

#include <alibabacloud/ccc/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListUsersResult::ListUsersResult() :
	ServiceResult()
{}

ListUsersResult::ListUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUsersResult::~ListUsersResult()
{}

void ListUsersResult::parse(const std::string &payload)
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
	auto allListNode = dataNode["List"]["UserDetail"];
	for (auto dataNodeListUserDetail : allListNode)
	{
		Data::UserDetail userDetailObject;
		if(!dataNodeListUserDetail["DisplayName"].isNull())
			userDetailObject.displayName = dataNodeListUserDetail["DisplayName"].asString();
		if(!dataNodeListUserDetail["LoginName"].isNull())
			userDetailObject.loginName = dataNodeListUserDetail["LoginName"].asString();
		if(!dataNodeListUserDetail["Email"].isNull())
			userDetailObject.email = dataNodeListUserDetail["Email"].asString();
		if(!dataNodeListUserDetail["WorkMode"].isNull())
			userDetailObject.workMode = dataNodeListUserDetail["WorkMode"].asString();
		if(!dataNodeListUserDetail["Mobile"].isNull())
			userDetailObject.mobile = dataNodeListUserDetail["Mobile"].asString();
		if(!dataNodeListUserDetail["UserId"].isNull())
			userDetailObject.userId = dataNodeListUserDetail["UserId"].asString();
		if(!dataNodeListUserDetail["DisplayId"].isNull())
			userDetailObject.displayId = dataNodeListUserDetail["DisplayId"].asString();
		if(!dataNodeListUserDetail["RoleName"].isNull())
			userDetailObject.roleName = dataNodeListUserDetail["RoleName"].asString();
		if(!dataNodeListUserDetail["RoleId"].isNull())
			userDetailObject.roleId = dataNodeListUserDetail["RoleId"].asString();
		if(!dataNodeListUserDetail["PrimaryAccount"].isNull())
			userDetailObject.primaryAccount = dataNodeListUserDetail["PrimaryAccount"].asString() == "true";
		if(!dataNodeListUserDetail["RamId"].isNull())
			userDetailObject.ramId = std::stol(dataNodeListUserDetail["RamId"].asString());
		if(!dataNodeListUserDetail["Extension"].isNull())
			userDetailObject.extension = dataNodeListUserDetail["Extension"].asString();
		if(!dataNodeListUserDetail["DeviceId"].isNull())
			userDetailObject.deviceId = dataNodeListUserDetail["DeviceId"].asString();
		if(!dataNodeListUserDetail["DeviceExt"].isNull())
			userDetailObject.deviceExt = dataNodeListUserDetail["DeviceExt"].asString();
		if(!dataNodeListUserDetail["DeviceState"].isNull())
			userDetailObject.deviceState = dataNodeListUserDetail["DeviceState"].asString();
		auto allPersonalOutboundNumberListNode = dataNodeListUserDetail["PersonalOutboundNumberList"]["PhoneNumber"];
		for (auto dataNodeListUserDetailPersonalOutboundNumberListPhoneNumber : allPersonalOutboundNumberListNode)
		{
			Data::UserDetail::PhoneNumber personalOutboundNumberListObject;
			if(!dataNodeListUserDetailPersonalOutboundNumberListPhoneNumber["Number"].isNull())
				personalOutboundNumberListObject.number = dataNodeListUserDetailPersonalOutboundNumberListPhoneNumber["Number"].asString();
			if(!dataNodeListUserDetailPersonalOutboundNumberListPhoneNumber["Active"].isNull())
				personalOutboundNumberListObject.active = dataNodeListUserDetailPersonalOutboundNumberListPhoneNumber["Active"].asString() == "true";
			if(!dataNodeListUserDetailPersonalOutboundNumberListPhoneNumber["City"].isNull())
				personalOutboundNumberListObject.city = dataNodeListUserDetailPersonalOutboundNumberListPhoneNumber["City"].asString();
			if(!dataNodeListUserDetailPersonalOutboundNumberListPhoneNumber["Usage"].isNull())
				personalOutboundNumberListObject.usage = dataNodeListUserDetailPersonalOutboundNumberListPhoneNumber["Usage"].asString();
			if(!dataNodeListUserDetailPersonalOutboundNumberListPhoneNumber["Province"].isNull())
				personalOutboundNumberListObject.province = dataNodeListUserDetailPersonalOutboundNumberListPhoneNumber["Province"].asString();
			userDetailObject.personalOutboundNumberList.push_back(personalOutboundNumberListObject);
		}
		auto allSkillLevelListNode = dataNodeListUserDetail["SkillLevelList"]["UserSkillLevel"];
		for (auto dataNodeListUserDetailSkillLevelListUserSkillLevel : allSkillLevelListNode)
		{
			Data::UserDetail::UserSkillLevel skillLevelListObject;
			if(!dataNodeListUserDetailSkillLevelListUserSkillLevel["SkillLevel"].isNull())
				skillLevelListObject.skillLevel = std::stoi(dataNodeListUserDetailSkillLevelListUserSkillLevel["SkillLevel"].asString());
			if(!dataNodeListUserDetailSkillLevelListUserSkillLevel["SkillGroupId"].isNull())
				skillLevelListObject.skillGroupId = dataNodeListUserDetailSkillLevelListUserSkillLevel["SkillGroupId"].asString();
			if(!dataNodeListUserDetailSkillLevelListUserSkillLevel["SkillGroupName"].isNull())
				skillLevelListObject.skillGroupName = dataNodeListUserDetailSkillLevelListUserSkillLevel["SkillGroupName"].asString();
			userDetailObject.skillLevelList.push_back(skillLevelListObject);
		}
		data_.list.push_back(userDetailObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListUsersResult::getMessage()const
{
	return message_;
}

int ListUsersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListUsersResult::Data ListUsersResult::getData()const
{
	return data_;
}

std::string ListUsersResult::getCode()const
{
	return code_;
}

