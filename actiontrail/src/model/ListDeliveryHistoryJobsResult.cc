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

#include <alibabacloud/actiontrail/model/ListDeliveryHistoryJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

ListDeliveryHistoryJobsResult::ListDeliveryHistoryJobsResult() :
	ServiceResult()
{}

ListDeliveryHistoryJobsResult::ListDeliveryHistoryJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeliveryHistoryJobsResult::~ListDeliveryHistoryJobsResult()
{}

void ListDeliveryHistoryJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeliveryHistoryJobsNode = value["DeliveryHistoryJobs"]["DeliveryHistoryJob"];
	for (auto valueDeliveryHistoryJobsDeliveryHistoryJob : allDeliveryHistoryJobsNode)
	{
		DeliveryHistoryJob deliveryHistoryJobsObject;
		if(!valueDeliveryHistoryJobsDeliveryHistoryJob["TrailName"].isNull())
			deliveryHistoryJobsObject.trailName = valueDeliveryHistoryJobsDeliveryHistoryJob["TrailName"].asString();
		if(!valueDeliveryHistoryJobsDeliveryHistoryJob["EndTime"].isNull())
			deliveryHistoryJobsObject.endTime = valueDeliveryHistoryJobsDeliveryHistoryJob["EndTime"].asString();
		if(!valueDeliveryHistoryJobsDeliveryHistoryJob["StartTime"].isNull())
			deliveryHistoryJobsObject.startTime = valueDeliveryHistoryJobsDeliveryHistoryJob["StartTime"].asString();
		if(!valueDeliveryHistoryJobsDeliveryHistoryJob["JobStatus"].isNull())
			deliveryHistoryJobsObject.jobStatus = std::stoi(valueDeliveryHistoryJobsDeliveryHistoryJob["JobStatus"].asString());
		if(!valueDeliveryHistoryJobsDeliveryHistoryJob["HomeRegion"].isNull())
			deliveryHistoryJobsObject.homeRegion = valueDeliveryHistoryJobsDeliveryHistoryJob["HomeRegion"].asString();
		if(!valueDeliveryHistoryJobsDeliveryHistoryJob["UpdatedTime"].isNull())
			deliveryHistoryJobsObject.updatedTime = valueDeliveryHistoryJobsDeliveryHistoryJob["UpdatedTime"].asString();
		if(!valueDeliveryHistoryJobsDeliveryHistoryJob["JobId"].isNull())
			deliveryHistoryJobsObject.jobId = std::stol(valueDeliveryHistoryJobsDeliveryHistoryJob["JobId"].asString());
		if(!valueDeliveryHistoryJobsDeliveryHistoryJob["CreatedTime"].isNull())
			deliveryHistoryJobsObject.createdTime = valueDeliveryHistoryJobsDeliveryHistoryJob["CreatedTime"].asString();
		deliveryHistoryJobs_.push_back(deliveryHistoryJobsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListDeliveryHistoryJobsResult::getTotalCount()const
{
	return totalCount_;
}

int ListDeliveryHistoryJobsResult::getPageSize()const
{
	return pageSize_;
}

int ListDeliveryHistoryJobsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListDeliveryHistoryJobsResult::DeliveryHistoryJob> ListDeliveryHistoryJobsResult::getDeliveryHistoryJobs()const
{
	return deliveryHistoryJobs_;
}

