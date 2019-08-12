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

#include <alibabacloud/ecs/model/ModifyAutoSnapshotPolicyExRequest.h>

using AlibabaCloud::Ecs::Model::ModifyAutoSnapshotPolicyExRequest;

ModifyAutoSnapshotPolicyExRequest::ModifyAutoSnapshotPolicyExRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyAutoSnapshotPolicyEx")
{}

ModifyAutoSnapshotPolicyExRequest::~ModifyAutoSnapshotPolicyExRequest()
{}

std::string ModifyAutoSnapshotPolicyExRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyAutoSnapshotPolicyExRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

long ModifyAutoSnapshotPolicyExRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAutoSnapshotPolicyExRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyAutoSnapshotPolicyExRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAutoSnapshotPolicyExRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyAutoSnapshotPolicyExRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAutoSnapshotPolicyExRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyAutoSnapshotPolicyExRequest::getAutoSnapshotPolicyId()const
{
	return autoSnapshotPolicyId_;
}

void ModifyAutoSnapshotPolicyExRequest::setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId)
{
	autoSnapshotPolicyId_ = autoSnapshotPolicyId;
	setCoreParameter("AutoSnapshotPolicyId", std::to_string(autoSnapshotPolicyId));
}

std::string ModifyAutoSnapshotPolicyExRequest::getTimePoints()const
{
	return timePoints_;
}

void ModifyAutoSnapshotPolicyExRequest::setTimePoints(const std::string& timePoints)
{
	timePoints_ = timePoints;
	setCoreParameter("TimePoints", std::to_string(timePoints));
}

int ModifyAutoSnapshotPolicyExRequest::getRetentionDays()const
{
	return retentionDays_;
}

void ModifyAutoSnapshotPolicyExRequest::setRetentionDays(int retentionDays)
{
	retentionDays_ = retentionDays;
	setCoreParameter("RetentionDays", retentionDays);
}

long ModifyAutoSnapshotPolicyExRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAutoSnapshotPolicyExRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyAutoSnapshotPolicyExRequest::getRepeatWeekdays()const
{
	return repeatWeekdays_;
}

void ModifyAutoSnapshotPolicyExRequest::setRepeatWeekdays(const std::string& repeatWeekdays)
{
	repeatWeekdays_ = repeatWeekdays;
	setCoreParameter("RepeatWeekdays", std::to_string(repeatWeekdays));
}

std::string ModifyAutoSnapshotPolicyExRequest::getAutoSnapshotPolicyName()const
{
	return autoSnapshotPolicyName_;
}

void ModifyAutoSnapshotPolicyExRequest::setAutoSnapshotPolicyName(const std::string& autoSnapshotPolicyName)
{
	autoSnapshotPolicyName_ = autoSnapshotPolicyName;
	setCoreParameter("AutoSnapshotPolicyName", std::to_string(autoSnapshotPolicyName));
}

