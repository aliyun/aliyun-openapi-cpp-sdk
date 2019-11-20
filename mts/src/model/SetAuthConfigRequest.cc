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

#include <alibabacloud/mts/model/SetAuthConfigRequest.h>

using AlibabaCloud::Mts::Model::SetAuthConfigRequest;

SetAuthConfigRequest::SetAuthConfigRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SetAuthConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetAuthConfigRequest::~SetAuthConfigRequest()
{}

std::string SetAuthConfigRequest::getKey1()const
{
	return key1_;
}

void SetAuthConfigRequest::setKey1(const std::string& key1)
{
	key1_ = key1;
	setCoreParameter("Key1", key1);
}

std::string SetAuthConfigRequest::getKey2()const
{
	return key2_;
}

void SetAuthConfigRequest::setKey2(const std::string& key2)
{
	key2_ = key2;
	setCoreParameter("Key2", key2);
}

std::string SetAuthConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetAuthConfigRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SetAuthConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetAuthConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetAuthConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetAuthConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetAuthConfigRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetAuthConfigRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string SetAuthConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetAuthConfigRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

