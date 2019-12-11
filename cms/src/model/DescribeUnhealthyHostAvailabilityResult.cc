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

#include <alibabacloud/cms/model/DescribeUnhealthyHostAvailabilityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeUnhealthyHostAvailabilityResult::DescribeUnhealthyHostAvailabilityResult() :
	ServiceResult()
{}

DescribeUnhealthyHostAvailabilityResult::DescribeUnhealthyHostAvailabilityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUnhealthyHostAvailabilityResult::~DescribeUnhealthyHostAvailabilityResult()
{}

void DescribeUnhealthyHostAvailabilityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUnhealthyListNode = value["UnhealthyList"]["NodeTaskInstance"];
	for (auto valueUnhealthyListNodeTaskInstance : allUnhealthyListNode)
	{
		NodeTaskInstance unhealthyListObject;
		if(!valueUnhealthyListNodeTaskInstance["Id"].isNull())
			unhealthyListObject.id = std::stol(valueUnhealthyListNodeTaskInstance["Id"].asString());
		auto allInstanceList = value["InstanceList"]["String"];
		for (auto value : allInstanceList)
			unhealthyListObject.instanceList.push_back(value.asString());
		unhealthyList_.push_back(unhealthyListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeUnhealthyHostAvailabilityResult::getMessage()const
{
	return message_;
}

std::string DescribeUnhealthyHostAvailabilityResult::getCode()const
{
	return code_;
}

bool DescribeUnhealthyHostAvailabilityResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeUnhealthyHostAvailabilityResult::NodeTaskInstance> DescribeUnhealthyHostAvailabilityResult::getUnhealthyList()const
{
	return unhealthyList_;
}

