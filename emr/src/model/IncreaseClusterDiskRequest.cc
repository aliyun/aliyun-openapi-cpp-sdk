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

#include <alibabacloud/emr/model/IncreaseClusterDiskRequest.h>

using AlibabaCloud::Emr::Model::IncreaseClusterDiskRequest;

IncreaseClusterDiskRequest::IncreaseClusterDiskRequest() :
	RpcServiceRequest("emr", "2021-03-20", "IncreaseClusterDisk")
{
	setMethod(HttpRequest::Method::Post);
}

IncreaseClusterDiskRequest::~IncreaseClusterDiskRequest()
{}

std::string IncreaseClusterDiskRequest::getClientToken()const
{
	return clientToken_;
}

void IncreaseClusterDiskRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string IncreaseClusterDiskRequest::getRegionId()const
{
	return regionId_;
}

void IncreaseClusterDiskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

Array IncreaseClusterDiskRequest::getNodeGroups()const
{
	return nodeGroups_;
}

void IncreaseClusterDiskRequest::setNodeGroups(const Array& nodeGroups)
{
	nodeGroups_ = nodeGroups;
	setParameter("NodeGroups", std::to_string(nodeGroups));
}

bool IncreaseClusterDiskRequest::getRollingRestart()const
{
	return rollingRestart_;
}

void IncreaseClusterDiskRequest::setRollingRestart(bool rollingRestart)
{
	rollingRestart_ = rollingRestart;
	setParameter("RollingRestart", rollingRestart ? "true" : "false");
}

std::string IncreaseClusterDiskRequest::getClusterId()const
{
	return clusterId_;
}

void IncreaseClusterDiskRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string IncreaseClusterDiskRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void IncreaseClusterDiskRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

int IncreaseClusterDiskRequest::getDataDiskSize()const
{
	return dataDiskSize_;
}

void IncreaseClusterDiskRequest::setDataDiskSize(int dataDiskSize)
{
	dataDiskSize_ = dataDiskSize;
	setParameter("DataDiskSize", std::to_string(dataDiskSize));
}

std::string IncreaseClusterDiskRequest::getSystemDebug()const
{
	return systemDebug_;
}

void IncreaseClusterDiskRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

