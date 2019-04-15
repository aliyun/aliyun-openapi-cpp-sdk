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

#include <alibabacloud/aegis/model/QueryLoginEventRequest.h>

using AlibabaCloud::Aegis::Model::QueryLoginEventRequest;

QueryLoginEventRequest::QueryLoginEventRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "QueryLoginEvent")
{}

QueryLoginEventRequest::~QueryLoginEventRequest()
{}

std::string QueryLoginEventRequest::getEndTime()const
{
	return endTime_;
}

void QueryLoginEventRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

int QueryLoginEventRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryLoginEventRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryLoginEventRequest::getStartTime()const
{
	return startTime_;
}

void QueryLoginEventRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string QueryLoginEventRequest::getUuid()const
{
	return uuid_;
}

void QueryLoginEventRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

int QueryLoginEventRequest::getStatus()const
{
	return status_;
}

void QueryLoginEventRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

