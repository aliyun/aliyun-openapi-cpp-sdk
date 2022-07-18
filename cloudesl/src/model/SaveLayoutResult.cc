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

#include <alibabacloud/cloudesl/model/SaveLayoutResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

SaveLayoutResult::SaveLayoutResult() :
	ServiceResult()
{}

SaveLayoutResult::SaveLayoutResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SaveLayoutResult::~SaveLayoutResult()
{}

void SaveLayoutResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string SaveLayoutResult::getMessage()const
{
	return message_;
}

std::string SaveLayoutResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string SaveLayoutResult::getErrorCode()const
{
	return errorCode_;
}

std::string SaveLayoutResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string SaveLayoutResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string SaveLayoutResult::getCode()const
{
	return code_;
}

bool SaveLayoutResult::getSuccess()const
{
	return success_;
}

