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

#include <alibabacloud/dyplsapi/model/GetSubscriptionDetailRequest.h>

using AlibabaCloud::Dyplsapi::Model::GetSubscriptionDetailRequest;

GetSubscriptionDetailRequest::GetSubscriptionDetailRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "GetSubscriptionDetail")
{
	setMethod(HttpRequest::Method::Post);
}

GetSubscriptionDetailRequest::~GetSubscriptionDetailRequest()
{}

long GetSubscriptionDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetSubscriptionDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetSubscriptionDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetSubscriptionDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long GetSubscriptionDetailRequest::getSubsId()const
{
	return subsId_;
}

void GetSubscriptionDetailRequest::setSubsId(long subsId)
{
	subsId_ = subsId;
	setParameter("SubsId", std::to_string(subsId));
}

std::string GetSubscriptionDetailRequest::getSecretNo()const
{
	return secretNo_;
}

void GetSubscriptionDetailRequest::setSecretNo(const std::string& secretNo)
{
	secretNo_ = secretNo;
	setParameter("SecretNo", secretNo);
}

std::string GetSubscriptionDetailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetSubscriptionDetailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetSubscriptionDetailRequest::getProdCode()const
{
	return prodCode_;
}

void GetSubscriptionDetailRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setParameter("ProdCode", prodCode);
}

long GetSubscriptionDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void GetSubscriptionDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetSubscriptionDetailRequest::getPoolKey()const
{
	return poolKey_;
}

void GetSubscriptionDetailRequest::setPoolKey(const std::string& poolKey)
{
	poolKey_ = poolKey;
	setParameter("PoolKey", poolKey);
}

