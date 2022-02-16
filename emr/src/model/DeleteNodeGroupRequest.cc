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

#include <alibabacloud/emr/model/DeleteNodeGroupRequest.h>

using AlibabaCloud::Emr::Model::DeleteNodeGroupRequest;

DeleteNodeGroupRequest::DeleteNodeGroupRequest() :
	RpcServiceRequest("emr", "2021-03-20", "DeleteNodeGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteNodeGroupRequest::~DeleteNodeGroupRequest()
{}

std::string DeleteNodeGroupRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteNodeGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteNodeGroupRequest::getDescription()const
{
	return description_;
}

void DeleteNodeGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string DeleteNodeGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteNodeGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteNodeGroupRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteNodeGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DeleteNodeGroupRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void DeleteNodeGroupRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string DeleteNodeGroupRequest::getSystemDebug()const
{
	return systemDebug_;
}

void DeleteNodeGroupRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

