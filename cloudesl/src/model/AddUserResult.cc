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

#include <alibabacloud/cloudesl/model/AddUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

AddUserResult::AddUserResult() :
	ServiceResult()
{}

AddUserResult::AddUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddUserResult::~AddUserResult()
{}

void AddUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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

std::string AddUserResult::getMessage()const
{
	return message_;
}

std::string AddUserResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string AddUserResult::getErrorCode()const
{
	return errorCode_;
}

std::string AddUserResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string AddUserResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string AddUserResult::getCode()const
{
	return code_;
}

bool AddUserResult::getSuccess()const
{
	return success_;
}

