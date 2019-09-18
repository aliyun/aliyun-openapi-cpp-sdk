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

#include <alibabacloud/ess/model/CreateNotificationConfigurationRequest.h>

using AlibabaCloud::Ess::Model::CreateNotificationConfigurationRequest;

CreateNotificationConfigurationRequest::CreateNotificationConfigurationRequest() :
	RpcServiceRequest("ess", "2014-08-28", "CreateNotificationConfiguration")
{}

CreateNotificationConfigurationRequest::~CreateNotificationConfigurationRequest()
{}

std::string CreateNotificationConfigurationRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void CreateNotificationConfigurationRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

std::string CreateNotificationConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateNotificationConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateNotificationConfigurationRequest::getNotificationArn()const
{
	return notificationArn_;
}

void CreateNotificationConfigurationRequest::setNotificationArn(const std::string& notificationArn)
{
	notificationArn_ = notificationArn;
	setCoreParameter("NotificationArn", notificationArn);
}

std::string CreateNotificationConfigurationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateNotificationConfigurationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CreateNotificationConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateNotificationConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> CreateNotificationConfigurationRequest::getNotificationType()const
{
	return notificationType_;
}

void CreateNotificationConfigurationRequest::setNotificationType(const std::vector<std::string>& notificationType)
{
	notificationType_ = notificationType;
	for(int i = 0; i!= notificationType.size(); i++)
		setCoreParameter("NotificationType."+ std::to_string(i), notificationType.at(i));
}

