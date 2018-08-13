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

#include <alibabacloud/smartag/model/DeleteDedicatedLineBackupRequest.h>

using AlibabaCloud::Smartag::Model::DeleteDedicatedLineBackupRequest;

DeleteDedicatedLineBackupRequest::DeleteDedicatedLineBackupRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DeleteDedicatedLineBackup")
{}

DeleteDedicatedLineBackupRequest::~DeleteDedicatedLineBackupRequest()
{}

long DeleteDedicatedLineBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDedicatedLineBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteDedicatedLineBackupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDedicatedLineBackupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteDedicatedLineBackupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDedicatedLineBackupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteDedicatedLineBackupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteDedicatedLineBackupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteDedicatedLineBackupRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DeleteDedicatedLineBackupRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

long DeleteDedicatedLineBackupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDedicatedLineBackupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

