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

#include <alibabacloud/emr/model/ListTagKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

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
	auto allKeys = value["Keys"]["Key"];
	for (const auto &item : allKeys)
		keys_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int ListTagKeysResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTagKeysResult::getMessage()const
{
	return message_;
}

int ListTagKeysResult::getPageSize()const
{
	return pageSize_;
}

std::string ListTagKeysResult::getNextToken()const
{
	return nextToken_;
}

std::vector<std::string> ListTagKeysResult::getKeys()const
{
	return keys_;
}

std::string ListTagKeysResult::getCode()const
{
	return code_;
}

bool ListTagKeysResult::getSuccess()const
{
	return success_;
}

