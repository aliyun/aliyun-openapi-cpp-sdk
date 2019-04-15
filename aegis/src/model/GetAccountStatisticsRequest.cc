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

#include <alibabacloud/aegis/model/GetAccountStatisticsRequest.h>

using AlibabaCloud::Aegis::Model::GetAccountStatisticsRequest;

GetAccountStatisticsRequest::GetAccountStatisticsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "GetAccountStatistics")
{}

GetAccountStatisticsRequest::~GetAccountStatisticsRequest()
{}

std::string GetAccountStatisticsRequest::getEndTime()const
{
	return endTime_;
}

void GetAccountStatisticsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string GetAccountStatisticsRequest::getStartTime()const
{
	return startTime_;
}

void GetAccountStatisticsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

