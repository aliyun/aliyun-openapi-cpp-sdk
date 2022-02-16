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

#include <alibabacloud/emr/model/CreateNodeGroupRequest.h>

using AlibabaCloud::Emr::Model::CreateNodeGroupRequest;

CreateNodeGroupRequest::CreateNodeGroupRequest() :
	RpcServiceRequest("emr", "2021-03-20", "CreateNodeGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateNodeGroupRequest::~CreateNodeGroupRequest()
{}

std::string CreateNodeGroupRequest::getClientToken()const
{
	return clientToken_;
}

void CreateNodeGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateNodeGroupRequest::getDescription()const
{
	return description_;
}

void CreateNodeGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

Struct CreateNodeGroupRequest::getNodeGroup()const
{
	return nodeGroup_;
}

void CreateNodeGroupRequest::setNodeGroup(const Struct& nodeGroup)
{
	nodeGroup_ = nodeGroup;
	setParameter("NodeGroup", std::to_string(nodeGroup));
}

std::string CreateNodeGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateNodeGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateNodeGroupRequest::getSlaveSecurityGroupId()const
{
	return slaveSecurityGroupId_;
}

void CreateNodeGroupRequest::setSlaveSecurityGroupId(const std::string& slaveSecurityGroupId)
{
	slaveSecurityGroupId_ = slaveSecurityGroupId;
	setParameter("SlaveSecurityGroupId", slaveSecurityGroupId);
}

std::string CreateNodeGroupRequest::getClusterId()const
{
	return clusterId_;
}

void CreateNodeGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateNodeGroupRequest::getSystemDebug()const
{
	return systemDebug_;
}

void CreateNodeGroupRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

