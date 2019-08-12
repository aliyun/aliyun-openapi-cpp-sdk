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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTimeRange = value["TimeRange"]["TimeRangeItem"];
	for (auto value : allTimeRange)
	{
		TimeRangeItem timeRangeObject;
		if(!value["StartTime"].isNull())
			timeRangeObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			timeRangeObject.endTime = value["EndTime"].asString();
		if(!value["Status"].isNull())
			timeRangeObject.status = value["Status"].asString();
		if(!value["NodeId"].isNull())
			timeRangeObject.nodeId = value["NodeId"].asString();
		if(!value["TaskId"].isNull())
			timeRangeObject.taskId = value["TaskId"].asString();
		timeRange_.push_back(timeRangeObject);
	}

}

std::vector<DescribeAvailableTimeRangeResult::TimeRangeItem> DescribeAvailableTimeRangeResult::getTimeRange()const
{
	return timeRange_;
}

