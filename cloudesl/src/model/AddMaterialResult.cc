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

#include <alibabacloud/cloudesl/model/AddMaterialResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

AddMaterialResult::AddMaterialResult() :
	ServiceResult()
{}

AddMaterialResult::AddMaterialResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddMaterialResult::~AddMaterialResult()
{}

void AddMaterialResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Success"].isNull())
		result_.success = resultNode["Success"].asString() == "true";
	if(!resultNode["Message"].isNull())
		result_.message = resultNode["Message"].asString();
	if(!resultNode["DynamicMessage"].isNull())
		result_.dynamicMessage = resultNode["DynamicMessage"].asString();
	if(!resultNode["DynamicCode"].isNull())
		result_.dynamicCode = resultNode["DynamicCode"].asString();
	if(!resultNode["ErrorCode"].isNull())
		result_.errorCode = resultNode["ErrorCode"].asString();
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

std::string AddMaterialResult::getMessage()const
{
	return message_;
}

std::string AddMaterialResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string AddMaterialResult::getErrorCode()const
{
	return errorCode_;
}

std::string AddMaterialResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string AddMaterialResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string AddMaterialResult::getCode()const
{
	return code_;
}

bool AddMaterialResult::getSuccess()const
{
	return success_;
}

AddMaterialResult::Result AddMaterialResult::getResult()const
{
	return result_;
}

