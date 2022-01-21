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

#include <alibabacloud/cms/model/DescribeSystemEventAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeSystemEventAttributeResult::DescribeSystemEventAttributeResult() :
	ServiceResult()
{}

DescribeSystemEventAttributeResult::DescribeSystemEventAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSystemEventAttributeResult::~DescribeSystemEventAttributeResult()
{}

void DescribeSystemEventAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSystemEventsNode = value["SystemEvents"]["SystemEvent"];
	for (auto valueSystemEventsSystemEvent : allSystemEventsNode)
	{
		SystemEvent systemEventsObject;
		if(!valueSystemEventsSystemEvent["Status"].isNull())
			systemEventsObject.status = valueSystemEventsSystemEvent["Status"].asString();
		if(!valueSystemEventsSystemEvent["Time"].isNull())
			systemEventsObject.time = std::stol(valueSystemEventsSystemEvent["Time"].asString());
		if(!valueSystemEventsSystemEvent["GroupId"].isNull())
			systemEventsObject.groupId = valueSystemEventsSystemEvent["GroupId"].asString();
		if(!valueSystemEventsSystemEvent["Product"].isNull())
			systemEventsObject.product = valueSystemEventsSystemEvent["Product"].asString();
		if(!valueSystemEventsSystemEvent["InstanceName"].isNull())
			systemEventsObject.instanceName = valueSystemEventsSystemEvent["InstanceName"].asString();
		if(!valueSystemEventsSystemEvent["ResourceId"].isNull())
			systemEventsObject.resourceId = valueSystemEventsSystemEvent["ResourceId"].asString();
		if(!valueSystemEventsSystemEvent["Name"].isNull())
			systemEventsObject.name = valueSystemEventsSystemEvent["Name"].asString();
		if(!valueSystemEventsSystemEvent["Content"].isNull())
			systemEventsObject.content = valueSystemEventsSystemEvent["Content"].asString();
		if(!valueSystemEventsSystemEvent["Level"].isNull())
			systemEventsObject.level = valueSystemEventsSystemEvent["Level"].asString();
		if(!valueSystemEventsSystemEvent["RegionId"].isNull())
			systemEventsObject.regionId = valueSystemEventsSystemEvent["RegionId"].asString();
		systemEvents_.push_back(systemEventsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::vector<DescribeSystemEventAttributeResult::SystemEvent> DescribeSystemEventAttributeResult::getSystemEvents()const
{
	return systemEvents_;
}

std::string DescribeSystemEventAttributeResult::getMessage()const
{
	return message_;
}

std::string DescribeSystemEventAttributeResult::getCode()const
{
	return code_;
}

std::string DescribeSystemEventAttributeResult::getSuccess()const
{
	return success_;
}

