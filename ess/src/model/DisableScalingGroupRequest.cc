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

#include <alibabacloud/ess/model/DisableScalingGroupRequest.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DisableScalingGroupRequest::DisableScalingGroupRequest() :
	EssRequest("DisableScalingGroup")
{}

DisableScalingGroupRequest::~DisableScalingGroupRequest()
{}

long DisableScalingGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DisableScalingGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DisableScalingGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DisableScalingGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DisableScalingGroupRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DisableScalingGroupRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string DisableScalingGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DisableScalingGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DisableScalingGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DisableScalingGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DisableScalingGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DisableScalingGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

