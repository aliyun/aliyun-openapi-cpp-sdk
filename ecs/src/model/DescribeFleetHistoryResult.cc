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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFleetHistorysNode = value["FleetHistorys"]["FleetHistory"];
	for (auto valueFleetHistorysFleetHistory : allFleetHistorysNode)
	{
		FleetHistory fleetHistorysObject;
		if(!valueFleetHistorysFleetHistory["TaskId"].isNull())
			fleetHistorysObject.taskId = valueFleetHistorysFleetHistory["TaskId"].asString();
		if(!valueFleetHistorysFleetHistory["Status"].isNull())
			fleetHistorysObject.status = valueFleetHistorysFleetHistory["Status"].asString();
		if(!valueFleetHistorysFleetHistory["LastEventTime"].isNull())
			fleetHistorysObject.lastEventTime = valueFleetHistorysFleetHistory["LastEventTime"].asString();
		if(!valueFleetHistorysFleetHistory["StartTime"].isNull())
			fleetHistorysObject.startTime = valueFleetHistorysFleetHistory["StartTime"].asString();
		auto allActivityDetailsNode = allFleetHistorysNode["ActivityDetails"]["ActivityDetail"];
		for (auto allFleetHistorysNodeActivityDetailsActivityDetail : allActivityDetailsNode)
		{
			FleetHistory::ActivityDetail activityDetailsObject;
			if(!allFleetHistorysNodeActivityDetailsActivityDetail["Detail"].isNull())
				activityDetailsObject.detail = allFleetHistorysNodeActivityDetailsActivityDetail["Detail"].asString();
			if(!allFleetHistorysNodeActivityDetailsActivityDetail["Status"].isNull())
				activityDetailsObject.status = std::stof(allFleetHistorysNodeActivityDetailsActivityDetail["Status"].asString());
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

