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

#include <alibabacloud/ecs/model/DeleteMaintenancePropertyRequest.h>

using AlibabaCloud::Ecs::Model::DeleteMaintenancePropertyRequest;

DeleteMaintenancePropertyRequest::DeleteMaintenancePropertyRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteMaintenanceProperty")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteMaintenancePropertyRequest::~DeleteMaintenancePropertyRequest()
{}

long DeleteMaintenancePropertyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteMaintenancePropertyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteMaintenancePropertyRequest::getRegionId()const
{
	return regionId_;
}

void DeleteMaintenancePropertyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteMaintenancePropertyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteMaintenancePropertyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteMaintenancePropertyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteMaintenancePropertyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteMaintenancePropertyRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteMaintenancePropertyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> DeleteMaintenancePropertyRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteMaintenancePropertyRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setCoreParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

