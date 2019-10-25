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

#include <alibabacloud/aliyuncvc/model/QueryStatisticsRequest.h>

using AlibabaCloud::Aliyuncvc::Model::QueryStatisticsRequest;

QueryStatisticsRequest::QueryStatisticsRequest() :
	RpcServiceRequest("aliyuncvc", "2019-09-19", "QueryStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

QueryStatisticsRequest::~QueryStatisticsRequest()
{}

std::string QueryStatisticsRequest::getEndTime()const
{
	return endTime_;
}

void QueryStatisticsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string QueryStatisticsRequest::getStartTime()const
{
	return startTime_;
}

void QueryStatisticsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

