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

#include <alibabacloud/amqp-open/model/ListDownStreamBindingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Amqp_open;
using namespace AlibabaCloud::Amqp_open::Model;

ListDownStreamBindingsResult::ListDownStreamBindingsResult() :
	ServiceResult()
{}

ListDownStreamBindingsResult::ListDownStreamBindingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDownStreamBindingsResult::~ListDownStreamBindingsResult()
{}

void ListDownStreamBindingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MaxResults"].isNull())
		data_.maxResults = std::stoi(dataNode["MaxResults"].asString());
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	auto allBindingsNode = dataNode["Bindings"]["BindingVO"];
	for (auto dataNodeBindingsBindingVO : allBindingsNode)
	{
		Data::BindingVO bindingVOObject;
		if(!dataNodeBindingsBindingVO["SourceExchange"].isNull())
			bindingVOObject.sourceExchange = dataNodeBindingsBindingVO["SourceExchange"].asString();
		if(!dataNodeBindingsBindingVO["Argument"].isNull())
			bindingVOObject.argument = dataNodeBindingsBindingVO["Argument"].asString();
		if(!dataNodeBindingsBindingVO["BindingKey"].isNull())
			bindingVOObject.bindingKey = dataNodeBindingsBindingVO["BindingKey"].asString();
		if(!dataNodeBindingsBindingVO["BindingType"].isNull())
			bindingVOObject.bindingType = dataNodeBindingsBindingVO["BindingType"].asString();
		if(!dataNodeBindingsBindingVO["DestinationName"].isNull())
			bindingVOObject.destinationName = dataNodeBindingsBindingVO["DestinationName"].asString();
		data_.bindings.push_back(bindingVOObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListDownStreamBindingsResult::getMessage()const
{
	return message_;
}

ListDownStreamBindingsResult::Data ListDownStreamBindingsResult::getData()const
{
	return data_;
}

int ListDownStreamBindingsResult::getCode()const
{
	return code_;
}

bool ListDownStreamBindingsResult::getSuccess()const
{
	return success_;
}

