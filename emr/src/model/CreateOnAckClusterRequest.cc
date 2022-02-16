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

#include <alibabacloud/emr/model/CreateOnAckClusterRequest.h>

using AlibabaCloud::Emr::Model::CreateOnAckClusterRequest;

CreateOnAckClusterRequest::CreateOnAckClusterRequest() :
	RpcServiceRequest("emr", "2021-03-20", "CreateOnAckCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateOnAckClusterRequest::~CreateOnAckClusterRequest()
{}

std::string CreateOnAckClusterRequest::getClusterName()const
{
	return clusterName_;
}

void CreateOnAckClusterRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

Array CreateOnAckClusterRequest::getAckNodePools()const
{
	return ackNodePools_;
}

void CreateOnAckClusterRequest::setAckNodePools(const Array& ackNodePools)
{
	ackNodePools_ = ackNodePools;
	setParameter("AckNodePools", std::to_string(ackNodePools));
}

std::string CreateOnAckClusterRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateOnAckClusterRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateOnAckClusterRequest::getOssPath()const
{
	return ossPath_;
}

void CreateOnAckClusterRequest::setOssPath(const std::string& ossPath)
{
	ossPath_ = ossPath;
	setParameter("OssPath", ossPath);
}

std::string CreateOnAckClusterRequest::getClusterType()const
{
	return clusterType_;
}

void CreateOnAckClusterRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

std::string CreateOnAckClusterRequest::getSystemDebug()const
{
	return systemDebug_;
}

void CreateOnAckClusterRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string CreateOnAckClusterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateOnAckClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateOnAckClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateOnAckClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateOnAckClusterRequest::getAckClusterId()const
{
	return ackClusterId_;
}

void CreateOnAckClusterRequest::setAckClusterId(const std::string& ackClusterId)
{
	ackClusterId_ = ackClusterId;
	setParameter("AckClusterId", ackClusterId);
}

std::string CreateOnAckClusterRequest::getAckNamespace()const
{
	return ackNamespace_;
}

void CreateOnAckClusterRequest::setAckNamespace(const std::string& ackNamespace)
{
	ackNamespace_ = ackNamespace;
	setParameter("AckNamespace", ackNamespace);
}

std::string CreateOnAckClusterRequest::getToken()const
{
	return token_;
}

void CreateOnAckClusterRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

Array CreateOnAckClusterRequest::getAckNodes()const
{
	return ackNodes_;
}

void CreateOnAckClusterRequest::setAckNodes(const Array& ackNodes)
{
	ackNodes_ = ackNodes;
	setParameter("AckNodes", std::to_string(ackNodes));
}

std::string CreateOnAckClusterRequest::getProductRoleName()const
{
	return productRoleName_;
}

void CreateOnAckClusterRequest::setProductRoleName(const std::string& productRoleName)
{
	productRoleName_ = productRoleName;
	setParameter("ProductRoleName", productRoleName);
}

Array CreateOnAckClusterRequest::getApplications()const
{
	return applications_;
}

void CreateOnAckClusterRequest::setApplications(const Array& applications)
{
	applications_ = applications;
	setParameter("Applications", std::to_string(applications));
}

