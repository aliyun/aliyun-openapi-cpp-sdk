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

#include <alibabacloud/ess/model/ModifyLifecycleHookRequest.h>

using AlibabaCloud::Ess::Model::ModifyLifecycleHookRequest;

ModifyLifecycleHookRequest::ModifyLifecycleHookRequest() :
	RpcServiceRequest("ess", "2014-08-28", "ModifyLifecycleHook")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyLifecycleHookRequest::~ModifyLifecycleHookRequest()
{}

std::string ModifyLifecycleHookRequest::getDefaultResult()const
{
	return defaultResult_;
}

void ModifyLifecycleHookRequest::setDefaultResult(const std::string& defaultResult)
{
	defaultResult_ = defaultResult;
	setParameter("DefaultResult", defaultResult);
}

int ModifyLifecycleHookRequest::getHeartbeatTimeout()const
{
	return heartbeatTimeout_;
}

void ModifyLifecycleHookRequest::setHeartbeatTimeout(int heartbeatTimeout)
{
	heartbeatTimeout_ = heartbeatTimeout;
	setParameter("HeartbeatTimeout", std::to_string(heartbeatTimeout));
}

std::string ModifyLifecycleHookRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void ModifyLifecycleHookRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string ModifyLifecycleHookRequest::getLifecycleTransition()const
{
	return lifecycleTransition_;
}

void ModifyLifecycleHookRequest::setLifecycleTransition(const std::string& lifecycleTransition)
{
	lifecycleTransition_ = lifecycleTransition;
	setParameter("LifecycleTransition", lifecycleTransition);
}

std::string ModifyLifecycleHookRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyLifecycleHookRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyLifecycleHookRequest::getLifecycleHookName()const
{
	return lifecycleHookName_;
}

void ModifyLifecycleHookRequest::setLifecycleHookName(const std::string& lifecycleHookName)
{
	lifecycleHookName_ = lifecycleHookName;
	setParameter("LifecycleHookName", lifecycleHookName);
}

std::string ModifyLifecycleHookRequest::getNotificationArn()const
{
	return notificationArn_;
}

void ModifyLifecycleHookRequest::setNotificationArn(const std::string& notificationArn)
{
	notificationArn_ = notificationArn;
	setParameter("NotificationArn", notificationArn);
}

std::string ModifyLifecycleHookRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyLifecycleHookRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyLifecycleHookRequest::getLifecycleHookId()const
{
	return lifecycleHookId_;
}

void ModifyLifecycleHookRequest::setLifecycleHookId(const std::string& lifecycleHookId)
{
	lifecycleHookId_ = lifecycleHookId;
	setParameter("LifecycleHookId", lifecycleHookId);
}

std::string ModifyLifecycleHookRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyLifecycleHookRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyLifecycleHookRequest::getNotificationMetadata()const
{
	return notificationMetadata_;
}

void ModifyLifecycleHookRequest::setNotificationMetadata(const std::string& notificationMetadata)
{
	notificationMetadata_ = notificationMetadata;
	setParameter("NotificationMetadata", notificationMetadata);
}

long ModifyLifecycleHookRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyLifecycleHookRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

