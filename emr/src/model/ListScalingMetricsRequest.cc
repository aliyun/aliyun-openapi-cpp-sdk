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

#include <alibabacloud/emr/model/ListScalingMetricsRequest.h>

using AlibabaCloud::Emr::Model::ListScalingMetricsRequest;

ListScalingMetricsRequest::ListScalingMetricsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListScalingMetrics")
{
	setMethod(HttpRequest::Method::Post);
}

ListScalingMetricsRequest::~ListScalingMetricsRequest()
{}

std::string ListScalingMetricsRequest::getClientToken()const
{
	return clientToken_;
}

void ListScalingMetricsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListScalingMetricsRequest::getNextToken()const
{
	return nextToken_;
}

void ListScalingMetricsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListScalingMetricsRequest::getRegionId()const
{
	return regionId_;
}

void ListScalingMetricsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListScalingMetricsRequest::getClusterId()const
{
	return clusterId_;
}

void ListScalingMetricsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListScalingMetricsRequest::getMaxResults()const
{
	return maxResults_;
}

void ListScalingMetricsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListScalingMetricsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListScalingMetricsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

