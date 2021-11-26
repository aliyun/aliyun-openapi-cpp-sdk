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

#include <alibabacloud/qualitycheck/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

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
	auto allDataNode = value["Data"]["User"];
	for (auto valueDataUser : allDataNode)
	{
		User dataObject;
		if(!valueDataUser["DisplayName"].isNull())
			dataObject.displayName = valueDataUser["DisplayName"].asString();
		if(!valueDataUser["UpdateTime"].isNull())
			dataObject.updateTime = valueDataUser["UpdateTime"].asString();
		if(!valueDataUser["Description"].isNull())
			dataObject.description = valueDataUser["Description"].asString();
		if(!valueDataUser["CreateTime"].isNull())
			dataObject.createTime = valueDataUser["CreateTime"].asString();
		if(!valueDataUser["LoginUserType"].isNull())
			dataObject.loginUserType = std::stoi(valueDataUser["LoginUserType"].asString());
		if(!valueDataUser["AliUid"].isNull())
			dataObject.aliUid = valueDataUser["AliUid"].asString();
		if(!valueDataUser["RoleName"].isNull())
			dataObject.roleName = valueDataUser["RoleName"].asString();
		if(!valueDataUser["UserName"].isNull())
			dataObject.userName = valueDataUser["UserName"].asString();
		if(!valueDataUser["Id"].isNull())
			dataObject.id = std::stol(valueDataUser["Id"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::string ListUsersResult::getMessage()const
{
	return message_;
}

int ListUsersResult::getPageSize()const
{
	return pageSize_;
}

int ListUsersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListUsersResult::User> ListUsersResult::getData()const
{
	return data_;
}

int ListUsersResult::getCount()const
{
	return count_;
}

std::string ListUsersResult::getCode()const
{
	return code_;
}

bool ListUsersResult::getSuccess()const
{
	return success_;
}

