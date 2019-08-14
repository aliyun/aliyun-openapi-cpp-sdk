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

#include <alibabacloud/ecs/model/DeleteAutoSnapshotPolicyRequest.h>

using AlibabaCloud::Ecs::Model::DeleteAutoSnapshotPolicyRequest;

DeleteAutoSnapshotPolicyRequest::DeleteAutoSnapshotPolicyRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteAutoSnapshotPolicy")
{}

DeleteAutoSnapshotPolicyRequest::~DeleteAutoSnapshotPolicyRequest()
{}

std::string DeleteAutoSnapshotPolicyRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DeleteAutoSnapshotPolicyRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DeleteAutoSnapshotPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteAutoSnapshotPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteAutoSnapshotPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteAutoSnapshotPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteAutoSnapshotPolicyRequest::getRegionId()const
{
	return regionId_;
}

void DeleteAutoSnapshotPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteAutoSnapshotPolicyRequest::getAutoSnapshotPolicyId()const
{
	return autoSnapshotPolicyId_;
}

void DeleteAutoSnapshotPolicyRequest::setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId)
{
	autoSnapshotPolicyId_ = autoSnapshotPolicyId;
	setCoreParameter("AutoSnapshotPolicyId", autoSnapshotPolicyId);
}

long DeleteAutoSnapshotPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteAutoSnapshotPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

