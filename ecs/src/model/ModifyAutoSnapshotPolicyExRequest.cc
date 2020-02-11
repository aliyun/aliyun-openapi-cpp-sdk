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
{
	setMethod(HttpRequest::Method::Post);
}

ModifyAutoSnapshotPolicyExRequest::~ModifyAutoSnapshotPolicyExRequest()
{}

long ModifyAutoSnapshotPolicyExRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAutoSnapshotPolicyExRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyAutoSnapshotPolicyExRequest::getAutoSnapshotPolicyId()const
{
	return autoSnapshotPolicyId_;
}

void ModifyAutoSnapshotPolicyExRequest::setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId)
{
	autoSnapshotPolicyId_ = autoSnapshotPolicyId;
	setParameter("AutoSnapshotPolicyId", autoSnapshotPolicyId);
}

std::string ModifyAutoSnapshotPolicyExRequest::getTimePoints()const
{
	return timePoints_;
}

void ModifyAutoSnapshotPolicyExRequest::setTimePoints(const std::string& timePoints)
{
	timePoints_ = timePoints;
	setParameter("TimePoints", timePoints);
}

std::string ModifyAutoSnapshotPolicyExRequest::getRepeatWeekdays()const
{
	return repeatWeekdays_;
}

void ModifyAutoSnapshotPolicyExRequest::setRepeatWeekdays(const std::string& repeatWeekdays)
{
	repeatWeekdays_ = repeatWeekdays;
	setParameter("RepeatWeekdays", repeatWeekdays);
}

std::string ModifyAutoSnapshotPolicyExRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAutoSnapshotPolicyExRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyAutoSnapshotPolicyExRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAutoSnapshotPolicyExRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ModifyAutoSnapshotPolicyExRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAutoSnapshotPolicyExRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyAutoSnapshotPolicyExRequest::getAutoSnapshotPolicyName()const
{
	return autoSnapshotPolicyName_;
}

void ModifyAutoSnapshotPolicyExRequest::setAutoSnapshotPolicyName(const std::string& autoSnapshotPolicyName)
{
	autoSnapshotPolicyName_ = autoSnapshotPolicyName;
	setParameter("AutoSnapshotPolicyName", autoSnapshotPolicyName);
}

int ModifyAutoSnapshotPolicyExRequest::getRetentionDays()const
{
	return retentionDays_;
}

void ModifyAutoSnapshotPolicyExRequest::setRetentionDays(int retentionDays)
{
	retentionDays_ = retentionDays;
	setParameter("RetentionDays", std::to_string(retentionDays));
}

