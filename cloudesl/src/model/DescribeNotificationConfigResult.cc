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

#include <alibabacloud/cloudesl/model/DescribeNotificationConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeNotificationConfigResult::DescribeNotificationConfigResult() :
	ServiceResult()
{}

DescribeNotificationConfigResult::DescribeNotificationConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNotificationConfigResult::~DescribeNotificationConfigResult()
{}

void DescribeNotificationConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Topic"].isNull())
		topic_ = value["Topic"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["Endpoint"].isNull())
		endpoint_ = value["Endpoint"].asString();
	if(!value["Tag"].isNull())
		tag_ = value["Tag"].asString();
	if(!value["Enable"].isNull())
		enable_ = value["Enable"].asString() == "true";

}

std::string DescribeNotificationConfigResult::getMessage()const
{
	return message_;
}

std::string DescribeNotificationConfigResult::getEndpoint()const
{
	return endpoint_;
}

bool DescribeNotificationConfigResult::getEnable()const
{
	return enable_;
}

std::string DescribeNotificationConfigResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeNotificationConfigResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeNotificationConfigResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeNotificationConfigResult::getTag()const
{
	return tag_;
}

std::string DescribeNotificationConfigResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeNotificationConfigResult::getTopic()const
{
	return topic_;
}

std::string DescribeNotificationConfigResult::getCode()const
{
	return code_;
}

bool DescribeNotificationConfigResult::getSuccess()const
{
	return success_;
}

std::string DescribeNotificationConfigResult::getGroupId()const
{
	return groupId_;
}

