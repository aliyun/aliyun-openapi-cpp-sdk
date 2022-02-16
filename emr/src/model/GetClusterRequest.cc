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

#include <alibabacloud/emr/model/GetClusterRequest.h>

using AlibabaCloud::Emr::Model::GetClusterRequest;

GetClusterRequest::GetClusterRequest() :
	RpcServiceRequest("emr", "2021-03-20", "GetCluster")
{
	setMethod(HttpRequest::Method::Post);
}

GetClusterRequest::~GetClusterRequest()
{}

std::string GetClusterRequest::getClientToken()const
{
	return clientToken_;
}

void GetClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string GetClusterRequest::getRegionId()const
{
	return regionId_;
}

void GetClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetClusterRequest::getClusterId()const
{
	return clusterId_;
}

void GetClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetClusterRequest::getSystemDebug()const
{
	return systemDebug_;
}

void GetClusterRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

