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

#include <alibabacloud/ecs/model/ModifyInstanceDeploymentRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceDeploymentRequest;

ModifyInstanceDeploymentRequest::ModifyInstanceDeploymentRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceDeployment")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceDeploymentRequest::~ModifyInstanceDeploymentRequest()
{}

long ModifyInstanceDeploymentRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceDeploymentRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceDeploymentRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceDeploymentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyInstanceDeploymentRequest::getDeploymentSetId()const
{
	return deploymentSetId_;
}

void ModifyInstanceDeploymentRequest::setDeploymentSetId(const std::string& deploymentSetId)
{
	deploymentSetId_ = deploymentSetId;
	setCoreParameter("DeploymentSetId", deploymentSetId);
}

std::string ModifyInstanceDeploymentRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceDeploymentRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceDeploymentRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceDeploymentRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyInstanceDeploymentRequest::getTenancy()const
{
	return tenancy_;
}

void ModifyInstanceDeploymentRequest::setTenancy(const std::string& tenancy)
{
	tenancy_ = tenancy;
	setCoreParameter("Tenancy", tenancy);
}

std::string ModifyInstanceDeploymentRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void ModifyInstanceDeploymentRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

long ModifyInstanceDeploymentRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceDeploymentRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceDeploymentRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceDeploymentRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

bool ModifyInstanceDeploymentRequest::getForce()const
{
	return force_;
}

void ModifyInstanceDeploymentRequest::setForce(bool force)
{
	force_ = force;
	setCoreParameter("Force", force ? "true" : "false");
}

std::string ModifyInstanceDeploymentRequest::getMigrationType()const
{
	return migrationType_;
}

void ModifyInstanceDeploymentRequest::setMigrationType(const std::string& migrationType)
{
	migrationType_ = migrationType;
	setCoreParameter("MigrationType", migrationType);
}

std::string ModifyInstanceDeploymentRequest::getAffinity()const
{
	return affinity_;
}

void ModifyInstanceDeploymentRequest::setAffinity(const std::string& affinity)
{
	affinity_ = affinity;
	setCoreParameter("Affinity", affinity);
}

