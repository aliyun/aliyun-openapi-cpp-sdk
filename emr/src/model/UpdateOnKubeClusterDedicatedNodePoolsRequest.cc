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

#include <alibabacloud/emr/model/UpdateOnKubeClusterDedicatedNodePoolsRequest.h>

using AlibabaCloud::Emr::Model::UpdateOnKubeClusterDedicatedNodePoolsRequest;

UpdateOnKubeClusterDedicatedNodePoolsRequest::UpdateOnKubeClusterDedicatedNodePoolsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "UpdateOnKubeClusterDedicatedNodePools")
{
	setMethod(HttpRequest::Method::Get);
}

UpdateOnKubeClusterDedicatedNodePoolsRequest::~UpdateOnKubeClusterDedicatedNodePoolsRequest()
{}

std::string UpdateOnKubeClusterDedicatedNodePoolsRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateOnKubeClusterDedicatedNodePoolsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdateOnKubeClusterDedicatedNodePoolsRequest::getNextToken()const
{
	return nextToken_;
}

void UpdateOnKubeClusterDedicatedNodePoolsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string UpdateOnKubeClusterDedicatedNodePoolsRequest::getRegionId()const
{
	return regionId_;
}

void UpdateOnKubeClusterDedicatedNodePoolsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateOnKubeClusterDedicatedNodePoolsRequest::getAckClusterId()const
{
	return ackClusterId_;
}

void UpdateOnKubeClusterDedicatedNodePoolsRequest::setAckClusterId(const std::string& ackClusterId)
{
	ackClusterId_ = ackClusterId;
	setParameter("AckClusterId", ackClusterId);
}

std::string UpdateOnKubeClusterDedicatedNodePoolsRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateOnKubeClusterDedicatedNodePoolsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpdateOnKubeClusterDedicatedNodePoolsRequest::getClusterType()const
{
	return clusterType_;
}

void UpdateOnKubeClusterDedicatedNodePoolsRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

int UpdateOnKubeClusterDedicatedNodePoolsRequest::getMaxResults()const
{
	return maxResults_;
}

void UpdateOnKubeClusterDedicatedNodePoolsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

Array UpdateOnKubeClusterDedicatedNodePoolsRequest::getDedicatedNodePools()const
{
	return dedicatedNodePools_;
}

void UpdateOnKubeClusterDedicatedNodePoolsRequest::setDedicatedNodePools(const Array& dedicatedNodePools)
{
	dedicatedNodePools_ = dedicatedNodePools;
	setParameter("DedicatedNodePools", std::to_string(dedicatedNodePools));
}

std::string UpdateOnKubeClusterDedicatedNodePoolsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void UpdateOnKubeClusterDedicatedNodePoolsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string UpdateOnKubeClusterDedicatedNodePoolsRequest::getProductRoleName()const
{
	return productRoleName_;
}

void UpdateOnKubeClusterDedicatedNodePoolsRequest::setProductRoleName(const std::string& productRoleName)
{
	productRoleName_ = productRoleName;
	setParameter("ProductRoleName", productRoleName);
}

