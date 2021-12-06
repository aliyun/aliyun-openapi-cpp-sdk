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

#include <alibabacloud/ecs/model/ReplaceSystemDiskRequest.h>

using AlibabaCloud::Ecs::Model::ReplaceSystemDiskRequest;

ReplaceSystemDiskRequest::ReplaceSystemDiskRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ReplaceSystemDisk")
{
	setMethod(HttpRequest::Method::Post);
}

ReplaceSystemDiskRequest::~ReplaceSystemDiskRequest()
{}

long ReplaceSystemDiskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReplaceSystemDiskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReplaceSystemDiskRequest::getImageId()const
{
	return imageId_;
}

void ReplaceSystemDiskRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string ReplaceSystemDiskRequest::getClientToken()const
{
	return clientToken_;
}

void ReplaceSystemDiskRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ReplaceSystemDiskRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void ReplaceSystemDiskRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setParameter("SecurityEnhancementStrategy", securityEnhancementStrategy);
}

std::string ReplaceSystemDiskRequest::getKeyPairName()const
{
	return keyPairName_;
}

void ReplaceSystemDiskRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

std::string ReplaceSystemDiskRequest::getPlatform()const
{
	return platform_;
}

void ReplaceSystemDiskRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setParameter("Platform", platform);
}

std::string ReplaceSystemDiskRequest::getPassword()const
{
	return password_;
}

void ReplaceSystemDiskRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

bool ReplaceSystemDiskRequest::getPasswordInherit()const
{
	return passwordInherit_;
}

void ReplaceSystemDiskRequest::setPasswordInherit(bool passwordInherit)
{
	passwordInherit_ = passwordInherit;
	setParameter("PasswordInherit", passwordInherit ? "true" : "false");
}

std::string ReplaceSystemDiskRequest::getDiskId()const
{
	return diskId_;
}

void ReplaceSystemDiskRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

std::string ReplaceSystemDiskRequest::getArchitecture()const
{
	return architecture_;
}

void ReplaceSystemDiskRequest::setArchitecture(const std::string& architecture)
{
	architecture_ = architecture;
	setParameter("Architecture", architecture);
}

std::string ReplaceSystemDiskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReplaceSystemDiskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReplaceSystemDiskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReplaceSystemDiskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ReplaceSystemDiskRequest::getOwnerId()const
{
	return ownerId_;
}

void ReplaceSystemDiskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ReplaceSystemDiskRequest::getInstanceId()const
{
	return instanceId_;
}

void ReplaceSystemDiskRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ReplaceSystemDiskRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void ReplaceSystemDiskRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

bool ReplaceSystemDiskRequest::getUseAdditionalService()const
{
	return useAdditionalService_;
}

void ReplaceSystemDiskRequest::setUseAdditionalService(bool useAdditionalService)
{
	useAdditionalService_ = useAdditionalService;
	setParameter("UseAdditionalService", useAdditionalService ? "true" : "false");
}

