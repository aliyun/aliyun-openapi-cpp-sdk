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

#include <alibabacloud/emr/model/ReleaseOnKubeClusterRequest.h>

using AlibabaCloud::Emr::Model::ReleaseOnKubeClusterRequest;

ReleaseOnKubeClusterRequest::ReleaseOnKubeClusterRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ReleaseOnKubeCluster")
{
	setMethod(HttpRequest::Method::Post);
}

ReleaseOnKubeClusterRequest::~ReleaseOnKubeClusterRequest()
{}

std::string ReleaseOnKubeClusterRequest::getClientToken()const
{
	return clientToken_;
}

void ReleaseOnKubeClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ReleaseOnKubeClusterRequest::getRegionId()const
{
	return regionId_;
}

void ReleaseOnKubeClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ReleaseOnKubeClusterRequest::getClusterId()const
{
	return clusterId_;
}

void ReleaseOnKubeClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ReleaseOnKubeClusterRequest::getToken()const
{
	return token_;
}

void ReleaseOnKubeClusterRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

std::string ReleaseOnKubeClusterRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ReleaseOnKubeClusterRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string ReleaseOnKubeClusterRequest::getProductRoleName()const
{
	return productRoleName_;
}

void ReleaseOnKubeClusterRequest::setProductRoleName(const std::string& productRoleName)
{
	productRoleName_ = productRoleName;
	setParameter("ProductRoleName", productRoleName);
}

