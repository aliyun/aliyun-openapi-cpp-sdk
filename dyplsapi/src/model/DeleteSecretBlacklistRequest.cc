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

#include <alibabacloud/dyplsapi/model/DeleteSecretBlacklistRequest.h>

using AlibabaCloud::Dyplsapi::Model::DeleteSecretBlacklistRequest;

DeleteSecretBlacklistRequest::DeleteSecretBlacklistRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "DeleteSecretBlacklist")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteSecretBlacklistRequest::~DeleteSecretBlacklistRequest()
{}

std::string DeleteSecretBlacklistRequest::getBlackType()const
{
	return blackType_;
}

void DeleteSecretBlacklistRequest::setBlackType(const std::string& blackType)
{
	blackType_ = blackType;
	setParameter("BlackType", blackType);
}

long DeleteSecretBlacklistRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteSecretBlacklistRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteSecretBlacklistRequest::getRemark()const
{
	return remark_;
}

void DeleteSecretBlacklistRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string DeleteSecretBlacklistRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteSecretBlacklistRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteSecretBlacklistRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteSecretBlacklistRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DeleteSecretBlacklistRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteSecretBlacklistRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteSecretBlacklistRequest::getPoolKey()const
{
	return poolKey_;
}

void DeleteSecretBlacklistRequest::setPoolKey(const std::string& poolKey)
{
	poolKey_ = poolKey;
	setParameter("PoolKey", poolKey);
}

std::string DeleteSecretBlacklistRequest::getBlackNo()const
{
	return blackNo_;
}

void DeleteSecretBlacklistRequest::setBlackNo(const std::string& blackNo)
{
	blackNo_ = blackNo;
	setParameter("BlackNo", blackNo);
}

