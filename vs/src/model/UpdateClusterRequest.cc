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

#include <alibabacloud/vs/model/UpdateClusterRequest.h>

using AlibabaCloud::Vs::Model::UpdateClusterRequest;

UpdateClusterRequest::UpdateClusterRequest() :
	RpcServiceRequest("vs", "2018-12-12", "UpdateCluster")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateClusterRequest::~UpdateClusterRequest()
{}

std::string UpdateClusterRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void UpdateClusterRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string UpdateClusterRequest::getDescription()const
{
	return description_;
}

void UpdateClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string UpdateClusterRequest::getMaintainTime()const
{
	return maintainTime_;
}

void UpdateClusterRequest::setMaintainTime(const std::string& maintainTime)
{
	maintainTime_ = maintainTime;
	setParameter("MaintainTime", maintainTime);
}

std::string UpdateClusterRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void UpdateClusterRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setParameter("EffectiveTime", effectiveTime);
}

std::string UpdateClusterRequest::getShowLog()const
{
	return showLog_;
}

void UpdateClusterRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string UpdateClusterRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long UpdateClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateClusterRequest::getName()const
{
	return name_;
}

void UpdateClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateClusterRequest::getInternalPorts()const
{
	return internalPorts_;
}

void UpdateClusterRequest::setInternalPorts(const std::string& internalPorts)
{
	internalPorts_ = internalPorts;
	setParameter("InternalPorts", internalPorts);
}

