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

#include <alibabacloud/cms/model/GetMyGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

GetMyGroupsResult::GetMyGroupsResult() :
	ServiceResult()
{}

GetMyGroupsResult::GetMyGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMyGroupsResult::~GetMyGroupsResult()
{}

void GetMyGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allGroup = value["Group"];
	for (auto value : allGroup)
	{
		Group groupObject;
		if(!value["GroupId"].isNull())
			groupObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["GroupName"].isNull())
			groupObject.groupName = value["GroupName"].asString();
		if(!value["ServiceId"].isNull())
			groupObject.serviceId = std::stol(value["ServiceId"].asString());
		if(!value["BindUrl"].isNull())
			groupObject.bindUrl = value["BindUrl"].asString();
		if(!value["Type"].isNull())
			groupObject.type = value["Type"].asString();
		auto allContactGroups = value["ContactGroups"]["ContactGroup"];
		for (auto value : allContactGroups)
		{
			Group::ContactGroup contactGroupObject;
			if(!value["Name"].isNull())
				contactGroupObject.name = value["Name"].asString();
			groupObject.contactGroups.push_back(contactGroupObject);
		}
		group_.push_back(groupObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<GetMyGroupsResult::Group> GetMyGroupsResult::getGroup()const
{
	return group_;
}

int GetMyGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMyGroupsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMyGroupsResult::getSuccess()const
{
	return success_;
}

