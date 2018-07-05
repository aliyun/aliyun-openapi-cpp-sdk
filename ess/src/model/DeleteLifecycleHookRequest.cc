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

#include <alibabacloud/ess/model/DeleteLifecycleHookRequest.h>

using AlibabaCloud::Ess::Model::DeleteLifecycleHookRequest;

DeleteLifecycleHookRequest::DeleteLifecycleHookRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DeleteLifecycleHook")
{}

DeleteLifecycleHookRequest::~DeleteLifecycleHookRequest()
{}

std::string DeleteLifecycleHookRequest::getLifecycleHookName()const
{
	return lifecycleHookName_;
}

void DeleteLifecycleHookRequest::setLifecycleHookName(const std::string& lifecycleHookName)
{
	lifecycleHookName_ = lifecycleHookName;
	setParameter("LifecycleHookName", lifecycleHookName);
}

std::string DeleteLifecycleHookRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteLifecycleHookRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteLifecycleHookRequest::getLifecycleHookId()const
{
	return lifecycleHookId_;
}

void DeleteLifecycleHookRequest::setLifecycleHookId(const std::string& lifecycleHookId)
{
	lifecycleHookId_ = lifecycleHookId;
	setParameter("LifecycleHookId", lifecycleHookId);
}

std::string DeleteLifecycleHookRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DeleteLifecycleHookRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string DeleteLifecycleHookRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteLifecycleHookRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteLifecycleHookRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLifecycleHookRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteLifecycleHookRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLifecycleHookRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

