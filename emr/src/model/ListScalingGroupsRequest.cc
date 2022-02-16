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

#include <alibabacloud/emr/model/ListScalingGroupsRequest.h>

using AlibabaCloud::Emr::Model::ListScalingGroupsRequest;

ListScalingGroupsRequest::ListScalingGroupsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListScalingGroups")
{
	setMethod(HttpRequest::Method::Post);
}

ListScalingGroupsRequest::~ListScalingGroupsRequest()
{}

std::string ListScalingGroupsRequest::getClientToken()const
{
	return clientToken_;
}

void ListScalingGroupsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListScalingGroupsRequest::getNextToken()const
{
	return nextToken_;
}

void ListScalingGroupsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListScalingGroupsRequest::getRegionId()const
{
	return regionId_;
}

void ListScalingGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListScalingGroupsRequest::getClusterId()const
{
	return clusterId_;
}

void ListScalingGroupsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListScalingGroupsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListScalingGroupsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListScalingGroupsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListScalingGroupsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

