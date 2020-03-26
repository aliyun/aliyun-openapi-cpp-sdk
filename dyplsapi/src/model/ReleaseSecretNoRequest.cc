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

#include <alibabacloud/dyplsapi/model/ReleaseSecretNoRequest.h>

using AlibabaCloud::Dyplsapi::Model::ReleaseSecretNoRequest;

ReleaseSecretNoRequest::ReleaseSecretNoRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "ReleaseSecretNo")
{
	setMethod(HttpRequest::Method::Post);
}

ReleaseSecretNoRequest::~ReleaseSecretNoRequest()
{}

long ReleaseSecretNoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReleaseSecretNoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReleaseSecretNoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReleaseSecretNoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ReleaseSecretNoRequest::getOwnerId()const
{
	return ownerId_;
}

void ReleaseSecretNoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ReleaseSecretNoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReleaseSecretNoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReleaseSecretNoRequest::getPoolKey()const
{
	return poolKey_;
}

void ReleaseSecretNoRequest::setPoolKey(const std::string& poolKey)
{
	poolKey_ = poolKey;
	setParameter("PoolKey", poolKey);
}

std::string ReleaseSecretNoRequest::getSecretNo()const
{
	return secretNo_;
}

void ReleaseSecretNoRequest::setSecretNo(const std::string& secretNo)
{
	secretNo_ = secretNo;
	setParameter("SecretNo", secretNo);
}

