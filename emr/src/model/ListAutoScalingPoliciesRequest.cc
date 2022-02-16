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

#include <alibabacloud/emr/model/ListAutoScalingPoliciesRequest.h>

using AlibabaCloud::Emr::Model::ListAutoScalingPoliciesRequest;

ListAutoScalingPoliciesRequest::ListAutoScalingPoliciesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListAutoScalingPolicies")
{
	setMethod(HttpRequest::Method::Post);
}

ListAutoScalingPoliciesRequest::~ListAutoScalingPoliciesRequest()
{}

std::string ListAutoScalingPoliciesRequest::getScalingPolicyState()const
{
	return scalingPolicyState_;
}

void ListAutoScalingPoliciesRequest::setScalingPolicyState(const std::string& scalingPolicyState)
{
	scalingPolicyState_ = scalingPolicyState;
	setParameter("ScalingPolicyState", scalingPolicyState);
}

std::string ListAutoScalingPoliciesRequest::getClientToken()const
{
	return clientToken_;
}

void ListAutoScalingPoliciesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListAutoScalingPoliciesRequest::getNextToken()const
{
	return nextToken_;
}

void ListAutoScalingPoliciesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListAutoScalingPoliciesRequest::getRegionId()const
{
	return regionId_;
}

void ListAutoScalingPoliciesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListAutoScalingPoliciesRequest::getClusterId()const
{
	return clusterId_;
}

void ListAutoScalingPoliciesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListAutoScalingPoliciesRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void ListAutoScalingPoliciesRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

int ListAutoScalingPoliciesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListAutoScalingPoliciesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListAutoScalingPoliciesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListAutoScalingPoliciesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

