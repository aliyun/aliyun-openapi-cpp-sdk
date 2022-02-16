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

#include <alibabacloud/emr/model/GetOnAckClusterRequest.h>

using AlibabaCloud::Emr::Model::GetOnAckClusterRequest;

GetOnAckClusterRequest::GetOnAckClusterRequest() :
	RpcServiceRequest("emr", "2021-03-20", "GetOnAckCluster")
{
	setMethod(HttpRequest::Method::Post);
}

GetOnAckClusterRequest::~GetOnAckClusterRequest()
{}

std::string GetOnAckClusterRequest::getClientToken()const
{
	return clientToken_;
}

void GetOnAckClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string GetOnAckClusterRequest::getRegionId()const
{
	return regionId_;
}

void GetOnAckClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetOnAckClusterRequest::getClusterId()const
{
	return clusterId_;
}

void GetOnAckClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetOnAckClusterRequest::getSystemDebug()const
{
	return systemDebug_;
}

void GetOnAckClusterRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

