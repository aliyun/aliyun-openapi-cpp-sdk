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

#include <alibabacloud/ess/model/DeleteScalingGroupRequest.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DeleteScalingGroupRequest::DeleteScalingGroupRequest() :
	EssRequest("DeleteScalingGroup")
{}

DeleteScalingGroupRequest::~DeleteScalingGroupRequest()
{}

std::string DeleteScalingGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteScalingGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteScalingGroupRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DeleteScalingGroupRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

bool DeleteScalingGroupRequest::getForceDelete()const
{
	return forceDelete_;
}

void DeleteScalingGroupRequest::setForceDelete(bool forceDelete)
{
	forceDelete_ = forceDelete;
	setParameter("ForceDelete", std::to_string(forceDelete));
}

std::string DeleteScalingGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteScalingGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteScalingGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteScalingGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteScalingGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteScalingGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

