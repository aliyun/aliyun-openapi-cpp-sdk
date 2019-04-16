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

#include <alibabacloud/r-kvstore/model/DeleteTempInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::DeleteTempInstanceRequest;

DeleteTempInstanceRequest::DeleteTempInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DeleteTempInstance")
{}

DeleteTempInstanceRequest::~DeleteTempInstanceRequest()
{}

long DeleteTempInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteTempInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteTempInstanceRequest::getTempInstanceId()const
{
	return tempInstanceId_;
}

void DeleteTempInstanceRequest::setTempInstanceId(const std::string& tempInstanceId)
{
	tempInstanceId_ = tempInstanceId;
	setCoreParameter("TempInstanceId", tempInstanceId);
}

std::string DeleteTempInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteTempInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DeleteTempInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteTempInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteTempInstanceRequest::getRegionId()const
{
	return regionId_;
}

void DeleteTempInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteTempInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteTempInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteTempInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteTempInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteTempInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTempInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

