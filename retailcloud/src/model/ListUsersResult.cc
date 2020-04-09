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

#include <alibabacloud/retailcloud/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

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
	auto allDataNode = value["Data"]["ListUserResponse"];
	for (auto valueDataListUserResponse : allDataNode)
	{
		ListUserResponse dataObject;
		if(!valueDataListUserResponse["UserId"].isNull())
			dataObject.userId = valueDataListUserResponse["UserId"].asString();
		if(!valueDataListUserResponse["UserType"].isNull())
			dataObject.userType = valueDataListUserResponse["UserType"].asString();
		if(!valueDataListUserResponse["RealName"].isNull())
			dataObject.realName = valueDataListUserResponse["RealName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListUsersResult::getTotalCount()const
{
	return totalCount_;
}

int ListUsersResult::getPageSize()const
{
	return pageSize_;
}

int ListUsersResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListUsersResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListUsersResult::ListUserResponse> ListUsersResult::getData()const
{
	return data_;
}

int ListUsersResult::getCode()const
{
	return code_;
}

