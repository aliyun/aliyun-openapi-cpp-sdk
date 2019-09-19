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

#include <alibabacloud/chatbot/model/QueryDialogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

QueryDialogsResult::QueryDialogsResult() :
	ServiceResult()
{}

QueryDialogsResult::QueryDialogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDialogsResult::~QueryDialogsResult()
{}

void QueryDialogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDialogsNode = value["Dialogs"]["Dialog"];
	for (auto valueDialogsDialog : allDialogsNode)
	{
		Dialog dialogsObject;
		if(!valueDialogsDialog["DialogId"].isNull())
			dialogsObject.dialogId = std::stol(valueDialogsDialog["DialogId"].asString());
		if(!valueDialogsDialog["DialogName"].isNull())
			dialogsObject.dialogName = valueDialogsDialog["DialogName"].asString();
		if(!valueDialogsDialog["Description"].isNull())
			dialogsObject.description = valueDialogsDialog["Description"].asString();
		if(!valueDialogsDialog["CreateTime"].isNull())
			dialogsObject.createTime = valueDialogsDialog["CreateTime"].asString();
		if(!valueDialogsDialog["ModifyTime"].isNull())
			dialogsObject.modifyTime = valueDialogsDialog["ModifyTime"].asString();
		if(!valueDialogsDialog["CreateUserId"].isNull())
			dialogsObject.createUserId = valueDialogsDialog["CreateUserId"].asString();
		if(!valueDialogsDialog["CreateUserName"].isNull())
			dialogsObject.createUserName = valueDialogsDialog["CreateUserName"].asString();
		if(!valueDialogsDialog["ModifyUserId"].isNull())
			dialogsObject.modifyUserId = valueDialogsDialog["ModifyUserId"].asString();
		if(!valueDialogsDialog["ModifyUserName"].isNull())
			dialogsObject.modifyUserName = valueDialogsDialog["ModifyUserName"].asString();
		if(!valueDialogsDialog["IsSampleDialog"].isNull())
			dialogsObject.isSampleDialog = valueDialogsDialog["IsSampleDialog"].asString() == "true";
		if(!valueDialogsDialog["Status"].isNull())
			dialogsObject.status = std::stoi(valueDialogsDialog["Status"].asString());
		if(!valueDialogsDialog["IsOnline"].isNull())
			dialogsObject.isOnline = valueDialogsDialog["IsOnline"].asString() == "true";
		dialogs_.push_back(dialogsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryDialogsResult::getTotalCount()const
{
	return totalCount_;
}

int QueryDialogsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<QueryDialogsResult::Dialog> QueryDialogsResult::getDialogs()const
{
	return dialogs_;
}

int QueryDialogsResult::getPageNumber()const
{
	return pageNumber_;
}

