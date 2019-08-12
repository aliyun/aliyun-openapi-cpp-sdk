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

#include <alibabacloud/vod/model/GetMessageCallbackRequest.h>

using AlibabaCloud::Vod::Model::GetMessageCallbackRequest;

GetMessageCallbackRequest::GetMessageCallbackRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetMessageCallback")
{}

GetMessageCallbackRequest::~GetMessageCallbackRequest()
{}

std::string GetMessageCallbackRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetMessageCallbackRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetMessageCallbackRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetMessageCallbackRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetMessageCallbackRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetMessageCallbackRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string GetMessageCallbackRequest::getAppId()const
{
	return appId_;
}

void GetMessageCallbackRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

long GetMessageCallbackRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void GetMessageCallbackRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setCoreParameter("ResourceRealOwnerId", std::to_string(resourceRealOwnerId));
}

std::string GetMessageCallbackRequest::getOwnerId()const
{
	return ownerId_;
}

void GetMessageCallbackRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string GetMessageCallbackRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetMessageCallbackRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

