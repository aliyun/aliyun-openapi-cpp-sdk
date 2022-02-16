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

#include <alibabacloud/emr/model/UpdateOnKubeClusterDedicatedNodesRequest.h>

using AlibabaCloud::Emr::Model::UpdateOnKubeClusterDedicatedNodesRequest;

UpdateOnKubeClusterDedicatedNodesRequest::UpdateOnKubeClusterDedicatedNodesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "UpdateOnKubeClusterDedicatedNodes")
{
	setMethod(HttpRequest::Method::Get);
}

UpdateOnKubeClusterDedicatedNodesRequest::~UpdateOnKubeClusterDedicatedNodesRequest()
{}

std::string UpdateOnKubeClusterDedicatedNodesRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateOnKubeClusterDedicatedNodesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdateOnKubeClusterDedicatedNodesRequest::getNextToken()const
{
	return nextToken_;
}

void UpdateOnKubeClusterDedicatedNodesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string UpdateOnKubeClusterDedicatedNodesRequest::getRegionId()const
{
	return regionId_;
}

void UpdateOnKubeClusterDedicatedNodesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateOnKubeClusterDedicatedNodesRequest::getAckClusterId()const
{
	return ackClusterId_;
}

void UpdateOnKubeClusterDedicatedNodesRequest::setAckClusterId(const std::string& ackClusterId)
{
	ackClusterId_ = ackClusterId;
	setParameter("AckClusterId", ackClusterId);
}

std::string UpdateOnKubeClusterDedicatedNodesRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateOnKubeClusterDedicatedNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpdateOnKubeClusterDedicatedNodesRequest::getClusterType()const
{
	return clusterType_;
}

void UpdateOnKubeClusterDedicatedNodesRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

int UpdateOnKubeClusterDedicatedNodesRequest::getMaxResults()const
{
	return maxResults_;
}

void UpdateOnKubeClusterDedicatedNodesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

Array UpdateOnKubeClusterDedicatedNodesRequest::getDedicatedNodePools()const
{
	return dedicatedNodePools_;
}

void UpdateOnKubeClusterDedicatedNodesRequest::setDedicatedNodePools(const Array& dedicatedNodePools)
{
	dedicatedNodePools_ = dedicatedNodePools;
	setParameter("DedicatedNodePools", std::to_string(dedicatedNodePools));
}

std::string UpdateOnKubeClusterDedicatedNodesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void UpdateOnKubeClusterDedicatedNodesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array UpdateOnKubeClusterDedicatedNodesRequest::getDedicatedNodes()const
{
	return dedicatedNodes_;
}

void UpdateOnKubeClusterDedicatedNodesRequest::setDedicatedNodes(const Array& dedicatedNodes)
{
	dedicatedNodes_ = dedicatedNodes;
	setParameter("DedicatedNodes", std::to_string(dedicatedNodes));
}

