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

#include <alibabacloud/ehpc/model/GetHealthMonitorLogsRequest.h>

using AlibabaCloud::EHPC::Model::GetHealthMonitorLogsRequest;

GetHealthMonitorLogsRequest::GetHealthMonitorLogsRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "GetHealthMonitorLogs")
{
	setMethod(HttpRequest::Method::Get);
}

GetHealthMonitorLogsRequest::~GetHealthMonitorLogsRequest()
{}

int GetHealthMonitorLogsRequest::getEndTime()const
{
	return endTime_;
}

void GetHealthMonitorLogsRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string GetHealthMonitorLogsRequest::getClusterId()const
{
	return clusterId_;
}

void GetHealthMonitorLogsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int GetHealthMonitorLogsRequest::getStartTime()const
{
	return startTime_;
}

void GetHealthMonitorLogsRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string GetHealthMonitorLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetHealthMonitorLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool GetHealthMonitorLogsRequest::getEnableReverse()const
{
	return enableReverse_;
}

void GetHealthMonitorLogsRequest::setEnableReverse(bool enableReverse)
{
	enableReverse_ = enableReverse;
	setParameter("EnableReverse", enableReverse ? "true" : "false");
}

std::string GetHealthMonitorLogsRequest::getFilter()const
{
	return filter_;
}

void GetHealthMonitorLogsRequest::setFilter(const std::string& filter)
{
	filter_ = filter;
	setParameter("Filter", filter);
}

