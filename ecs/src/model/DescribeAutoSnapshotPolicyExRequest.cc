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

#include <alibabacloud/ecs/model/DescribeAutoSnapshotPolicyExRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAutoSnapshotPolicyExRequest;

DescribeAutoSnapshotPolicyExRequest::DescribeAutoSnapshotPolicyExRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeAutoSnapshotPolicyEx")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAutoSnapshotPolicyExRequest::~DescribeAutoSnapshotPolicyExRequest()
{}

long DescribeAutoSnapshotPolicyExRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAutoSnapshotPolicyExRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAutoSnapshotPolicyExRequest::getAutoSnapshotPolicyId()const
{
	return autoSnapshotPolicyId_;
}

void DescribeAutoSnapshotPolicyExRequest::setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId)
{
	autoSnapshotPolicyId_ = autoSnapshotPolicyId;
	setParameter("AutoSnapshotPolicyId", autoSnapshotPolicyId);
}

int DescribeAutoSnapshotPolicyExRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAutoSnapshotPolicyExRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAutoSnapshotPolicyExRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAutoSnapshotPolicyExRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeAutoSnapshotPolicyExRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAutoSnapshotPolicyExRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAutoSnapshotPolicyExRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAutoSnapshotPolicyExRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAutoSnapshotPolicyExRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAutoSnapshotPolicyExRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeAutoSnapshotPolicyExRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAutoSnapshotPolicyExRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

