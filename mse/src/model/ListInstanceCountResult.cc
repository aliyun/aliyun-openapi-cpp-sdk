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

#include <alibabacloud/mse/model/ListInstanceCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListInstanceCountResult::ListInstanceCountResult() :
	ServiceResult()
{}

ListInstanceCountResult::ListInstanceCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceCountResult::~ListInstanceCountResult()
{}

void ListInstanceCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["Data"];
	for (const auto &item : allData)
		data_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string ListInstanceCountResult::getMessage()const
{
	return message_;
}

int ListInstanceCountResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> ListInstanceCountResult::getData()const
{
	return data_;
}

std::string ListInstanceCountResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListInstanceCountResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListInstanceCountResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int ListInstanceCountResult::getCode()const
{
	return code_;
}

bool ListInstanceCountResult::getSuccess()const
{
	return success_;
}

