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

#include <alibabacloud/emr/model/UpdateAckClusterNodesRequest.h>

using AlibabaCloud::Emr::Model::UpdateAckClusterNodesRequest;

UpdateAckClusterNodesRequest::UpdateAckClusterNodesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "UpdateAckClusterNodes")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateAckClusterNodesRequest::~UpdateAckClusterNodesRequest()
{}

std::string UpdateAckClusterNodesRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateAckClusterNodesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdateAckClusterNodesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UpdateAckClusterNodesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string UpdateAckClusterNodesRequest::getRegionId()const
{
	return regionId_;
}

void UpdateAckClusterNodesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateAckClusterNodesRequest::getAckClusterId()const
{
	return ackClusterId_;
}

void UpdateAckClusterNodesRequest::setAckClusterId(const std::string& ackClusterId)
{
	ackClusterId_ = ackClusterId;
	setParameter("AckClusterId", ackClusterId);
}

std::string UpdateAckClusterNodesRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateAckClusterNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpdateAckClusterNodesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void UpdateAckClusterNodesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array UpdateAckClusterNodesRequest::getAckNodes()const
{
	return ackNodes_;
}

void UpdateAckClusterNodesRequest::setAckNodes(const Array& ackNodes)
{
	ackNodes_ = ackNodes;
	setParameter("AckNodes", std::to_string(ackNodes));
}

Array UpdateAckClusterNodesRequest::getSkippedNodePools()const
{
	return skippedNodePools_;
}

void UpdateAckClusterNodesRequest::setSkippedNodePools(const Array& skippedNodePools)
{
	skippedNodePools_ = skippedNodePools;
	setParameter("SkippedNodePools", std::to_string(skippedNodePools));
}

