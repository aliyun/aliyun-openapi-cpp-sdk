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

#include <alibabacloud/ecs/model/ReInitDiskRequest.h>

using AlibabaCloud::Ecs::Model::ReInitDiskRequest;

ReInitDiskRequest::ReInitDiskRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ReInitDisk")
{
	setMethod(HttpRequest::Method::Post);
}

ReInitDiskRequest::~ReInitDiskRequest()
{}

long ReInitDiskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReInitDiskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ReInitDiskRequest::getAutoStartInstance()const
{
	return autoStartInstance_;
}

void ReInitDiskRequest::setAutoStartInstance(bool autoStartInstance)
{
	autoStartInstance_ = autoStartInstance;
	setCoreParameter("AutoStartInstance", autoStartInstance ? "true" : "false");
}

std::string ReInitDiskRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void ReInitDiskRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setCoreParameter("SecurityEnhancementStrategy", securityEnhancementStrategy);
}

std::string ReInitDiskRequest::getKeyPairName()const
{
	return keyPairName_;
}

void ReInitDiskRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

std::string ReInitDiskRequest::getPassword()const
{
	return password_;
}

void ReInitDiskRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

std::string ReInitDiskRequest::getDiskId()const
{
	return diskId_;
}

void ReInitDiskRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setCoreParameter("DiskId", diskId);
}

std::string ReInitDiskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReInitDiskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReInitDiskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReInitDiskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ReInitDiskRequest::getOwnerId()const
{
	return ownerId_;
}

void ReInitDiskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

