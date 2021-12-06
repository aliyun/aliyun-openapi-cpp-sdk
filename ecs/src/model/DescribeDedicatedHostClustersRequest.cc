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

#include <alibabacloud/ecs/model/DescribeDedicatedHostClustersRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDedicatedHostClustersRequest;

DescribeDedicatedHostClustersRequest::DescribeDedicatedHostClustersRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDedicatedHostClusters")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedHostClustersRequest::~DescribeDedicatedHostClustersRequest()
{}

std::string DescribeDedicatedHostClustersRequest::getDedicatedHostClusterName()const
{
	return dedicatedHostClusterName_;
}

void DescribeDedicatedHostClustersRequest::setDedicatedHostClusterName(const std::string& dedicatedHostClusterName)
{
	dedicatedHostClusterName_ = dedicatedHostClusterName;
	setParameter("DedicatedHostClusterName", dedicatedHostClusterName);
}

long DescribeDedicatedHostClustersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDedicatedHostClustersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDedicatedHostClustersRequest::getDedicatedHostClusterIds()const
{
	return dedicatedHostClusterIds_;
}

void DescribeDedicatedHostClustersRequest::setDedicatedHostClusterIds(const std::string& dedicatedHostClusterIds)
{
	dedicatedHostClusterIds_ = dedicatedHostClusterIds;
	setParameter("DedicatedHostClusterIds", dedicatedHostClusterIds);
}

int DescribeDedicatedHostClustersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDedicatedHostClustersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDedicatedHostClustersRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDedicatedHostClustersRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDedicatedHostClustersRequest::getLockReason()const
{
	return lockReason_;
}

void DescribeDedicatedHostClustersRequest::setLockReason(const std::string& lockReason)
{
	lockReason_ = lockReason;
	setParameter("LockReason", lockReason);
}

std::string DescribeDedicatedHostClustersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDedicatedHostClustersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeDedicatedHostClustersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDedicatedHostClustersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeDedicatedHostClustersRequest::Tag> DescribeDedicatedHostClustersRequest::getTag()const
{
	return tag_;
}

void DescribeDedicatedHostClustersRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string DescribeDedicatedHostClustersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDedicatedHostClustersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDedicatedHostClustersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDedicatedHostClustersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDedicatedHostClustersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDedicatedHostClustersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDedicatedHostClustersRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDedicatedHostClustersRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeDedicatedHostClustersRequest::getStatus()const
{
	return status_;
}

void DescribeDedicatedHostClustersRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

