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

#include <alibabacloud/emr/model/DeleteOnAckClusterRequest.h>

using AlibabaCloud::Emr::Model::DeleteOnAckClusterRequest;

DeleteOnAckClusterRequest::DeleteOnAckClusterRequest() :
	RpcServiceRequest("emr", "2021-03-20", "DeleteOnAckCluster")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteOnAckClusterRequest::~DeleteOnAckClusterRequest()
{}

std::string DeleteOnAckClusterRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteOnAckClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteOnAckClusterRequest::getRegionId()const
{
	return regionId_;
}

void DeleteOnAckClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteOnAckClusterRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteOnAckClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DeleteOnAckClusterRequest::getToken()const
{
	return token_;
}

void DeleteOnAckClusterRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

std::string DeleteOnAckClusterRequest::getSystemDebug()const
{
	return systemDebug_;
}

void DeleteOnAckClusterRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

std::string DeleteOnAckClusterRequest::getProductRoleName()const
{
	return productRoleName_;
}

void DeleteOnAckClusterRequest::setProductRoleName(const std::string& productRoleName)
{
	productRoleName_ = productRoleName;
	setParameter("ProductRoleName", productRoleName);
}

