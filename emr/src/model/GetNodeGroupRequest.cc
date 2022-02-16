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

#include <alibabacloud/emr/model/GetNodeGroupRequest.h>

using AlibabaCloud::Emr::Model::GetNodeGroupRequest;

GetNodeGroupRequest::GetNodeGroupRequest() :
	RpcServiceRequest("emr", "2021-03-20", "GetNodeGroup")
{
	setMethod(HttpRequest::Method::Post);
}

GetNodeGroupRequest::~GetNodeGroupRequest()
{}

std::string GetNodeGroupRequest::getClientToken()const
{
	return clientToken_;
}

void GetNodeGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string GetNodeGroupRequest::getRegionId()const
{
	return regionId_;
}

void GetNodeGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetNodeGroupRequest::getClusterId()const
{
	return clusterId_;
}

void GetNodeGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetNodeGroupRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void GetNodeGroupRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string GetNodeGroupRequest::getSystemDebug()const
{
	return systemDebug_;
}

void GetNodeGroupRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

