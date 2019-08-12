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

#include <alibabacloud/smartag/model/CreateDedicatedLineBackupRequest.h>

using AlibabaCloud::Smartag::Model::CreateDedicatedLineBackupRequest;

CreateDedicatedLineBackupRequest::CreateDedicatedLineBackupRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "CreateDedicatedLineBackup")
{}

CreateDedicatedLineBackupRequest::~CreateDedicatedLineBackupRequest()
{}

long CreateDedicatedLineBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDedicatedLineBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateDedicatedLineBackupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDedicatedLineBackupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateDedicatedLineBackupRequest::getRegionId()const
{
	return regionId_;
}

void CreateDedicatedLineBackupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateDedicatedLineBackupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDedicatedLineBackupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateDedicatedLineBackupRequest::getSmartAGId()const
{
	return smartAGId_;
}

void CreateDedicatedLineBackupRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", std::to_string(smartAGId));
}

long CreateDedicatedLineBackupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDedicatedLineBackupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateDedicatedLineBackupRequest::getVbrId()const
{
	return vbrId_;
}

void CreateDedicatedLineBackupRequest::setVbrId(const std::string& vbrId)
{
	vbrId_ = vbrId;
	setCoreParameter("VbrId", std::to_string(vbrId));
}

std::string CreateDedicatedLineBackupRequest::getVbrRegionId()const
{
	return vbrRegionId_;
}

void CreateDedicatedLineBackupRequest::setVbrRegionId(const std::string& vbrRegionId)
{
	vbrRegionId_ = vbrRegionId;
	setCoreParameter("VbrRegionId", std::to_string(vbrRegionId));
}

