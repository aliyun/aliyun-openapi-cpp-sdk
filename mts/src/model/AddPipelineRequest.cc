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

#include <alibabacloud/mts/model/AddPipelineRequest.h>

using AlibabaCloud::Mts::Model::AddPipelineRequest;

AddPipelineRequest::AddPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "AddPipeline")
{
	setMethod(HttpRequest::Method::Post);
}

AddPipelineRequest::~AddPipelineRequest()
{}

long AddPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddPipelineRequest::getRole()const
{
	return role_;
}

void AddPipelineRequest::setRole(const std::string& role)
{
	role_ = role;
	setCoreParameter("Role", role);
}

std::string AddPipelineRequest::getSpeed()const
{
	return speed_;
}

void AddPipelineRequest::setSpeed(const std::string& speed)
{
	speed_ = speed;
	setCoreParameter("Speed", speed);
}

std::string AddPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AddPipelineRequest::getNotifyConfig()const
{
	return notifyConfig_;
}

void AddPipelineRequest::setNotifyConfig(const std::string& notifyConfig)
{
	notifyConfig_ = notifyConfig;
	setCoreParameter("NotifyConfig", notifyConfig);
}

long AddPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void AddPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddPipelineRequest::getName()const
{
	return name_;
}

void AddPipelineRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long AddPipelineRequest::getSpeedLevel()const
{
	return speedLevel_;
}

void AddPipelineRequest::setSpeedLevel(long speedLevel)
{
	speedLevel_ = speedLevel;
	setCoreParameter("SpeedLevel", std::to_string(speedLevel));
}

