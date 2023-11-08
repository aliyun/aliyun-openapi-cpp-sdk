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

#include <alibabacloud/amqp-open/model/ListBindingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Amqp_open;
using namespace AlibabaCloud::Amqp_open::Model;

ListBindingsResult::ListBindingsResult() :
	ServiceResult()
{}

ListBindingsResult::ListBindingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBindingsResult::~ListBindingsResult()
{}

void ListBindingsResult::parse(const std::string &payload)
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
	auto allBindingsNode = dataNode["Bindings"]["BindingDO"];
	for (auto dataNodeBindingsBindingDO : allBindingsNode)
	{
		Data::BindingDO bindingDOObject;
		if(!dataNodeBindingsBindingDO["SourceExchange"].isNull())
			bindingDOObject.sourceExchange = dataNodeBindingsBindingDO["SourceExchange"].asString();
		if(!dataNodeBindingsBindingDO["Argument"].isNull())
			bindingDOObject.argument = dataNodeBindingsBindingDO["Argument"].asString();
		if(!dataNodeBindingsBindingDO["BindingKey"].isNull())
			bindingDOObject.bindingKey = dataNodeBindingsBindingDO["BindingKey"].asString();
		if(!dataNodeBindingsBindingDO["BindingType"].isNull())
			bindingDOObject.bindingType = dataNodeBindingsBindingDO["BindingType"].asString();
		if(!dataNodeBindingsBindingDO["DestinationName"].isNull())
			bindingDOObject.destinationName = dataNodeBindingsBindingDO["DestinationName"].asString();
		data_.bindings.push_back(bindingDOObject);
	}

}

ListBindingsResult::Data ListBindingsResult::getData()const
{
	return data_;
}

