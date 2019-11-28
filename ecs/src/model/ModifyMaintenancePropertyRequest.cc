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

#include <alibabacloud/ecs/model/ModifyMaintenancePropertyRequest.h>

using AlibabaCloud::Ecs::Model::ModifyMaintenancePropertyRequest;

ModifyMaintenancePropertyRequest::ModifyMaintenancePropertyRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyMaintenanceProperty")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyMaintenancePropertyRequest::~ModifyMaintenancePropertyRequest()
{}

long ModifyMaintenancePropertyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyMaintenancePropertyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyMaintenancePropertyRequest::getStartTime()const
{
	return startTime_;
}

void ModifyMaintenancePropertyRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string ModifyMaintenancePropertyRequest::getRegionId()const
{
	return regionId_;
}

void ModifyMaintenancePropertyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyMaintenancePropertyRequest::getActionOnMaintenance()const
{
	return actionOnMaintenance_;
}

void ModifyMaintenancePropertyRequest::setActionOnMaintenance(const std::string& actionOnMaintenance)
{
	actionOnMaintenance_ = actionOnMaintenance;
	setCoreParameter("ActionOnMaintenance", actionOnMaintenance);
}

std::string ModifyMaintenancePropertyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyMaintenancePropertyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyMaintenancePropertyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyMaintenancePropertyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyMaintenancePropertyRequest::getEndTime()const
{
	return endTime_;
}

void ModifyMaintenancePropertyRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long ModifyMaintenancePropertyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyMaintenancePropertyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> ModifyMaintenancePropertyRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyMaintenancePropertyRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setCoreParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

