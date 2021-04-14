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

#include <alibabacloud/green/model/DescribeAuditCallbackListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeAuditCallbackListResult::DescribeAuditCallbackListResult() :
	ServiceResult()
{}

DescribeAuditCallbackListResult::DescribeAuditCallbackListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuditCallbackListResult::~DescribeAuditCallbackListResult()
{}

void DescribeAuditCallbackListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCallbackListNode = value["CallbackList"]["Callback"];
	for (auto valueCallbackListCallback : allCallbackListNode)
	{
		Callback callbackListObject;
		if(!valueCallbackListCallback["Id"].isNull())
			callbackListObject.id = std::stol(valueCallbackListCallback["Id"].asString());
		if(!valueCallbackListCallback["Name"].isNull())
			callbackListObject.name = valueCallbackListCallback["Name"].asString();
		if(!valueCallbackListCallback["Url"].isNull())
			callbackListObject.url = valueCallbackListCallback["Url"].asString();
		if(!valueCallbackListCallback["Seed"].isNull())
			callbackListObject.seed = valueCallbackListCallback["Seed"].asString();
		if(!valueCallbackListCallback["CryptType"].isNull())
			callbackListObject.cryptType = valueCallbackListCallback["CryptType"].asString();
		if(!valueCallbackListCallback["CreateTime"].isNull())
			callbackListObject.createTime = valueCallbackListCallback["CreateTime"].asString();
		if(!valueCallbackListCallback["ModifiedTime"].isNull())
			callbackListObject.modifiedTime = valueCallbackListCallback["ModifiedTime"].asString();
		auto allCallbackTypes = value["CallbackTypes"]["CallbackType"];
		for (auto value : allCallbackTypes)
			callbackListObject.callbackTypes.push_back(value.asString());
		auto allCallbackSuggestions = value["CallbackSuggestions"]["CallbackSuggestion"];
		for (auto value : allCallbackSuggestions)
			callbackListObject.callbackSuggestions.push_back(value.asString());
		callbackList_.push_back(callbackListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAuditCallbackListResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeAuditCallbackListResult::Callback> DescribeAuditCallbackListResult::getCallbackList()const
{
	return callbackList_;
}

