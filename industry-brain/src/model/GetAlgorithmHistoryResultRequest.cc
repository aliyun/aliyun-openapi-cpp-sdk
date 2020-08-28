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

#include <alibabacloud/industry-brain/model/GetAlgorithmHistoryResultRequest.h>

using AlibabaCloud::Industry_brain::Model::GetAlgorithmHistoryResultRequest;

GetAlgorithmHistoryResultRequest::GetAlgorithmHistoryResultRequest() :
	RpcServiceRequest("industry-brain", "2019-06-29", "GetAlgorithmHistoryResult")
{
	setMethod(HttpRequest::Method::Get);
}

GetAlgorithmHistoryResultRequest::~GetAlgorithmHistoryResultRequest()
{}

std::string GetAlgorithmHistoryResultRequest::getEndTime()const
{
	return endTime_;
}

void GetAlgorithmHistoryResultRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string GetAlgorithmHistoryResultRequest::getStartTime()const
{
	return startTime_;
}

void GetAlgorithmHistoryResultRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string GetAlgorithmHistoryResultRequest::getServiceId()const
{
	return serviceId_;
}

void GetAlgorithmHistoryResultRequest::setServiceId(const std::string& serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", serviceId);
}

