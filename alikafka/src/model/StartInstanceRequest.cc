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

#include <alibabacloud/alikafka/model/StartInstanceRequest.h>

using AlibabaCloud::Alikafka::Model::StartInstanceRequest;

StartInstanceRequest::StartInstanceRequest() :
	RpcServiceRequest("alikafka", "2019-09-16", "StartInstance")
{
	setMethod(HttpRequest::Method::Post);
}

StartInstanceRequest::~StartInstanceRequest()
{}

bool StartInstanceRequest::getIsEipInner()const
{
	return isEipInner_;
}

void StartInstanceRequest::setIsEipInner(bool isEipInner)
{
	isEipInner_ = isEipInner;
	setParameter("IsEipInner", isEipInner ? "true" : "false");
}

std::string StartInstanceRequest::getSecurityGroup()const
{
	return securityGroup_;
}

void StartInstanceRequest::setSecurityGroup(const std::string& securityGroup)
{
	securityGroup_ = securityGroup;
	setParameter("SecurityGroup", securityGroup);
}

std::string StartInstanceRequest::getDeployModule()const
{
	return deployModule_;
}

void StartInstanceRequest::setDeployModule(const std::string& deployModule)
{
	deployModule_ = deployModule;
	setParameter("DeployModule", deployModule);
}

bool StartInstanceRequest::getIsSetUserAndPassword()const
{
	return isSetUserAndPassword_;
}

void StartInstanceRequest::setIsSetUserAndPassword(bool isSetUserAndPassword)
{
	isSetUserAndPassword_ = isSetUserAndPassword;
	setParameter("IsSetUserAndPassword", isSetUserAndPassword ? "true" : "false");
}

std::string StartInstanceRequest::getPassword()const
{
	return password_;
}

void StartInstanceRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string StartInstanceRequest::getRegionId()const
{
	return regionId_;
}

void StartInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string StartInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void StartInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string StartInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void StartInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string StartInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void StartInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

bool StartInstanceRequest::getCrossZone()const
{
	return crossZone_;
}

void StartInstanceRequest::setCrossZone(bool crossZone)
{
	crossZone_ = crossZone;
	setParameter("CrossZone", crossZone ? "true" : "false");
}

std::string StartInstanceRequest::getName()const
{
	return name_;
}

void StartInstanceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string StartInstanceRequest::getServiceVersion()const
{
	return serviceVersion_;
}

void StartInstanceRequest::setServiceVersion(const std::string& serviceVersion)
{
	serviceVersion_ = serviceVersion;
	setParameter("ServiceVersion", serviceVersion);
}

std::string StartInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void StartInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string StartInstanceRequest::getKMSKeyId()const
{
	return kMSKeyId_;
}

void StartInstanceRequest::setKMSKeyId(const std::string& kMSKeyId)
{
	kMSKeyId_ = kMSKeyId;
	setParameter("KMSKeyId", kMSKeyId);
}

std::string StartInstanceRequest::getConfig()const
{
	return config_;
}

void StartInstanceRequest::setConfig(const std::string& config)
{
	config_ = config;
	setParameter("Config", config);
}

std::string StartInstanceRequest::getUsername()const
{
	return username_;
}

void StartInstanceRequest::setUsername(const std::string& username)
{
	username_ = username;
	setParameter("Username", username);
}

