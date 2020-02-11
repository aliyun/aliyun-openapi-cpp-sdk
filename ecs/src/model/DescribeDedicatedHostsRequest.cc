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

#include <alibabacloud/ecs/model/DescribeDedicatedHostsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDedicatedHostsRequest;

DescribeDedicatedHostsRequest::DescribeDedicatedHostsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDedicatedHosts")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedHostsRequest::~DescribeDedicatedHostsRequest()
{}

std::string DescribeDedicatedHostsRequest::getDedicatedHostIds()const
{
	return dedicatedHostIds_;
}

void DescribeDedicatedHostsRequest::setDedicatedHostIds(const std::string& dedicatedHostIds)
{
	dedicatedHostIds_ = dedicatedHostIds;
	setParameter("DedicatedHostIds", dedicatedHostIds);
}

long DescribeDedicatedHostsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDedicatedHostsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeDedicatedHostsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDedicatedHostsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDedicatedHostsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDedicatedHostsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDedicatedHostsRequest::getLockReason()const
{
	return lockReason_;
}

void DescribeDedicatedHostsRequest::setLockReason(const std::string& lockReason)
{
	lockReason_ = lockReason;
	setParameter("LockReason", lockReason);
}

std::string DescribeDedicatedHostsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDedicatedHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeDedicatedHostsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDedicatedHostsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDedicatedHostsRequest::getDedicatedHostType()const
{
	return dedicatedHostType_;
}

void DescribeDedicatedHostsRequest::setDedicatedHostType(const std::string& dedicatedHostType)
{
	dedicatedHostType_ = dedicatedHostType;
	setParameter("DedicatedHostType", dedicatedHostType);
}

std::vector<DescribeDedicatedHostsRequest::Tag> DescribeDedicatedHostsRequest::getTag()const
{
	return tag_;
}

void DescribeDedicatedHostsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeDedicatedHostsRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void DescribeDedicatedHostsRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setParameter("DedicatedHostName", dedicatedHostName);
}

std::string DescribeDedicatedHostsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDedicatedHostsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDedicatedHostsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDedicatedHostsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDedicatedHostsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDedicatedHostsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDedicatedHostsRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDedicatedHostsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeDedicatedHostsRequest::getStatus()const
{
	return status_;
}

void DescribeDedicatedHostsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

