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
	auto groupNode = value["Group"];
	if(!groupNode["GroupId"].isNull())
		group_.groupId = std::stol(groupNode["GroupId"].asString());
	if(!groupNode["GroupName"].isNull())
		group_.groupName = groupNode["GroupName"].asString();
	if(!groupNode["ServiceId"].isNull())
		group_.serviceId = std::stol(groupNode["ServiceId"].asString());
	if(!groupNode["BindUrl"].isNull())
		group_.bindUrl = groupNode["BindUrl"].asString();
	if(!groupNode["Type"].isNull())
		group_.type = groupNode["Type"].asString();
	auto allContactGroupsNode = groupNode["ContactGroups"]["ContactGroup"];
	for (auto groupNodeContactGroupsContactGroup : allContactGroupsNode)
	{
		Group::ContactGroup contactGroupObject;
		if(!groupNodeContactGroupsContactGroup["Name"].isNull())
			contactGroupObject.name = groupNodeContactGroupsContactGroup["Name"].asString();
		group_.contactGroups.push_back(contactGroupObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetMyGroupsResult::Group GetMyGroupsResult::getGroup()const
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

