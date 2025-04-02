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

#include <alibabacloud/resourcecenter/model/ListTagKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

ListTagKeysResult::ListTagKeysResult() :
	ServiceResult()
{}

ListTagKeysResult::ListTagKeysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagKeysResult::~ListTagKeysResult()
{}

void ListTagKeysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagKeys = value["TagKeys"]["TagKey"];
	for (const auto &item : allTagKeys)
		tagKeys_.push_back(item.asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListTagKeysResult::getNextToken()const
{
	return nextToken_;
}

std::string ListTagKeysResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListTagKeysResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListTagKeysResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTagKeysResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<std::string> ListTagKeysResult::getTagKeys()const
{
	return tagKeys_;
}

bool ListTagKeysResult::getSuccess()const
{
	return success_;
}

