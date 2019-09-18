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

#include <alibabacloud/cms/model/DeleteMyGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DeleteMyGroupsResult::DeleteMyGroupsResult() :
	ServiceResult()
{}

DeleteMyGroupsResult::DeleteMyGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteMyGroupsResult::~DeleteMyGroupsResult()
{}

void DeleteMyGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto groupNode = value["Group"];
	if(!groupNode["GroupId"].isNull())
		group_.groupId = std::stol(groupNode["GroupId"].asString());
	if(!groupNode["GroupName"].isNull())
		group_.groupName = groupNode["GroupName"].asString();
	if(!groupNode["ServiceId"].isNull())
		group_.serviceId = groupNode["ServiceId"].asString();
	if(!groupNode["BindUrls"].isNull())
		group_.bindUrls = groupNode["BindUrls"].asString();
	if(!groupNode["Type"].isNull())
		group_.type = groupNode["Type"].asString();
	auto allContactGroups = value["ContactGroups"]["ContactGroup"];
	for (auto value : allContactGroups)
	{
		Group::ContactGroup contactGroupObject;
		if(!value["Name"].isNull())
			contactGroupObject.name = value["Name"].asString();
		group_.contactGroups.push_back(contactGroupObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

DeleteMyGroupsResult::Group DeleteMyGroupsResult::getGroup()const
{
	return group_;
}

int DeleteMyGroupsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DeleteMyGroupsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DeleteMyGroupsResult::getSuccess()const
{
	return success_;
}

