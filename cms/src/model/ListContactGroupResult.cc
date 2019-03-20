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

#include <alibabacloud/cms/model/ListContactGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListContactGroupResult::ListContactGroupResult() :
	ServiceResult()
{}

ListContactGroupResult::ListContactGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListContactGroupResult::~ListContactGroupResult()
{}

void ListContactGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allContactGroups = value["ContactGroups"]["ContactGroup"];
	for (const auto &item : allContactGroups)
		contactGroups_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = std::stoi(value["NextToken"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<std::string> ListContactGroupResult::getContactGroups()const
{
	return contactGroups_;
}

std::string ListContactGroupResult::getMessage()const
{
	return message_;
}

int ListContactGroupResult::getNextToken()const
{
	return nextToken_;
}

int ListContactGroupResult::getTotal()const
{
	return total_;
}

std::string ListContactGroupResult::getCode()const
{
	return code_;
}

bool ListContactGroupResult::getSuccess()const
{
	return success_;
}

