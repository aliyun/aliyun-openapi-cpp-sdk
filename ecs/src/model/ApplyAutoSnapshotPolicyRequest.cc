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

#include <alibabacloud/ecs/model/ApplyAutoSnapshotPolicyRequest.h>

using AlibabaCloud::Ecs::Model::ApplyAutoSnapshotPolicyRequest;

ApplyAutoSnapshotPolicyRequest::ApplyAutoSnapshotPolicyRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ApplyAutoSnapshotPolicy")
{}

ApplyAutoSnapshotPolicyRequest::~ApplyAutoSnapshotPolicyRequest()
{}

std::string ApplyAutoSnapshotPolicyRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ApplyAutoSnapshotPolicyRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long ApplyAutoSnapshotPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ApplyAutoSnapshotPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ApplyAutoSnapshotPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ApplyAutoSnapshotPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ApplyAutoSnapshotPolicyRequest::getRegionId()const
{
	return regionId_;
}

void ApplyAutoSnapshotPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ApplyAutoSnapshotPolicyRequest::getAutoSnapshotPolicyId()const
{
	return autoSnapshotPolicyId_;
}

void ApplyAutoSnapshotPolicyRequest::setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId)
{
	autoSnapshotPolicyId_ = autoSnapshotPolicyId;
	setCoreParameter("AutoSnapshotPolicyId", autoSnapshotPolicyId);
}

std::string ApplyAutoSnapshotPolicyRequest::getDiskIds()const
{
	return diskIds_;
}

void ApplyAutoSnapshotPolicyRequest::setDiskIds(const std::string& diskIds)
{
	diskIds_ = diskIds;
	setCoreParameter("DiskIds", diskIds);
}

long ApplyAutoSnapshotPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void ApplyAutoSnapshotPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

