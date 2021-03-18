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

#include <alibabacloud/arms/model/ListServerlessTopNAppsRequest.h>

using AlibabaCloud::ARMS::Model::ListServerlessTopNAppsRequest;

ListServerlessTopNAppsRequest::ListServerlessTopNAppsRequest() :
	RpcServiceRequest("arms", "2019-08-08", "ListServerlessTopNApps")
{
	setMethod(HttpRequest::Method::Post);
}

ListServerlessTopNAppsRequest::~ListServerlessTopNAppsRequest()
{}

std::string ListServerlessTopNAppsRequest::getRegionId()const
{
	return regionId_;
}

void ListServerlessTopNAppsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListServerlessTopNAppsRequest::getLimit()const
{
	return limit_;
}

void ListServerlessTopNAppsRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string ListServerlessTopNAppsRequest::getOrderBy()const
{
	return orderBy_;
}

void ListServerlessTopNAppsRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

long ListServerlessTopNAppsRequest::getEndTime()const
{
	return endTime_;
}

void ListServerlessTopNAppsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long ListServerlessTopNAppsRequest::getStartTime()const
{
	return startTime_;
}

void ListServerlessTopNAppsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

