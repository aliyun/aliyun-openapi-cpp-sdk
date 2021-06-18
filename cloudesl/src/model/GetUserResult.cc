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

#include <alibabacloud/cloudesl/model/GetUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

GetUserResult::GetUserResult() :
	ServiceResult()
{}

GetUserResult::GetUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserResult::~GetUserResult()
{}

void GetUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userNode = value["User"];
	if(!userNode["Stores"].isNull())
		user_.stores = userNode["Stores"].asString();
	if(!userNode["UserName"].isNull())
		user_.userName = userNode["UserName"].asString();
	if(!userNode["UserId"].isNull())
		user_.userId = userNode["UserId"].asString();
	if(!userNode["UserType"].isNull())
		user_.userType = userNode["UserType"].asString();
	if(!userNode["OwnerId"].isNull())
		user_.ownerId = userNode["OwnerId"].asString();
	if(!userNode["Bid"].isNull())
		user_.bid = userNode["Bid"].asString();
	auto allDingTalkInfosNode = userNode["DingTalkInfos"]["DingTalkInfo"];
	for (auto userNodeDingTalkInfosDingTalkInfo : allDingTalkInfosNode)
	{
		User::DingTalkInfo dingTalkInfoObject;
		if(!userNodeDingTalkInfosDingTalkInfo["DingTalkCompanyId"].isNull())
			dingTalkInfoObject.dingTalkCompanyId = userNodeDingTalkInfosDingTalkInfo["DingTalkCompanyId"].asString();
		if(!userNodeDingTalkInfosDingTalkInfo["DingTalkUserId"].isNull())
			dingTalkInfoObject.dingTalkUserId = userNodeDingTalkInfosDingTalkInfo["DingTalkUserId"].asString();
		user_.dingTalkInfos.push_back(dingTalkInfoObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetUserResult::User GetUserResult::getUser()const
{
	return user_;
}

std::string GetUserResult::getMessage()const
{
	return message_;
}

std::string GetUserResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetUserResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetUserResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string GetUserResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetUserResult::getCode()const
{
	return code_;
}

bool GetUserResult::getSuccess()const
{
	return success_;
}

