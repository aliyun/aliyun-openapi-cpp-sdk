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

#include <alibabacloud/emr/model/CreateOnKubeClusterRequest.h>

using AlibabaCloud::Emr::Model::CreateOnKubeClusterRequest;

CreateOnKubeClusterRequest::CreateOnKubeClusterRequest() :
	RpcServiceRequest("emr", "2021-03-20", "CreateOnKubeCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateOnKubeClusterRequest::~CreateOnKubeClusterRequest()
{}

std::string CreateOnKubeClusterRequest::getClusterName()const
{
	return clusterName_;
}

void CreateOnKubeClusterRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

Array CreateOnKubeClusterRequest::getAckNodePools()const
{
	return ackNodePools_;
}

void CreateOnKubeClusterRequest::setAckNodePools(const Array& ackNodePools)
{
	ackNodePools_ = ackNodePools;
	setParameter("AckNodePools", std::to_string(ackNodePools));
}

std::string CreateOnKubeClusterRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateOnKubeClusterRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateOnKubeClusterRequest::getOssPath()const
{
	return ossPath_;
}

void CreateOnKubeClusterRequest::setOssPath(const std::string& ossPath)
{
	ossPath_ = ossPath;
	setParameter("OssPath", ossPath);
}

std::string CreateOnKubeClusterRequest::getClusterType()const
{
	return clusterType_;
}

void CreateOnKubeClusterRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

std::string CreateOnKubeClusterRequest::getSystemDebug()const
{
	return systemDebug_;
}

void CreateOnKubeClusterRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string CreateOnKubeClusterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateOnKubeClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateOnKubeClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateOnKubeClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateOnKubeClusterRequest::getAckClusterId()const
{
	return ackClusterId_;
}

void CreateOnKubeClusterRequest::setAckClusterId(const std::string& ackClusterId)
{
	ackClusterId_ = ackClusterId;
	setParameter("AckClusterId", ackClusterId);
}

std::string CreateOnKubeClusterRequest::getAckNamespace()const
{
	return ackNamespace_;
}

void CreateOnKubeClusterRequest::setAckNamespace(const std::string& ackNamespace)
{
	ackNamespace_ = ackNamespace;
	setParameter("AckNamespace", ackNamespace);
}

std::string CreateOnKubeClusterRequest::getToken()const
{
	return token_;
}

void CreateOnKubeClusterRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

Array CreateOnKubeClusterRequest::getAckNodes()const
{
	return ackNodes_;
}

void CreateOnKubeClusterRequest::setAckNodes(const Array& ackNodes)
{
	ackNodes_ = ackNodes;
	setParameter("AckNodes", std::to_string(ackNodes));
}

std::string CreateOnKubeClusterRequest::getProductRoleName()const
{
	return productRoleName_;
}

void CreateOnKubeClusterRequest::setProductRoleName(const std::string& productRoleName)
{
	productRoleName_ = productRoleName;
	setParameter("ProductRoleName", productRoleName);
}

Array CreateOnKubeClusterRequest::getApplications()const
{
	return applications_;
}

void CreateOnKubeClusterRequest::setApplications(const Array& applications)
{
	applications_ = applications;
	setParameter("Applications", std::to_string(applications));
}

