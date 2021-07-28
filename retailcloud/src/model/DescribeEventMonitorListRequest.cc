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

#include <alibabacloud/retailcloud/model/DescribeEventMonitorListRequest.h>

using AlibabaCloud::Retailcloud::Model::DescribeEventMonitorListRequest;

DescribeEventMonitorListRequest::DescribeEventMonitorListRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "DescribeEventMonitorList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEventMonitorListRequest::~DescribeEventMonitorListRequest()
{}

std::string DescribeEventMonitorListRequest::getEventLevel()const
{
	return eventLevel_;
}

void DescribeEventMonitorListRequest::setEventLevel(const std::string& eventLevel)
{
	eventLevel_ = eventLevel;
	setParameter("EventLevel", eventLevel);
}

long DescribeEventMonitorListRequest::getAppId()const
{
	return appId_;
}

void DescribeEventMonitorListRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

int DescribeEventMonitorListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEventMonitorListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEventMonitorListRequest::getPodName()const
{
	return podName_;
}

void DescribeEventMonitorListRequest::setPodName(const std::string& podName)
{
	podName_ = podName;
	setParameter("PodName", podName);
}

long DescribeEventMonitorListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeEventMonitorListRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string DescribeEventMonitorListRequest::getEventType()const
{
	return eventType_;
}

void DescribeEventMonitorListRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

long DescribeEventMonitorListRequest::getEnvId()const
{
	return envId_;
}

void DescribeEventMonitorListRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

long DescribeEventMonitorListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeEventMonitorListRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

int DescribeEventMonitorListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeEventMonitorListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

