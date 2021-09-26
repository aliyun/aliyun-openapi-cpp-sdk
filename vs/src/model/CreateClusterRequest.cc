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

#include <alibabacloud/vs/model/CreateClusterRequest.h>

using AlibabaCloud::Vs::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest() :
	RpcServiceRequest("vs", "2018-12-12", "CreateCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateClusterRequest::~CreateClusterRequest()
{}

std::string CreateClusterRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateClusterRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string CreateClusterRequest::getDescription()const
{
	return description_;
}

void CreateClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateClusterRequest::getMaintainTime()const
{
	return maintainTime_;
}

void CreateClusterRequest::setMaintainTime(const std::string& maintainTime)
{
	maintainTime_ = maintainTime;
	setParameter("MaintainTime", maintainTime);
}

std::string CreateClusterRequest::getShowLog()const
{
	return showLog_;
}

void CreateClusterRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long CreateClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateClusterRequest::getName()const
{
	return name_;
}

void CreateClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateClusterRequest::getInternalPorts()const
{
	return internalPorts_;
}

void CreateClusterRequest::setInternalPorts(const std::string& internalPorts)
{
	internalPorts_ = internalPorts;
	setParameter("InternalPorts", internalPorts);
}

