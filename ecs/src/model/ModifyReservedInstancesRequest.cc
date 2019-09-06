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

#include <alibabacloud/ecs/model/ModifyReservedInstancesRequest.h>

using AlibabaCloud::Ecs::Model::ModifyReservedInstancesRequest;

ModifyReservedInstancesRequest::ModifyReservedInstancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyReservedInstances")
{}

ModifyReservedInstancesRequest::~ModifyReservedInstancesRequest()
{}

long ModifyReservedInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyReservedInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<ModifyReservedInstancesRequest::Configuration> ModifyReservedInstancesRequest::getConfiguration()const
{
	return configuration_;
}

void ModifyReservedInstancesRequest::setConfiguration(const std::vector<Configuration>& configuration)
{
	configuration_ = configuration;
	int i = 0;
	for(int i = 0; i!= configuration.size(); i++)	{
		auto obj = configuration.at(i);
		std::string str ="Configuration."+ std::to_string(i);
		setCoreParameter(str + ".ZoneId", obj.zoneId);
		setCoreParameter(str + ".ReservedInstanceName", obj.reservedInstanceName);
		setCoreParameter(str + ".InstanceType", obj.instanceType);
		setCoreParameter(str + ".Scope", obj.scope);
		setCoreParameter(str + ".InstanceAmount", std::to_string(obj.instanceAmount));
	}
}

std::string ModifyReservedInstancesRequest::getRegionId()const
{
	return regionId_;
}

void ModifyReservedInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyReservedInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyReservedInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyReservedInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyReservedInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyReservedInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyReservedInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> ModifyReservedInstancesRequest::getReservedInstanceId()const
{
	return reservedInstanceId_;
}

void ModifyReservedInstancesRequest::setReservedInstanceId(const std::vector<std::string>& reservedInstanceId)
{
	reservedInstanceId_ = reservedInstanceId;
	for(int i = 0; i!= reservedInstanceId.size(); i++)
		setCoreParameter("ReservedInstanceId."+ std::to_string(i), reservedInstanceId.at(i));
}

