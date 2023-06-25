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

#include <alibabacloud/ddosbgp/model/DescribeOnDemandDdosEventResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddosbgp;
using namespace AlibabaCloud::Ddosbgp::Model;

DescribeOnDemandDdosEventResult::DescribeOnDemandDdosEventResult() :
	ServiceResult()
{}

DescribeOnDemandDdosEventResult::DescribeOnDemandDdosEventResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOnDemandDdosEventResult::~DescribeOnDemandDdosEventResult()
{}

void DescribeOnDemandDdosEventResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventsNode = value["Events"]["Event"];
	for (auto valueEventsEvent : allEventsNode)
	{
		Event eventsObject;
		if(!valueEventsEvent["EndTime"].isNull())
			eventsObject.endTime = std::stoi(valueEventsEvent["EndTime"].asString());
		if(!valueEventsEvent["Status"].isNull())
			eventsObject.status = valueEventsEvent["Status"].asString();
		if(!valueEventsEvent["StartTime"].isNull())
			eventsObject.startTime = std::stoi(valueEventsEvent["StartTime"].asString());
		if(!valueEventsEvent["Mbps"].isNull())
			eventsObject.mbps = std::stoi(valueEventsEvent["Mbps"].asString());
		if(!valueEventsEvent["Ip"].isNull())
			eventsObject.ip = valueEventsEvent["Ip"].asString();
		if(!valueEventsEvent["Pps"].isNull())
			eventsObject.pps = std::stoi(valueEventsEvent["Pps"].asString());
		events_.push_back(eventsObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<DescribeOnDemandDdosEventResult::Event> DescribeOnDemandDdosEventResult::getEvents()const
{
	return events_;
}

long DescribeOnDemandDdosEventResult::getTotal()const
{
	return total_;
}

