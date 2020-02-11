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

#include <alibabacloud/ecs/model/CreateAutoSnapshotPolicyRequest.h>

using AlibabaCloud::Ecs::Model::CreateAutoSnapshotPolicyRequest;

CreateAutoSnapshotPolicyRequest::CreateAutoSnapshotPolicyRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateAutoSnapshotPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAutoSnapshotPolicyRequest::~CreateAutoSnapshotPolicyRequest()
{}

long CreateAutoSnapshotPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAutoSnapshotPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateAutoSnapshotPolicyRequest::getTimePoints()const
{
	return timePoints_;
}

void CreateAutoSnapshotPolicyRequest::setTimePoints(const std::string& timePoints)
{
	timePoints_ = timePoints;
	setParameter("TimePoints", timePoints);
}

std::string CreateAutoSnapshotPolicyRequest::getRepeatWeekdays()const
{
	return repeatWeekdays_;
}

void CreateAutoSnapshotPolicyRequest::setRepeatWeekdays(const std::string& repeatWeekdays)
{
	repeatWeekdays_ = repeatWeekdays;
	setParameter("RepeatWeekdays", repeatWeekdays);
}

std::string CreateAutoSnapshotPolicyRequest::getRegionId()const
{
	return regionId_;
}

void CreateAutoSnapshotPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateAutoSnapshotPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateAutoSnapshotPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CreateAutoSnapshotPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateAutoSnapshotPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateAutoSnapshotPolicyRequest::getAutoSnapshotPolicyName()const
{
	return autoSnapshotPolicyName_;
}

void CreateAutoSnapshotPolicyRequest::setAutoSnapshotPolicyName(const std::string& autoSnapshotPolicyName)
{
	autoSnapshotPolicyName_ = autoSnapshotPolicyName;
	setParameter("AutoSnapshotPolicyName", autoSnapshotPolicyName);
}

int CreateAutoSnapshotPolicyRequest::getRetentionDays()const
{
	return retentionDays_;
}

void CreateAutoSnapshotPolicyRequest::setRetentionDays(int retentionDays)
{
	retentionDays_ = retentionDays;
	setParameter("RetentionDays", std::to_string(retentionDays));
}

