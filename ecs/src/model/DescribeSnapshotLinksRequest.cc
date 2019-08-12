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

#include <alibabacloud/ecs/model/DescribeSnapshotLinksRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSnapshotLinksRequest;

DescribeSnapshotLinksRequest::DescribeSnapshotLinksRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeSnapshotLinks")
{}

DescribeSnapshotLinksRequest::~DescribeSnapshotLinksRequest()
{}

std::string DescribeSnapshotLinksRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeSnapshotLinksRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

long DescribeSnapshotLinksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSnapshotLinksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeSnapshotLinksRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeSnapshotLinksRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeSnapshotLinksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSnapshotLinksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeSnapshotLinksRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSnapshotLinksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeSnapshotLinksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSnapshotLinksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int DescribeSnapshotLinksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSnapshotLinksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeSnapshotLinksRequest::getDiskIds()const
{
	return diskIds_;
}

void DescribeSnapshotLinksRequest::setDiskIds(const std::string& diskIds)
{
	diskIds_ = diskIds;
	setCoreParameter("DiskIds", std::to_string(diskIds));
}

std::string DescribeSnapshotLinksRequest::getSnapshotLinkIds()const
{
	return snapshotLinkIds_;
}

void DescribeSnapshotLinksRequest::setSnapshotLinkIds(const std::string& snapshotLinkIds)
{
	snapshotLinkIds_ = snapshotLinkIds;
	setCoreParameter("SnapshotLinkIds", std::to_string(snapshotLinkIds));
}

long DescribeSnapshotLinksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSnapshotLinksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeSnapshotLinksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSnapshotLinksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

