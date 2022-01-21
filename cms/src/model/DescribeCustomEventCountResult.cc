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

#include <alibabacloud/cms/model/DescribeCustomEventCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeCustomEventCountResult::DescribeCustomEventCountResult() :
	ServiceResult()
{}

DescribeCustomEventCountResult::DescribeCustomEventCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomEventCountResult::~DescribeCustomEventCountResult()
{}

void DescribeCustomEventCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCustomEventCountsNode = value["CustomEventCounts"]["CustomEventCount"];
	for (auto valueCustomEventCountsCustomEventCount : allCustomEventCountsNode)
	{
		CustomEventCount customEventCountsObject;
		if(!valueCustomEventCountsCustomEventCount["Time"].isNull())
			customEventCountsObject.time = std::stol(valueCustomEventCountsCustomEventCount["Time"].asString());
		if(!valueCustomEventCountsCustomEventCount["Num"].isNull())
			customEventCountsObject.num = std::stoi(valueCustomEventCountsCustomEventCount["Num"].asString());
		if(!valueCustomEventCountsCustomEventCount["Name"].isNull())
			customEventCountsObject.name = valueCustomEventCountsCustomEventCount["Name"].asString();
		customEventCounts_.push_back(customEventCountsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeCustomEventCountResult::CustomEventCount> DescribeCustomEventCountResult::getCustomEventCounts()const
{
	return customEventCounts_;
}

std::string DescribeCustomEventCountResult::getMessage()const
{
	return message_;
}

std::string DescribeCustomEventCountResult::getCode()const
{
	return code_;
}

bool DescribeCustomEventCountResult::getSuccess()const
{
	return success_;
}

