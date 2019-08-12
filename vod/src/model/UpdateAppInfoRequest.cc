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

#include <alibabacloud/vod/model/UpdateAppInfoRequest.h>

using AlibabaCloud::Vod::Model::UpdateAppInfoRequest;

UpdateAppInfoRequest::UpdateAppInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateAppInfo")
{}

UpdateAppInfoRequest::~UpdateAppInfoRequest()
{}

long UpdateAppInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateAppInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UpdateAppInfoRequest::getAppName()const
{
	return appName_;
}

void UpdateAppInfoRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string UpdateAppInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateAppInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string UpdateAppInfoRequest::getAppId()const
{
	return appId_;
}

void UpdateAppInfoRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string UpdateAppInfoRequest::getDescription()const
{
	return description_;
}

void UpdateAppInfoRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long UpdateAppInfoRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void UpdateAppInfoRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setCoreParameter("ResourceRealOwnerId", resourceRealOwnerId);
}

long UpdateAppInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateAppInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string UpdateAppInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateAppInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string UpdateAppInfoRequest::getStatus()const
{
	return status_;
}

void UpdateAppInfoRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

