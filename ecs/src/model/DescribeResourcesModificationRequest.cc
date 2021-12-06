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

#include <alibabacloud/ecs/model/DescribeResourcesModificationRequest.h>

using AlibabaCloud::Ecs::Model::DescribeResourcesModificationRequest;

DescribeResourcesModificationRequest::DescribeResourcesModificationRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeResourcesModification")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeResourcesModificationRequest::~DescribeResourcesModificationRequest()
{}

long DescribeResourcesModificationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeResourcesModificationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

float DescribeResourcesModificationRequest::getMemory()const
{
	return memory_;
}

void DescribeResourcesModificationRequest::setMemory(float memory)
{
	memory_ = memory;
	setParameter("Memory", std::to_string(memory));
}

int DescribeResourcesModificationRequest::getCores()const
{
	return cores_;
}

void DescribeResourcesModificationRequest::setCores(int cores)
{
	cores_ = cores;
	setParameter("Cores", std::to_string(cores));
}

std::string DescribeResourcesModificationRequest::getRegionId()const
{
	return regionId_;
}

void DescribeResourcesModificationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeResourcesModificationRequest::getMigrateAcrossZone()const
{
	return migrateAcrossZone_;
}

void DescribeResourcesModificationRequest::setMigrateAcrossZone(bool migrateAcrossZone)
{
	migrateAcrossZone_ = migrateAcrossZone;
	setParameter("MigrateAcrossZone", migrateAcrossZone ? "true" : "false");
}

std::string DescribeResourcesModificationRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeResourcesModificationRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string DescribeResourcesModificationRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeResourcesModificationRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string DescribeResourcesModificationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeResourcesModificationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeResourcesModificationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeResourcesModificationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeResourcesModificationRequest::getOperationType()const
{
	return operationType_;
}

void DescribeResourcesModificationRequest::setOperationType(const std::string& operationType)
{
	operationType_ = operationType;
	setParameter("OperationType", operationType);
}

long DescribeResourcesModificationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeResourcesModificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeResourcesModificationRequest::getDestinationResource()const
{
	return destinationResource_;
}

void DescribeResourcesModificationRequest::setDestinationResource(const std::string& destinationResource)
{
	destinationResource_ = destinationResource;
	setParameter("DestinationResource", destinationResource);
}

