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

#include <alibabacloud/aliyuncvc/model/QueryUserInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

QueryUserInfoResult::QueryUserInfoResult() :
	ServiceResult()
{}

QueryUserInfoResult::QueryUserInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryUserInfoResult::~QueryUserInfoResult()
{}

void QueryUserInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userInfoNode = value["UserInfo"];
	if(!userInfoNode["CurNum"].isNull())
		userInfo_.curNum = std::stoi(userInfoNode["CurNum"].asString());
	if(!userInfoNode["MemberConcurrentMax"].isNull())
		userInfo_.memberConcurrentMax = std::stoi(userInfoNode["MemberConcurrentMax"].asString());
	if(!userInfoNode["MaxNum"].isNull())
		userInfo_.maxNum = std::stoi(userInfoNode["MaxNum"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryUserInfoResult::getMessage()const
{
	return message_;
}

QueryUserInfoResult::UserInfo QueryUserInfoResult::getUserInfo()const
{
	return userInfo_;
}

int QueryUserInfoResult::getErrorCode()const
{
	return errorCode_;
}

bool QueryUserInfoResult::getSuccess()const
{
	return success_;
}

