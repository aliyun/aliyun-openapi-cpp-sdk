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

#include <alibabacloud/cloudesl/model/DescribeClientPackageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeClientPackageResult::DescribeClientPackageResult() :
	ServiceResult()
{}

DescribeClientPackageResult::DescribeClientPackageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClientPackageResult::~DescribeClientPackageResult()
{}

void DescribeClientPackageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["UpdateType"].isNull())
		updateType_ = value["UpdateType"].asString();
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["Version"].isNull())
		version_ = value["Version"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeClientPackageResult::getDescription()const
{
	return description_;
}

std::string DescribeClientPackageResult::getMessage()const
{
	return message_;
}

std::string DescribeClientPackageResult::getVersion()const
{
	return version_;
}

std::string DescribeClientPackageResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeClientPackageResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeClientPackageResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeClientPackageResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeClientPackageResult::getUpdateType()const
{
	return updateType_;
}

std::string DescribeClientPackageResult::getCode()const
{
	return code_;
}

std::string DescribeClientPackageResult::getUrl()const
{
	return url_;
}

bool DescribeClientPackageResult::getSuccess()const
{
	return success_;
}

