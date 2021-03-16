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

#include <alibabacloud/reid_cloud/model/DescribeCursorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

DescribeCursorResult::DescribeCursorResult() :
	ServiceResult()
{}

DescribeCursorResult::DescribeCursorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCursorResult::~DescribeCursorResult()
{}

void DescribeCursorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Cursor"].isNull())
		cursor_ = value["Cursor"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string DescribeCursorResult::getMessage()const
{
	return message_;
}

std::string DescribeCursorResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeCursorResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeCursorResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeCursorResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeCursorResult::getCursor()const
{
	return cursor_;
}

std::string DescribeCursorResult::getCode()const
{
	return code_;
}

bool DescribeCursorResult::getSuccess()const
{
	return success_;
}

