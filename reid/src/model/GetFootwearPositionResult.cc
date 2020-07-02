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

#include <alibabacloud/reid/model/GetFootwearPositionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

GetFootwearPositionResult::GetFootwearPositionResult() :
	ServiceResult()
{}

GetFootwearPositionResult::GetFootwearPositionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFootwearPositionResult::~GetFootwearPositionResult()
{}

void GetFootwearPositionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["PositionNumber"].isNull())
		positionNumber_ = std::stoi(value["PositionNumber"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["SkuId"].isNull())
		skuId_ = value["SkuId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["StoreId"].isNull())
		storeId_ = std::stol(value["StoreId"].asString());
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string GetFootwearPositionResult::getMessage()const
{
	return message_;
}

long GetFootwearPositionResult::getStoreId()const
{
	return storeId_;
}

long GetFootwearPositionResult::getStartTime()const
{
	return startTime_;
}

std::string GetFootwearPositionResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetFootwearPositionResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetFootwearPositionResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string GetFootwearPositionResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetFootwearPositionResult::getSkuId()const
{
	return skuId_;
}

std::string GetFootwearPositionResult::getCode()const
{
	return code_;
}

int GetFootwearPositionResult::getPositionNumber()const
{
	return positionNumber_;
}

bool GetFootwearPositionResult::getSuccess()const
{
	return success_;
}

