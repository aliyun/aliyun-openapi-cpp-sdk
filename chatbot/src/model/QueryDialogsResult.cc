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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDialogs = value["Dialogs"]["Dialog"];
	for (auto value : allDialogs)
	{
		Dialog dialogsObject;
		if(!value["DialogId"].isNull())
			dialogsObject.dialogId = std::stol(value["DialogId"].asString());
		if(!value["DialogName"].isNull())
			dialogsObject.dialogName = value["DialogName"].asString();
		if(!value["Description"].isNull())
			dialogsObject.description = value["Description"].asString();
		if(!value["CreateTime"].isNull())
			dialogsObject.createTime = value["CreateTime"].asString();
		if(!value["ModifyTime"].isNull())
			dialogsObject.modifyTime = value["ModifyTime"].asString();
		if(!value["CreateUserId"].isNull())
			dialogsObject.createUserId = value["CreateUserId"].asString();
		if(!value["CreateUserName"].isNull())
			dialogsObject.createUserName = value["CreateUserName"].asString();
		if(!value["ModifyUserId"].isNull())
			dialogsObject.modifyUserId = value["ModifyUserId"].asString();
		if(!value["ModifyUserName"].isNull())
			dialogsObject.modifyUserName = value["ModifyUserName"].asString();
		if(!value["IsSampleDialog"].isNull())
			dialogsObject.isSampleDialog = value["IsSampleDialog"].asString() == "true";
		if(!value["Status"].isNull())
			dialogsObject.status = std::stoi(value["Status"].asString());
		if(!value["IsOnline"].isNull())
			dialogsObject.isOnline = value["IsOnline"].asString() == "true";
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

