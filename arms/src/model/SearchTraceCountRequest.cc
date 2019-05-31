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

#include <alibabacloud/arms/model/SearchTraceCountRequest.h>

using AlibabaCloud::ARMS::Model::SearchTraceCountRequest;

SearchTraceCountRequest::SearchTraceCountRequest() :
	RpcServiceRequest("arms", "2019-02-19", "SearchTraceCount")
{}

SearchTraceCountRequest::~SearchTraceCountRequest()
{}

std::string SearchTraceCountRequest::getInstanceId()const
{
	return instanceId_;
}

void SearchTraceCountRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string SearchTraceCountRequest::getRegionId()const
{
	return regionId_;
}

void SearchTraceCountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SearchTraceCountRequest::getOperationName()const
{
	return operationName_;
}

void SearchTraceCountRequest::setOperationName(const std::string& operationName)
{
	operationName_ = operationName;
	setCoreParameter("OperationName", operationName);
}

std::string SearchTraceCountRequest::getAppType()const
{
	return appType_;
}

void SearchTraceCountRequest::setAppType(const std::string& appType)
{
	appType_ = appType;
	setCoreParameter("AppType", appType);
}

long SearchTraceCountRequest::getEndTime()const
{
	return endTime_;
}

void SearchTraceCountRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string SearchTraceCountRequest::getServiceName()const
{
	return serviceName_;
}

void SearchTraceCountRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

long SearchTraceCountRequest::getStartTime()const
{
	return startTime_;
}

void SearchTraceCountRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::vector<SearchTraceCountRequest::Tag> SearchTraceCountRequest::getTag()const
{
	return tag_;
}

void SearchTraceCountRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

long SearchTraceCountRequest::getMinDuration()const
{
	return minDuration_;
}

void SearchTraceCountRequest::setMinDuration(long minDuration)
{
	minDuration_ = minDuration;
	setCoreParameter("MinDuration", std::to_string(minDuration));
}

