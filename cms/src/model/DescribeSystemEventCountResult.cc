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

#include <alibabacloud/cms/model/DescribeSystemEventCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeSystemEventCountResult::DescribeSystemEventCountResult() :
	ServiceResult()
{}

DescribeSystemEventCountResult::DescribeSystemEventCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSystemEventCountResult::~DescribeSystemEventCountResult()
{}

void DescribeSystemEventCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSystemEventCountsNode = value["SystemEventCounts"]["SystemEventCount"];
	for (auto valueSystemEventCountsSystemEventCount : allSystemEventCountsNode)
	{
		SystemEventCount systemEventCountsObject;
		if(!valueSystemEventCountsSystemEventCount["Status"].isNull())
			systemEventCountsObject.status = valueSystemEventCountsSystemEventCount["Status"].asString();
		if(!valueSystemEventCountsSystemEventCount["Time"].isNull())
			systemEventCountsObject.time = std::stol(valueSystemEventCountsSystemEventCount["Time"].asString());
		if(!valueSystemEventCountsSystemEventCount["GroupId"].isNull())
			systemEventCountsObject.groupId = valueSystemEventCountsSystemEventCount["GroupId"].asString();
		if(!valueSystemEventCountsSystemEventCount["Product"].isNull())
			systemEventCountsObject.product = valueSystemEventCountsSystemEventCount["Product"].asString();
		if(!valueSystemEventCountsSystemEventCount["InstanceName"].isNull())
			systemEventCountsObject.instanceName = valueSystemEventCountsSystemEventCount["InstanceName"].asString();
		if(!valueSystemEventCountsSystemEventCount["Num"].isNull())
			systemEventCountsObject.num = std::stol(valueSystemEventCountsSystemEventCount["Num"].asString());
		if(!valueSystemEventCountsSystemEventCount["ResourceId"].isNull())
			systemEventCountsObject.resourceId = valueSystemEventCountsSystemEventCount["ResourceId"].asString();
		if(!valueSystemEventCountsSystemEventCount["Name"].isNull())
			systemEventCountsObject.name = valueSystemEventCountsSystemEventCount["Name"].asString();
		if(!valueSystemEventCountsSystemEventCount["Content"].isNull())
			systemEventCountsObject.content = valueSystemEventCountsSystemEventCount["Content"].asString();
		if(!valueSystemEventCountsSystemEventCount["Level"].isNull())
			systemEventCountsObject.level = valueSystemEventCountsSystemEventCount["Level"].asString();
		if(!valueSystemEventCountsSystemEventCount["RegionId"].isNull())
			systemEventCountsObject.regionId = valueSystemEventCountsSystemEventCount["RegionId"].asString();
		systemEventCounts_.push_back(systemEventCountsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string DescribeSystemEventCountResult::getMessage()const
{
	return message_;
}

std::vector<DescribeSystemEventCountResult::SystemEventCount> DescribeSystemEventCountResult::getSystemEventCounts()const
{
	return systemEventCounts_;
}

std::string DescribeSystemEventCountResult::getCode()const
{
	return code_;
}

std::string DescribeSystemEventCountResult::getSuccess()const
{
	return success_;
}

