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

#include <alibabacloud/dyvmsapi/model/CreateSipAccountRequest.h>

using AlibabaCloud::Dyvmsapi::Model::CreateSipAccountRequest;

CreateSipAccountRequest::CreateSipAccountRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "CreateSipAccount")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSipAccountRequest::~CreateSipAccountRequest()
{}

long CreateSipAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSipAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateSipAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSipAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateSipAccountRequest::getBusinessKey()const
{
	return businessKey_;
}

void CreateSipAccountRequest::setBusinessKey(const std::string& businessKey)
{
	businessKey_ = businessKey;
	setParameter("BusinessKey", businessKey);
}

long CreateSipAccountRequest::getPartnerId()const
{
	return partnerId_;
}

void CreateSipAccountRequest::setPartnerId(long partnerId)
{
	partnerId_ = partnerId;
	setParameter("PartnerId", std::to_string(partnerId));
}

std::string CreateSipAccountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSipAccountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CreateSipAccountRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSipAccountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

