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

#include <alibabacloud/ess/model/DeleteNotificationConfigurationRequest.h>

using AlibabaCloud::Ess::Model::DeleteNotificationConfigurationRequest;

DeleteNotificationConfigurationRequest::DeleteNotificationConfigurationRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DeleteNotificationConfiguration")
{}

DeleteNotificationConfigurationRequest::~DeleteNotificationConfigurationRequest()
{}

std::string DeleteNotificationConfigurationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteNotificationConfigurationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteNotificationConfigurationRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DeleteNotificationConfigurationRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

std::string DeleteNotificationConfigurationRequest::getNotificationArn()const
{
	return notificationArn_;
}

void DeleteNotificationConfigurationRequest::setNotificationArn(const std::string& notificationArn)
{
	notificationArn_ = notificationArn;
	setCoreParameter("NotificationArn", notificationArn);
}

long DeleteNotificationConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteNotificationConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteNotificationConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteNotificationConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

