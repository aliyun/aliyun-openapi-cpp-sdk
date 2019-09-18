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

#include <alibabacloud/chatbot/model/DescribeDialogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

DescribeDialogResult::DescribeDialogResult() :
	ServiceResult()
{}

DescribeDialogResult::DescribeDialogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDialogResult::~DescribeDialogResult()
{}

void DescribeDialogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DialogId"].isNull())
		dialogId_ = std::stol(value["DialogId"].asString());
	if(!value["DialogName"].isNull())
		dialogName_ = value["DialogName"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();
	if(!value["CreateUserId"].isNull())
		createUserId_ = value["CreateUserId"].asString();
	if(!value["CreateUserName"].isNull())
		createUserName_ = value["CreateUserName"].asString();
	if(!value["ModifyUserId"].isNull())
		modifyUserId_ = value["ModifyUserId"].asString();
	if(!value["ModifyUserName"].isNull())
		modifyUserName_ = value["ModifyUserName"].asString();
	if(!value["IsSampleDialog"].isNull())
		isSampleDialog_ = value["IsSampleDialog"].asString() == "true";
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["IsOnline"].isNull())
		isOnline_ = value["IsOnline"].asString() == "true";

}

int DescribeDialogResult::getStatus()const
{
	return status_;
}

std::string DescribeDialogResult::getModifyTime()const
{
	return modifyTime_;
}

std::string DescribeDialogResult::getDialogName()const
{
	return dialogName_;
}

std::string DescribeDialogResult::getDescription()const
{
	return description_;
}

std::string DescribeDialogResult::getModifyUserId()const
{
	return modifyUserId_;
}

std::string DescribeDialogResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeDialogResult::getModifyUserName()const
{
	return modifyUserName_;
}

long DescribeDialogResult::getDialogId()const
{
	return dialogId_;
}

std::string DescribeDialogResult::getCreateUserId()const
{
	return createUserId_;
}

std::string DescribeDialogResult::getCreateUserName()const
{
	return createUserName_;
}

bool DescribeDialogResult::getIsSampleDialog()const
{
	return isSampleDialog_;
}

bool DescribeDialogResult::getIsOnline()const
{
	return isOnline_;
}

