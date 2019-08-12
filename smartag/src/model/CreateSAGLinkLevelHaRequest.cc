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

#include <alibabacloud/smartag/model/CreateSAGLinkLevelHaRequest.h>

using AlibabaCloud::Smartag::Model::CreateSAGLinkLevelHaRequest;

CreateSAGLinkLevelHaRequest::CreateSAGLinkLevelHaRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "CreateSAGLinkLevelHa")
{}

CreateSAGLinkLevelHaRequest::~CreateSAGLinkLevelHaRequest()
{}

long CreateSAGLinkLevelHaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSAGLinkLevelHaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateSAGLinkLevelHaRequest::getBackupLinkId()const
{
	return backupLinkId_;
}

void CreateSAGLinkLevelHaRequest::setBackupLinkId(const std::string& backupLinkId)
{
	backupLinkId_ = backupLinkId;
	setCoreParameter("BackupLinkId", std::to_string(backupLinkId));
}

std::string CreateSAGLinkLevelHaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSAGLinkLevelHaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateSAGLinkLevelHaRequest::getHaType()const
{
	return haType_;
}

void CreateSAGLinkLevelHaRequest::setHaType(const std::string& haType)
{
	haType_ = haType;
	setCoreParameter("HaType", std::to_string(haType));
}

std::string CreateSAGLinkLevelHaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSAGLinkLevelHaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateSAGLinkLevelHaRequest::getMainLinkRegionId()const
{
	return mainLinkRegionId_;
}

void CreateSAGLinkLevelHaRequest::setMainLinkRegionId(const std::string& mainLinkRegionId)
{
	mainLinkRegionId_ = mainLinkRegionId;
	setCoreParameter("MainLinkRegionId", std::to_string(mainLinkRegionId));
}

std::string CreateSAGLinkLevelHaRequest::getSmartAGId()const
{
	return smartAGId_;
}

void CreateSAGLinkLevelHaRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", std::to_string(smartAGId));
}

long CreateSAGLinkLevelHaRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSAGLinkLevelHaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateSAGLinkLevelHaRequest::getMainLinkId()const
{
	return mainLinkId_;
}

void CreateSAGLinkLevelHaRequest::setMainLinkId(const std::string& mainLinkId)
{
	mainLinkId_ = mainLinkId;
	setCoreParameter("MainLinkId", std::to_string(mainLinkId));
}

std::string CreateSAGLinkLevelHaRequest::getBackupLinkRegionId()const
{
	return backupLinkRegionId_;
}

void CreateSAGLinkLevelHaRequest::setBackupLinkRegionId(const std::string& backupLinkRegionId)
{
	backupLinkRegionId_ = backupLinkRegionId;
	setCoreParameter("BackupLinkRegionId", std::to_string(backupLinkRegionId));
}

