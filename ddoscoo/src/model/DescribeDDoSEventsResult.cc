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

#include <alibabacloud/ddoscoo/model/DescribeDDoSEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDDoSEventsResult::DescribeDDoSEventsResult() :
	ServiceResult()
{}

DescribeDDoSEventsResult::DescribeDDoSEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDDoSEventsResult::~DescribeDDoSEventsResult()
{}

void DescribeDDoSEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDDoSEventsNode = value["DDoSEvents"]["Data"];
	for (auto valueDDoSEventsData : allDDoSEventsNode)
	{
		Data dDoSEventsObject;
		if(!valueDDoSEventsData["EndTime"].isNull())
			dDoSEventsObject.endTime = std::stol(valueDDoSEventsData["EndTime"].asString());
		if(!valueDDoSEventsData["StartTime"].isNull())
			dDoSEventsObject.startTime = std::stol(valueDDoSEventsData["StartTime"].asString());
		if(!valueDDoSEventsData["EventType"].isNull())
			dDoSEventsObject.eventType = valueDDoSEventsData["EventType"].asString();
		if(!valueDDoSEventsData["Region"].isNull())
			dDoSEventsObject.region = valueDDoSEventsData["Region"].asString();
		if(!valueDDoSEventsData["Ip"].isNull())
			dDoSEventsObject.ip = valueDDoSEventsData["Ip"].asString();
		if(!valueDDoSEventsData["Port"].isNull())
			dDoSEventsObject.port = valueDDoSEventsData["Port"].asString();
		if(!valueDDoSEventsData["Bps"].isNull())
			dDoSEventsObject.bps = std::stol(valueDDoSEventsData["Bps"].asString());
		if(!valueDDoSEventsData["Pps"].isNull())
			dDoSEventsObject.pps = std::stol(valueDDoSEventsData["Pps"].asString());
		dDoSEvents_.push_back(dDoSEventsObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DescribeDDoSEventsResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDDoSEventsResult::Data> DescribeDDoSEventsResult::getDDoSEvents()const
{
	return dDoSEvents_;
}

