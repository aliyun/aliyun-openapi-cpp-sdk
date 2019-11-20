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

#include <alibabacloud/ess/model/ModifyNotificationConfigurationRequest.h>

using AlibabaCloud::Ess::Model::ModifyNotificationConfigurationRequest;

ModifyNotificationConfigurationRequest::ModifyNotificationConfigurationRequest() :
	RpcServiceRequest("ess", "2014-08-28", "ModifyNotificationConfiguration")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyNotificationConfigurationRequest::~ModifyNotificationConfigurationRequest()
{}

std::string ModifyNotificationConfigurationRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void ModifyNotificationConfigurationRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

std::string ModifyNotificationConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyNotificationConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyNotificationConfigurationRequest::getNotificationArn()const
{
	return notificationArn_;
}

void ModifyNotificationConfigurationRequest::setNotificationArn(const std::string& notificationArn)
{
	notificationArn_ = notificationArn;
	setCoreParameter("NotificationArn", notificationArn);
}

std::string ModifyNotificationConfigurationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNotificationConfigurationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ModifyNotificationConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNotificationConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> ModifyNotificationConfigurationRequest::getNotificationType()const
{
	return notificationType_;
}

void ModifyNotificationConfigurationRequest::setNotificationType(const std::vector<std::string>& notificationType)
{
	notificationType_ = notificationType;
	for(int dep1 = 0; dep1!= notificationType.size(); dep1++)
		setCoreParameter("NotificationType."+ std::to_string(dep1), notificationType.at(dep1));
}

