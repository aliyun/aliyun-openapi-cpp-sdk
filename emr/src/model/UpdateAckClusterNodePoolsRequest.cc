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

#include <alibabacloud/emr/model/UpdateAckClusterNodePoolsRequest.h>

using AlibabaCloud::Emr::Model::UpdateAckClusterNodePoolsRequest;

UpdateAckClusterNodePoolsRequest::UpdateAckClusterNodePoolsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "UpdateAckClusterNodePools")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateAckClusterNodePoolsRequest::~UpdateAckClusterNodePoolsRequest()
{}

std::string UpdateAckClusterNodePoolsRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateAckClusterNodePoolsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

Array UpdateAckClusterNodePoolsRequest::getAckNodePools()const
{
	return ackNodePools_;
}

void UpdateAckClusterNodePoolsRequest::setAckNodePools(const Array& ackNodePools)
{
	ackNodePools_ = ackNodePools;
	setParameter("AckNodePools", std::to_string(ackNodePools));
}

std::string UpdateAckClusterNodePoolsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UpdateAckClusterNodePoolsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string UpdateAckClusterNodePoolsRequest::getRegionId()const
{
	return regionId_;
}

void UpdateAckClusterNodePoolsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateAckClusterNodePoolsRequest::getAckClusterId()const
{
	return ackClusterId_;
}

void UpdateAckClusterNodePoolsRequest::setAckClusterId(const std::string& ackClusterId)
{
	ackClusterId_ = ackClusterId;
	setParameter("AckClusterId", ackClusterId);
}

std::string UpdateAckClusterNodePoolsRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateAckClusterNodePoolsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string UpdateAckClusterNodePoolsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void UpdateAckClusterNodePoolsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

