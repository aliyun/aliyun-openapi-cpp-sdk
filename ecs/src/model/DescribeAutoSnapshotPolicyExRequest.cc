<<<<<<< HEAD
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
{}

DescribeAutoSnapshotPolicyExRequest::~DescribeAutoSnapshotPolicyExRequest()
{}

std::string DescribeAutoSnapshotPolicyExRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeAutoSnapshotPolicyExRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DescribeAutoSnapshotPolicyExRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAutoSnapshotPolicyExRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAutoSnapshotPolicyExRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAutoSnapshotPolicyExRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAutoSnapshotPolicyExRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAutoSnapshotPolicyExRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeAutoSnapshotPolicyExRequest::getAutoSnapshotPolicyId()const
{
	return autoSnapshotPolicyId_;
}

void DescribeAutoSnapshotPolicyExRequest::setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId)
{
	autoSnapshotPolicyId_ = autoSnapshotPolicyId;
	setCoreParameter("AutoSnapshotPolicyId", autoSnapshotPolicyId);
}

std::string DescribeAutoSnapshotPolicyExRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAutoSnapshotPolicyExRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeAutoSnapshotPolicyExRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAutoSnapshotPolicyExRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeAutoSnapshotPolicyExRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAutoSnapshotPolicyExRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeAutoSnapshotPolicyExRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAutoSnapshotPolicyExRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

=======
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
{}

DescribeAutoSnapshotPolicyExRequest::~DescribeAutoSnapshotPolicyExRequest()
{}

std::string DescribeAutoSnapshotPolicyExRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeAutoSnapshotPolicyExRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DescribeAutoSnapshotPolicyExRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAutoSnapshotPolicyExRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAutoSnapshotPolicyExRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAutoSnapshotPolicyExRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAutoSnapshotPolicyExRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAutoSnapshotPolicyExRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeAutoSnapshotPolicyExRequest::getAutoSnapshotPolicyId()const
{
	return autoSnapshotPolicyId_;
}

void DescribeAutoSnapshotPolicyExRequest::setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId)
{
	autoSnapshotPolicyId_ = autoSnapshotPolicyId;
	setCoreParameter("AutoSnapshotPolicyId", autoSnapshotPolicyId);
}

std::string DescribeAutoSnapshotPolicyExRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAutoSnapshotPolicyExRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeAutoSnapshotPolicyExRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAutoSnapshotPolicyExRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeAutoSnapshotPolicyExRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAutoSnapshotPolicyExRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeAutoSnapshotPolicyExRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAutoSnapshotPolicyExRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

>>>>>>> master
