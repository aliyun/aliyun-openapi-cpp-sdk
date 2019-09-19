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

#include <alibabacloud/dds/model/DescribeAvailableTimeRangeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeAvailableTimeRangeResult::DescribeAvailableTimeRangeResult() :
	ServiceResult()
{}

DescribeAvailableTimeRangeResult::DescribeAvailableTimeRangeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableTimeRangeResult::~DescribeAvailableTimeRangeResult()
{}

void DescribeAvailableTimeRangeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTimeRangeNode = value["TimeRange"]["TimeRangeItem"];
	for (auto valueTimeRangeTimeRangeItem : allTimeRangeNode)
	{
		TimeRangeItem timeRangeObject;
		if(!valueTimeRangeTimeRangeItem["StartTime"].isNull())
			timeRangeObject.startTime = valueTimeRangeTimeRangeItem["StartTime"].asString();
		if(!valueTimeRangeTimeRangeItem["EndTime"].isNull())
			timeRangeObject.endTime = valueTimeRangeTimeRangeItem["EndTime"].asString();
		if(!valueTimeRangeTimeRangeItem["Status"].isNull())
			timeRangeObject.status = valueTimeRangeTimeRangeItem["Status"].asString();
		if(!valueTimeRangeTimeRangeItem["NodeId"].isNull())
			timeRangeObject.nodeId = valueTimeRangeTimeRangeItem["NodeId"].asString();
		if(!valueTimeRangeTimeRangeItem["TaskId"].isNull())
			timeRangeObject.taskId = valueTimeRangeTimeRangeItem["TaskId"].asString();
		timeRange_.push_back(timeRangeObject);
	}

}

std::vector<DescribeAvailableTimeRangeResult::TimeRangeItem> DescribeAvailableTimeRangeResult::getTimeRange()const
{
	return timeRange_;
}

