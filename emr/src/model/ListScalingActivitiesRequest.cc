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

#include <alibabacloud/emr/model/ListScalingActivitiesRequest.h>

using AlibabaCloud::Emr::Model::ListScalingActivitiesRequest;

ListScalingActivitiesRequest::ListScalingActivitiesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListScalingActivities")
{
	setMethod(HttpRequest::Method::Post);
}

ListScalingActivitiesRequest::~ListScalingActivitiesRequest()
{}

std::string ListScalingActivitiesRequest::getClientToken()const
{
	return clientToken_;
}

void ListScalingActivitiesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListScalingActivitiesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void ListScalingActivitiesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string ListScalingActivitiesRequest::getHostGroupName()const
{
	return hostGroupName_;
}

void ListScalingActivitiesRequest::setHostGroupName(const std::string& hostGroupName)
{
	hostGroupName_ = hostGroupName;
	setParameter("HostGroupName", hostGroupName);
}

std::string ListScalingActivitiesRequest::getNextToken()const
{
	return nextToken_;
}

void ListScalingActivitiesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListScalingActivitiesRequest::getRegionId()const
{
	return regionId_;
}

void ListScalingActivitiesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListScalingActivitiesRequest::getClusterId()const
{
	return clusterId_;
}

void ListScalingActivitiesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListScalingActivitiesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListScalingActivitiesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListScalingActivitiesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListScalingActivitiesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string ListScalingActivitiesRequest::getStatus()const
{
	return status_;
}

void ListScalingActivitiesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

