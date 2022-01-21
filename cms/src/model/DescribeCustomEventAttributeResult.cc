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

#include <alibabacloud/cms/model/DescribeCustomEventAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeCustomEventAttributeResult::DescribeCustomEventAttributeResult() :
	ServiceResult()
{}

DescribeCustomEventAttributeResult::DescribeCustomEventAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomEventAttributeResult::~DescribeCustomEventAttributeResult()
{}

void DescribeCustomEventAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCustomEventsNode = value["CustomEvents"]["CustomEvent"];
	for (auto valueCustomEventsCustomEvent : allCustomEventsNode)
	{
		CustomEvent customEventsObject;
		if(!valueCustomEventsCustomEvent["Time"].isNull())
			customEventsObject.time = valueCustomEventsCustomEvent["Time"].asString();
		if(!valueCustomEventsCustomEvent["Name"].isNull())
			customEventsObject.name = valueCustomEventsCustomEvent["Name"].asString();
		if(!valueCustomEventsCustomEvent["GroupId"].isNull())
			customEventsObject.groupId = valueCustomEventsCustomEvent["GroupId"].asString();
		if(!valueCustomEventsCustomEvent["Content"].isNull())
			customEventsObject.content = valueCustomEventsCustomEvent["Content"].asString();
		if(!valueCustomEventsCustomEvent["Id"].isNull())
			customEventsObject.id = valueCustomEventsCustomEvent["Id"].asString();
		customEvents_.push_back(customEventsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::vector<DescribeCustomEventAttributeResult::CustomEvent> DescribeCustomEventAttributeResult::getCustomEvents()const
{
	return customEvents_;
}

std::string DescribeCustomEventAttributeResult::getMessage()const
{
	return message_;
}

std::string DescribeCustomEventAttributeResult::getCode()const
{
	return code_;
}

std::string DescribeCustomEventAttributeResult::getSuccess()const
{
	return success_;
}

