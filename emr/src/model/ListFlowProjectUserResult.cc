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

#include <alibabacloud/emr/model/ListFlowProjectUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowProjectUserResult::ListFlowProjectUserResult() :
	ServiceResult()
{}

ListFlowProjectUserResult::ListFlowProjectUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowProjectUserResult::~ListFlowProjectUserResult()
{}

void ListFlowProjectUserResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allUsers = value["Users"]["User"];
	for (auto value : allUsers)
	{
		User usersObject;
		if(!value["GmtCreate"].isNull())
			usersObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			usersObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["ProjectId"].isNull())
			usersObject.projectId = value["ProjectId"].asString();
		if(!value["OwnerId"].isNull())
			usersObject.ownerId = value["OwnerId"].asString();
		if(!value["UserName"].isNull())
			usersObject.userName = value["UserName"].asString();
		users_.push_back(usersObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListFlowProjectUserResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowProjectUserResult::getPageNumber()const
{
	return pageNumber_;
}

int ListFlowProjectUserResult::getTotal()const
{
	return total_;
}

std::vector<ListFlowProjectUserResult::User> ListFlowProjectUserResult::getUsers()const
{
	return users_;
}

