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

#include <alibabacloud/ccc/model/GetAgentDataRequest.h>

using AlibabaCloud::CCC::Model::GetAgentDataRequest;

GetAgentDataRequest::GetAgentDataRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetAgentData")
{}

GetAgentDataRequest::~GetAgentDataRequest()
{}

std::string GetAgentDataRequest::getInstanceId()const
{
	return instanceId_;
}

void GetAgentDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string GetAgentDataRequest::getStartDay()const
{
	return startDay_;
}

void GetAgentDataRequest::setStartDay(const std::string& startDay)
{
	startDay_ = startDay;
	setCoreParameter("StartDay", std::to_string(startDay));
}

std::string GetAgentDataRequest::getEndDay()const
{
	return endDay_;
}

void GetAgentDataRequest::setEndDay(const std::string& endDay)
{
	endDay_ = endDay;
	setCoreParameter("EndDay", std::to_string(endDay));
}

int GetAgentDataRequest::getPageSize()const
{
	return pageSize_;
}

void GetAgentDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string GetAgentDataRequest::getUserId()const
{
	return userId_;
}

void GetAgentDataRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", std::to_string(userId));
}

int GetAgentDataRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetAgentDataRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string GetAgentDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAgentDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

