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

#include <alibabacloud/vod/model/DeleteMessageCallbackRequest.h>

using AlibabaCloud::Vod::Model::DeleteMessageCallbackRequest;

DeleteMessageCallbackRequest::DeleteMessageCallbackRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DeleteMessageCallback")
{}

DeleteMessageCallbackRequest::~DeleteMessageCallbackRequest()
{}

std::string DeleteMessageCallbackRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteMessageCallbackRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteMessageCallbackRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteMessageCallbackRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteMessageCallbackRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteMessageCallbackRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteMessageCallbackRequest::getAppId()const
{
	return appId_;
}

void DeleteMessageCallbackRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

long DeleteMessageCallbackRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void DeleteMessageCallbackRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setCoreParameter("ResourceRealOwnerId", std::to_string(resourceRealOwnerId));
}

std::string DeleteMessageCallbackRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteMessageCallbackRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteMessageCallbackRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteMessageCallbackRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

