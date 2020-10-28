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

#include <alibabacloud/oos/model/UpdateInstanceInformationRequest.h>

using AlibabaCloud::Oos::Model::UpdateInstanceInformationRequest;

UpdateInstanceInformationRequest::UpdateInstanceInformationRequest() :
	RpcServiceRequest("oos", "2019-06-01", "UpdateInstanceInformation")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateInstanceInformationRequest::~UpdateInstanceInformationRequest()
{}

std::string UpdateInstanceInformationRequest::getAgentVersion()const
{
	return agentVersion_;
}

void UpdateInstanceInformationRequest::setAgentVersion(const std::string& agentVersion)
{
	agentVersion_ = agentVersion;
	setParameter("AgentVersion", agentVersion);
}

std::string UpdateInstanceInformationRequest::getIpAddress()const
{
	return ipAddress_;
}

void UpdateInstanceInformationRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setParameter("IpAddress", ipAddress);
}

std::string UpdateInstanceInformationRequest::getComputerName()const
{
	return computerName_;
}

void UpdateInstanceInformationRequest::setComputerName(const std::string& computerName)
{
	computerName_ = computerName;
	setParameter("ComputerName", computerName);
}

std::string UpdateInstanceInformationRequest::getRegionId()const
{
	return regionId_;
}

void UpdateInstanceInformationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateInstanceInformationRequest::getPlatformName()const
{
	return platformName_;
}

void UpdateInstanceInformationRequest::setPlatformName(const std::string& platformName)
{
	platformName_ = platformName;
	setParameter("PlatformName", platformName);
}

std::string UpdateInstanceInformationRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateInstanceInformationRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpdateInstanceInformationRequest::getAgentName()const
{
	return agentName_;
}

void UpdateInstanceInformationRequest::setAgentName(const std::string& agentName)
{
	agentName_ = agentName;
	setParameter("AgentName", agentName);
}

std::string UpdateInstanceInformationRequest::getPlatformType()const
{
	return platformType_;
}

void UpdateInstanceInformationRequest::setPlatformType(const std::string& platformType)
{
	platformType_ = platformType;
	setParameter("PlatformType", platformType);
}

std::string UpdateInstanceInformationRequest::getPlatformVersion()const
{
	return platformVersion_;
}

void UpdateInstanceInformationRequest::setPlatformVersion(const std::string& platformVersion)
{
	platformVersion_ = platformVersion;
	setParameter("PlatformVersion", platformVersion);
}

