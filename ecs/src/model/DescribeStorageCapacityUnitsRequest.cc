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

#include <alibabacloud/ecs/model/DescribeStorageCapacityUnitsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeStorageCapacityUnitsRequest;

DescribeStorageCapacityUnitsRequest::DescribeStorageCapacityUnitsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeStorageCapacityUnits")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeStorageCapacityUnitsRequest::~DescribeStorageCapacityUnitsRequest()
{}

long DescribeStorageCapacityUnitsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeStorageCapacityUnitsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeStorageCapacityUnitsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeStorageCapacityUnitsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeStorageCapacityUnitsRequest::getCapacity()const
{
	return capacity_;
}

void DescribeStorageCapacityUnitsRequest::setCapacity(int capacity)
{
	capacity_ = capacity;
	setParameter("Capacity", std::to_string(capacity));
}

std::vector<std::string> DescribeStorageCapacityUnitsRequest::getStorageCapacityUnitId()const
{
	return storageCapacityUnitId_;
}

void DescribeStorageCapacityUnitsRequest::setStorageCapacityUnitId(const std::vector<std::string>& storageCapacityUnitId)
{
	storageCapacityUnitId_ = storageCapacityUnitId;
	for(int dep1 = 0; dep1!= storageCapacityUnitId.size(); dep1++) {
		setParameter("StorageCapacityUnitId."+ std::to_string(dep1), storageCapacityUnitId.at(dep1));
	}
}

std::string DescribeStorageCapacityUnitsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeStorageCapacityUnitsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeStorageCapacityUnitsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeStorageCapacityUnitsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeStorageCapacityUnitsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeStorageCapacityUnitsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeStorageCapacityUnitsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeStorageCapacityUnitsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeStorageCapacityUnitsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStorageCapacityUnitsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeStorageCapacityUnitsRequest::getName()const
{
	return name_;
}

void DescribeStorageCapacityUnitsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::vector<std::string> DescribeStorageCapacityUnitsRequest::getStatus()const
{
	return status_;
}

void DescribeStorageCapacityUnitsRequest::setStatus(const std::vector<std::string>& status)
{
	status_ = status;
	for(int dep1 = 0; dep1!= status.size(); dep1++) {
		setParameter("Status."+ std::to_string(dep1), status.at(dep1));
	}
}

