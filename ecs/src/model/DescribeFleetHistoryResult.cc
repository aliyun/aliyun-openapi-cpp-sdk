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

#include <alibabacloud/ecs/model/DescribeFleetHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeFleetHistoryResult::DescribeFleetHistoryResult() :
	ServiceResult()
{}

DescribeFleetHistoryResult::DescribeFleetHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFleetHistoryResult::~DescribeFleetHistoryResult()
{}

void DescribeFleetHistoryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allFleetHistorys = value["FleetHistorys"]["FleetHistory"];
	for (auto value : allFleetHistorys)
	{
		FleetHistory fleetHistorysObject;
		if(!value["TaskId"].isNull())
			fleetHistorysObject.taskId = value["TaskId"].asString();
		if(!value["Status"].isNull())
			fleetHistorysObject.status = value["Status"].asString();
		if(!value["LastEventTime"].isNull())
			fleetHistorysObject.lastEventTime = value["LastEventTime"].asString();
		if(!value["StartTime"].isNull())
			fleetHistorysObject.startTime = value["StartTime"].asString();
		auto allActivityDetails = value["ActivityDetails"]["ActivityDetail"];
		for (auto value : allActivityDetails)
		{
			FleetHistory::ActivityDetail activityDetailsObject;
			if(!value["Detail"].isNull())
				activityDetailsObject.detail = value["Detail"].asString();
			if(!value["Status"].isNull())
				activityDetailsObject.status = std::stof(value["Status"].asString());
			fleetHistorysObject.activityDetails.push_back(activityDetailsObject);
		}
		fleetHistorys_.push_back(fleetHistorysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeFleetHistoryResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeFleetHistoryResult::getPageSize()const
{
	return pageSize_;
}

int DescribeFleetHistoryResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeFleetHistoryResult::FleetHistory> DescribeFleetHistoryResult::getFleetHistorys()const
{
	return fleetHistorys_;
}

