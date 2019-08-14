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

#include <alibabacloud/ecs/model/DescribeSnapshotPackageRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSnapshotPackageRequest;

DescribeSnapshotPackageRequest::DescribeSnapshotPackageRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeSnapshotPackage")
{}

DescribeSnapshotPackageRequest::~DescribeSnapshotPackageRequest()
{}

std::string DescribeSnapshotPackageRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeSnapshotPackageRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DescribeSnapshotPackageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSnapshotPackageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSnapshotPackageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSnapshotPackageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSnapshotPackageRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSnapshotPackageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeSnapshotPackageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSnapshotPackageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeSnapshotPackageRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSnapshotPackageRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeSnapshotPackageRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSnapshotPackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeSnapshotPackageRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSnapshotPackageRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

