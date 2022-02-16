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

#include <alibabacloud/emr/model/ListAutoScalingActivitiesRequest.h>

using AlibabaCloud::Emr::Model::ListAutoScalingActivitiesRequest;

ListAutoScalingActivitiesRequest::ListAutoScalingActivitiesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListAutoScalingActivities")
{
	setMethod(HttpRequest::Method::Post);
}

ListAutoScalingActivitiesRequest::~ListAutoScalingActivitiesRequest()
{}

Array ListAutoScalingActivitiesRequest::getScalingActivityStates()const
{
	return scalingActivityStates_;
}

void ListAutoScalingActivitiesRequest::setScalingActivityStates(const Array& scalingActivityStates)
{
	scalingActivityStates_ = scalingActivityStates;
	setParameter("ScalingActivityStates", std::to_string(scalingActivityStates));
}

std::string ListAutoScalingActivitiesRequest::getClientToken()const
{
	return clientToken_;
}

void ListAutoScalingActivitiesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long ListAutoScalingActivitiesRequest::getStartTime()const
{
	return startTime_;
}

void ListAutoScalingActivitiesRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string ListAutoScalingActivitiesRequest::getScalingActivityType()const
{
	return scalingActivityType_;
}

void ListAutoScalingActivitiesRequest::setScalingActivityType(const std::string& scalingActivityType)
{
	scalingActivityType_ = scalingActivityType;
	setParameter("ScalingActivityType", scalingActivityType);
}

std::string ListAutoScalingActivitiesRequest::getNextToken()const
{
	return nextToken_;
}

void ListAutoScalingActivitiesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListAutoScalingActivitiesRequest::getRegionId()const
{
	return regionId_;
}

void ListAutoScalingActivitiesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long ListAutoScalingActivitiesRequest::getEndTime()const
{
	return endTime_;
}

void ListAutoScalingActivitiesRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string ListAutoScalingActivitiesRequest::getClusterId()const
{
	return clusterId_;
}

void ListAutoScalingActivitiesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListAutoScalingActivitiesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListAutoScalingActivitiesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListAutoScalingActivitiesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListAutoScalingActivitiesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string ListAutoScalingActivitiesRequest::getScalingPolicyId()const
{
	return scalingPolicyId_;
}

void ListAutoScalingActivitiesRequest::setScalingPolicyId(const std::string& scalingPolicyId)
{
	scalingPolicyId_ = scalingPolicyId;
	setParameter("ScalingPolicyId", scalingPolicyId);
}

