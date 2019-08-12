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
{}

CreateLifecycleHookRequest::~CreateLifecycleHookRequest()
{}

std::string CreateLifecycleHookRequest::getDefaultResult()const
{
	return defaultResult_;
}

void CreateLifecycleHookRequest::setDefaultResult(const std::string& defaultResult)
{
	defaultResult_ = defaultResult;
	setCoreParameter("DefaultResult", defaultResult);
}

std::string CreateLifecycleHookRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLifecycleHookRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateLifecycleHookRequest::getHeartbeatTimeout()const
{
	return heartbeatTimeout_;
}

void CreateLifecycleHookRequest::setHeartbeatTimeout(int heartbeatTimeout)
{
	heartbeatTimeout_ = heartbeatTimeout;
	setCoreParameter("HeartbeatTimeout", heartbeatTimeout);
}

std::string CreateLifecycleHookRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void CreateLifecycleHookRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

std::string CreateLifecycleHookRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLifecycleHookRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateLifecycleHookRequest::getNotificationMetadata()const
{
	return notificationMetadata_;
}

void CreateLifecycleHookRequest::setNotificationMetadata(const std::string& notificationMetadata)
{
	notificationMetadata_ = notificationMetadata;
	setCoreParameter("NotificationMetadata", notificationMetadata);
}

long CreateLifecycleHookRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLifecycleHookRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateLifecycleHookRequest::getLifecycleTransition()const
{
	return lifecycleTransition_;
}

void CreateLifecycleHookRequest::setLifecycleTransition(const std::string& lifecycleTransition)
{
	lifecycleTransition_ = lifecycleTransition;
	setCoreParameter("LifecycleTransition", lifecycleTransition);
}

std::string CreateLifecycleHookRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLifecycleHookRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateLifecycleHookRequest::getLifecycleHookName()const
{
	return lifecycleHookName_;
}

void CreateLifecycleHookRequest::setLifecycleHookName(const std::string& lifecycleHookName)
{
	lifecycleHookName_ = lifecycleHookName;
	setCoreParameter("LifecycleHookName", lifecycleHookName);
}

std::string CreateLifecycleHookRequest::getNotificationArn()const
{
	return notificationArn_;
}

void CreateLifecycleHookRequest::setNotificationArn(const std::string& notificationArn)
{
	notificationArn_ = notificationArn;
	setCoreParameter("NotificationArn", notificationArn);
}

std::vector<CreateLifecycleHookRequest::LifecycleHook> CreateLifecycleHookRequest::getLifecycleHook()const
{
	return lifecycleHook_;
}

void CreateLifecycleHookRequest::setLifecycleHook(const std::vector<LifecycleHook>& lifecycleHook)
{
	lifecycleHook_ = lifecycleHook;
	int i = 0;
	for(int i = 0; i!= lifecycleHook.size(); i++)	{
		auto obj = lifecycleHook.at(i);
		std::string str ="LifecycleHook."+ std::to_string(i);
		setCoreParameter(str + ".DefaultResult", std::to_string(obj.defaultResult));
		setCoreParameter(str + ".LifecycleHookName", std::to_string(obj.lifecycleHookName));
		setCoreParameter(str + ".HeartbeatTimeout", obj.heartbeatTimeout);
		setCoreParameter(str + ".NotificationArn", std::to_string(obj.notificationArn));
		setCoreParameter(str + ".NotificationMetadata", std::to_string(obj.notificationMetadata));
		setCoreParameter(str + ".LifecycleTransition", std::to_string(obj.lifecycleTransition));
	}
}

