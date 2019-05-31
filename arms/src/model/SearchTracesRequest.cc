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

#include <alibabacloud/arms/model/SearchTracesRequest.h>

using AlibabaCloud::ARMS::Model::SearchTracesRequest;

SearchTracesRequest::SearchTracesRequest() :
	RpcServiceRequest("arms", "2019-02-19", "SearchTraces")
{}

SearchTracesRequest::~SearchTracesRequest()
{}

std::string SearchTracesRequest::getServiceIp()const
{
	return serviceIp_;
}

void SearchTracesRequest::setServiceIp(const std::string& serviceIp)
{
	serviceIp_ = serviceIp;
	setCoreParameter("ServiceIp", serviceIp);
}

std::string SearchTracesRequest::getRegionId()const
{
	return regionId_;
}

void SearchTracesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SearchTracesRequest::getOperationName()const
{
	return operationName_;
}

void SearchTracesRequest::setOperationName(const std::string& operationName)
{
	operationName_ = operationName;
	setCoreParameter("OperationName", operationName);
}

std::string SearchTracesRequest::getAppType()const
{
	return appType_;
}

void SearchTracesRequest::setAppType(const std::string& appType)
{
	appType_ = appType;
	setCoreParameter("AppType", appType);
}

int SearchTracesRequest::getPageSize()const
{
	return pageSize_;
}

void SearchTracesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long SearchTracesRequest::getEndTime()const
{
	return endTime_;
}

void SearchTracesRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string SearchTracesRequest::getServiceName()const
{
	return serviceName_;
}

void SearchTracesRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

int SearchTracesRequest::getPageIndex()const
{
	return pageIndex_;
}

void SearchTracesRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

long SearchTracesRequest::getStartTime()const
{
	return startTime_;
}

void SearchTracesRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::vector<SearchTracesRequest::Tag> SearchTracesRequest::getTag()const
{
	return tag_;
}

void SearchTracesRequest::setTag(const std::vector<Tag>& tag)
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

bool SearchTracesRequest::getReverse()const
{
	return reverse_;
}

void SearchTracesRequest::setReverse(bool reverse)
{
	reverse_ = reverse;
	setCoreParameter("Reverse", reverse ? "true" : "false");
}

long SearchTracesRequest::getMinDuration()const
{
	return minDuration_;
}

void SearchTracesRequest::setMinDuration(long minDuration)
{
	minDuration_ = minDuration;
	setCoreParameter("MinDuration", std::to_string(minDuration));
}

