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

#include <alibabacloud/ess/model/CreateLifecycleHookRequest.h>

using AlibabaCloud::Ess::Model::CreateLifecycleHookRequest;

CreateLifecycleHookRequest::CreateLifecycleHookRequest() :
	RpcServiceRequest("ess", "2014-08-28", "CreateLifecycleHook")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLifecycleHookRequest::~CreateLifecycleHookRequest()
{}

std::string CreateLifecycleHookRequest::getDefaultResult()const
{
	return defaultResult_;
}

void CreateLifecycleHookRequest::setDefaultResult(const std::string& defaultResult)
{
	defaultResult_ = defaultResult;
	setParameter("DefaultResult", defaultResult);
}

int CreateLifecycleHookRequest::getHeartbeatTimeout()const
{
	return heartbeatTimeout_;
}

void CreateLifecycleHookRequest::setHeartbeatTimeout(int heartbeatTimeout)
{
	heartbeatTimeout_ = heartbeatTimeout;
	setParameter("HeartbeatTimeout", std::to_string(heartbeatTimeout));
}

std::string CreateLifecycleHookRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void CreateLifecycleHookRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string CreateLifecycleHookRequest::getLifecycleTransition()const
{
	return lifecycleTransition_;
}

void CreateLifecycleHookRequest::setLifecycleTransition(const std::string& lifecycleTransition)
{
	lifecycleTransition_ = lifecycleTransition;
	setParameter("LifecycleTransition", lifecycleTransition);
}

std::string CreateLifecycleHookRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLifecycleHookRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateLifecycleHookRequest::getLifecycleHookName()const
{
	return lifecycleHookName_;
}

void CreateLifecycleHookRequest::setLifecycleHookName(const std::string& lifecycleHookName)
{
	lifecycleHookName_ = lifecycleHookName;
	setParameter("LifecycleHookName", lifecycleHookName);
}

std::string CreateLifecycleHookRequest::getNotificationArn()const
{
	return notificationArn_;
}

void CreateLifecycleHookRequest::setNotificationArn(const std::string& notificationArn)
{
	notificationArn_ = notificationArn;
	setParameter("NotificationArn", notificationArn);
}

std::string CreateLifecycleHookRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLifecycleHookRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateLifecycleHookRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLifecycleHookRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateLifecycleHookRequest::getNotificationMetadata()const
{
	return notificationMetadata_;
}

void CreateLifecycleHookRequest::setNotificationMetadata(const std::string& notificationMetadata)
{
	notificationMetadata_ = notificationMetadata;
	setParameter("NotificationMetadata", notificationMetadata);
}

long CreateLifecycleHookRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLifecycleHookRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<CreateLifecycleHookRequest::LifecycleHook> CreateLifecycleHookRequest::getLifecycleHook()const
{
	return lifecycleHook_;
}

void CreateLifecycleHookRequest::setLifecycleHook(const std::vector<LifecycleHook>& lifecycleHook)
{
	lifecycleHook_ = lifecycleHook;
	for(int dep1 = 0; dep1!= lifecycleHook.size(); dep1++) {
		auto lifecycleHookObj = lifecycleHook.at(dep1);
		std::string lifecycleHookObjStr = "LifecycleHook." + std::to_string(dep1 + 1);
		setParameter(lifecycleHookObjStr + ".DefaultResult", lifecycleHookObj.defaultResult);
		setParameter(lifecycleHookObjStr + ".LifecycleHookName", lifecycleHookObj.lifecycleHookName);
		setParameter(lifecycleHookObjStr + ".HeartbeatTimeout", std::to_string(lifecycleHookObj.heartbeatTimeout));
		setParameter(lifecycleHookObjStr + ".NotificationArn", lifecycleHookObj.notificationArn);
		setParameter(lifecycleHookObjStr + ".NotificationMetadata", lifecycleHookObj.notificationMetadata);
		setParameter(lifecycleHookObjStr + ".LifecycleTransition", lifecycleHookObj.lifecycleTransition);
	}
}

