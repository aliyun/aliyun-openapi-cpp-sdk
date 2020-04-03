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
	RpcServiceRequest("arms", "2019-08-08", "SearchTraces")
{
	setMethod(HttpRequest::Method::Post);
}

SearchTracesRequest::~SearchTracesRequest()
{}

long SearchTracesRequest::getEndTime()const
{
	return endTime_;
}

void SearchTracesRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long SearchTracesRequest::getStartTime()const
{
	return startTime_;
}

void SearchTracesRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

bool SearchTracesRequest::getReverse()const
{
	return reverse_;
}

void SearchTracesRequest::setReverse(bool reverse)
{
	reverse_ = reverse;
	setParameter("Reverse", reverse ? "true" : "false");
}

long SearchTracesRequest::getMinDuration()const
{
	return minDuration_;
}

void SearchTracesRequest::setMinDuration(long minDuration)
{
	minDuration_ = minDuration;
	setParameter("MinDuration", std::to_string(minDuration));
}

std::string SearchTracesRequest::getServiceIp()const
{
	return serviceIp_;
}

void SearchTracesRequest::setServiceIp(const std::string& serviceIp)
{
	serviceIp_ = serviceIp;
	setParameter("ServiceIp", serviceIp);
}

std::string SearchTracesRequest::getRegionId()const
{
	return regionId_;
}

void SearchTracesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SearchTracesRequest::getOperationName()const
{
	return operationName_;
}

void SearchTracesRequest::setOperationName(const std::string& operationName)
{
	operationName_ = operationName;
	setParameter("OperationName", operationName);
}

std::string SearchTracesRequest::getServiceName()const
{
	return serviceName_;
}

void SearchTracesRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

std::vector<SearchTracesRequest::Tag> SearchTracesRequest::getTag()const
{
	return tag_;
}

void SearchTracesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

