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

#include <alibabacloud/ecs/model/ModifyPrepayInstanceSpecRequest.h>

using AlibabaCloud::Ecs::Model::ModifyPrepayInstanceSpecRequest;

ModifyPrepayInstanceSpecRequest::ModifyPrepayInstanceSpecRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyPrepayInstanceSpec")
{}

ModifyPrepayInstanceSpecRequest::~ModifyPrepayInstanceSpecRequest()
{}

long ModifyPrepayInstanceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyPrepayInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ModifyPrepayInstanceSpecRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyPrepayInstanceSpecRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string ModifyPrepayInstanceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyPrepayInstanceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyPrepayInstanceSpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyPrepayInstanceSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyPrepayInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyPrepayInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyPrepayInstanceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyPrepayInstanceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyPrepayInstanceSpecRequest::getOperatorType()const
{
	return operatorType_;
}

void ModifyPrepayInstanceSpecRequest::setOperatorType(const std::string& operatorType)
{
	operatorType_ = operatorType;
	setCoreParameter("OperatorType", operatorType);
}

std::string ModifyPrepayInstanceSpecRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void ModifyPrepayInstanceSpecRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", systemDiskCategory);
}

std::string ModifyPrepayInstanceSpecRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyPrepayInstanceSpecRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string ModifyPrepayInstanceSpecRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyPrepayInstanceSpecRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyPrepayInstanceSpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyPrepayInstanceSpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyPrepayInstanceSpecRequest::getMigrateAcrossZone()const
{
	return migrateAcrossZone_;
}

void ModifyPrepayInstanceSpecRequest::setMigrateAcrossZone(bool migrateAcrossZone)
{
	migrateAcrossZone_ = migrateAcrossZone;
	setCoreParameter("MigrateAcrossZone", migrateAcrossZone ? "true" : "false");
}

std::string ModifyPrepayInstanceSpecRequest::getInstanceType()const
{
	return instanceType_;
}

void ModifyPrepayInstanceSpecRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

