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

#include <alibabacloud/ccc/model/ListAgentStateLogsRequest.h>

using AlibabaCloud::CCC::Model::ListAgentStateLogsRequest;

ListAgentStateLogsRequest::ListAgentStateLogsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListAgentStateLogs")
{
	setMethod(HttpRequest::Method::Post);
}

ListAgentStateLogsRequest::~ListAgentStateLogsRequest()
{}

long ListAgentStateLogsRequest::getEndTime()const
{
	return endTime_;
}

void ListAgentStateLogsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long ListAgentStateLogsRequest::getStartTime()const
{
	return startTime_;
}

void ListAgentStateLogsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

long ListAgentStateLogsRequest::getRamId()const
{
	return ramId_;
}

void ListAgentStateLogsRequest::setRamId(long ramId)
{
	ramId_ = ramId;
	setParameter("RamId", std::to_string(ramId));
}

int ListAgentStateLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAgentStateLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListAgentStateLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAgentStateLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListAgentStateLogsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListAgentStateLogsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListAgentStateLogsRequest::getPageSize()const
{
	return pageSize_;
}

void ListAgentStateLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

