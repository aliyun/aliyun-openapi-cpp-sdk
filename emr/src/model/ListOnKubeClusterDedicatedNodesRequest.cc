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

#include <alibabacloud/emr/model/ListOnKubeClusterDedicatedNodesRequest.h>

using AlibabaCloud::Emr::Model::ListOnKubeClusterDedicatedNodesRequest;

ListOnKubeClusterDedicatedNodesRequest::ListOnKubeClusterDedicatedNodesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListOnKubeClusterDedicatedNodes")
{
	setMethod(HttpRequest::Method::Get);
}

ListOnKubeClusterDedicatedNodesRequest::~ListOnKubeClusterDedicatedNodesRequest()
{}

std::string ListOnKubeClusterDedicatedNodesRequest::getClientToken()const
{
	return clientToken_;
}

void ListOnKubeClusterDedicatedNodesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListOnKubeClusterDedicatedNodesRequest::getNextToken()const
{
	return nextToken_;
}

void ListOnKubeClusterDedicatedNodesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListOnKubeClusterDedicatedNodesRequest::getRegionId()const
{
	return regionId_;
}

void ListOnKubeClusterDedicatedNodesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListOnKubeClusterDedicatedNodesRequest::getAckClusterId()const
{
	return ackClusterId_;
}

void ListOnKubeClusterDedicatedNodesRequest::setAckClusterId(const std::string& ackClusterId)
{
	ackClusterId_ = ackClusterId;
	setParameter("AckClusterId", ackClusterId);
}

std::string ListOnKubeClusterDedicatedNodesRequest::getClusterType()const
{
	return clusterType_;
}

void ListOnKubeClusterDedicatedNodesRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

int ListOnKubeClusterDedicatedNodesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListOnKubeClusterDedicatedNodesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

Array ListOnKubeClusterDedicatedNodesRequest::getDedicatedNodePools()const
{
	return dedicatedNodePools_;
}

void ListOnKubeClusterDedicatedNodesRequest::setDedicatedNodePools(const Array& dedicatedNodePools)
{
	dedicatedNodePools_ = dedicatedNodePools;
	setParameter("DedicatedNodePools", std::to_string(dedicatedNodePools));
}

std::string ListOnKubeClusterDedicatedNodesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListOnKubeClusterDedicatedNodesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

