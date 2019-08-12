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
{}

DescribeDedicatedHostsRequest::~DescribeDedicatedHostsRequest()
{}

std::string DescribeDedicatedHostsRequest::getDedicatedHostIds()const
{
	return dedicatedHostIds_;
}

void DescribeDedicatedHostsRequest::setDedicatedHostIds(const std::string& dedicatedHostIds)
{
	dedicatedHostIds_ = dedicatedHostIds;
	setCoreParameter("DedicatedHostIds", std::to_string(dedicatedHostIds));
}

long DescribeDedicatedHostsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDedicatedHostsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeDedicatedHostsRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void DescribeDedicatedHostsRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setCoreParameter("DedicatedHostName", std::to_string(dedicatedHostName));
}

std::string DescribeDedicatedHostsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDedicatedHostsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeDedicatedHostsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDedicatedHostsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long DescribeDedicatedHostsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDedicatedHostsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeDedicatedHostsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDedicatedHostsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeDedicatedHostsRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeDedicatedHostsRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string DescribeDedicatedHostsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDedicatedHostsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string DescribeDedicatedHostsRequest::getLockReason()const
{
	return lockReason_;
}

void DescribeDedicatedHostsRequest::setLockReason(const std::string& lockReason)
{
	lockReason_ = lockReason;
	setCoreParameter("LockReason", std::to_string(lockReason));
}

std::string DescribeDedicatedHostsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDedicatedHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int DescribeDedicatedHostsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDedicatedHostsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeDedicatedHostsRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDedicatedHostsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string DescribeDedicatedHostsRequest::getDedicatedHostType()const
{
	return dedicatedHostType_;
}

void DescribeDedicatedHostsRequest::setDedicatedHostType(const std::string& dedicatedHostType)
{
	dedicatedHostType_ = dedicatedHostType;
	setCoreParameter("DedicatedHostType", std::to_string(dedicatedHostType));
}

std::vector<DescribeDedicatedHostsRequest::Tag> DescribeDedicatedHostsRequest::getTag()const
{
	return tag_;
}

void DescribeDedicatedHostsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

std::string DescribeDedicatedHostsRequest::getStatus()const
{
	return status_;
}

void DescribeDedicatedHostsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

