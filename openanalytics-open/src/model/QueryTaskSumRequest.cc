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

#include <alibabacloud/openanalytics-open/model/QueryTaskSumRequest.h>

using AlibabaCloud::Openanalytics_open::Model::QueryTaskSumRequest;

QueryTaskSumRequest::QueryTaskSumRequest() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "QueryTaskSum")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTaskSumRequest::~QueryTaskSumRequest()
{}

std::string QueryTaskSumRequest::getRegionId()const
{
	return regionId_;
}

void QueryTaskSumRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string QueryTaskSumRequest::getTwoDaysAgoBeginTs()const
{
	return twoDaysAgoBeginTs_;
}

void QueryTaskSumRequest::setTwoDaysAgoBeginTs(const std::string& twoDaysAgoBeginTs)
{
	twoDaysAgoBeginTs_ = twoDaysAgoBeginTs;
	setBodyParameter("TwoDaysAgoBeginTs", twoDaysAgoBeginTs);
}

std::string QueryTaskSumRequest::getYesterdayBeginTs()const
{
	return yesterdayBeginTs_;
}

void QueryTaskSumRequest::setYesterdayBeginTs(const std::string& yesterdayBeginTs)
{
	yesterdayBeginTs_ = yesterdayBeginTs;
	setBodyParameter("YesterdayBeginTs", yesterdayBeginTs);
}

std::string QueryTaskSumRequest::getTodayBeginTs()const
{
	return todayBeginTs_;
}

void QueryTaskSumRequest::setTodayBeginTs(const std::string& todayBeginTs)
{
	todayBeginTs_ = todayBeginTs;
	setBodyParameter("TodayBeginTs", todayBeginTs);
}

