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

#include <alibabacloud/reid/model/GetFootwearEventResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

GetFootwearEventResult::GetFootwearEventResult() :
	ServiceResult()
{}

GetFootwearEventResult::GetFootwearEventResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFootwearEventResult::~GetFootwearEventResult()
{}

void GetFootwearEventResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFootwearEventListNode = value["FootwearEventList"]["FootwearEvent"];
	for (auto valueFootwearEventListFootwearEvent : allFootwearEventListNode)
	{
		FootwearEvent footwearEventListObject;
		if(!valueFootwearEventListFootwearEvent["PositionNumber"].isNull())
			footwearEventListObject.positionNumber = valueFootwearEventListFootwearEvent["PositionNumber"].asString();
		if(!valueFootwearEventListFootwearEvent["TryOnEventCount"].isNull())
			footwearEventListObject.tryOnEventCount = std::stoi(valueFootwearEventListFootwearEvent["TryOnEventCount"].asString());
		if(!valueFootwearEventListFootwearEvent["SkuId"].isNull())
			footwearEventListObject.skuId = valueFootwearEventListFootwearEvent["SkuId"].asString();
		if(!valueFootwearEventListFootwearEvent["StoreId"].isNull())
			footwearEventListObject.storeId = std::stol(valueFootwearEventListFootwearEvent["StoreId"].asString());
		if(!valueFootwearEventListFootwearEvent["TakeEventCount"].isNull())
			footwearEventListObject.takeEventCount = std::stoi(valueFootwearEventListFootwearEvent["TakeEventCount"].asString());
		if(!valueFootwearEventListFootwearEvent["Date"].isNull())
			footwearEventListObject.date = valueFootwearEventListFootwearEvent["Date"].asString();
		footwearEventList_.push_back(footwearEventListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
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

std::string GetFootwearEventResult::getMessage()const
{
	return message_;
}

std::vector<GetFootwearEventResult::FootwearEvent> GetFootwearEventResult::getFootwearEventList()const
{
	return footwearEventList_;
}

std::string GetFootwearEventResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetFootwearEventResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetFootwearEventResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string GetFootwearEventResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetFootwearEventResult::getCode()const
{
	return code_;
}

bool GetFootwearEventResult::getSuccess()const
{
	return success_;
}

