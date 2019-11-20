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

#include <alibabacloud/mts/model/DecryptKeyRequest.h>

using AlibabaCloud::Mts::Model::DecryptKeyRequest;

DecryptKeyRequest::DecryptKeyRequest() :
	RpcServiceRequest("mts", "2014-06-18", "DecryptKey")
{
	setMethod(HttpRequest::Method::Post);
}

DecryptKeyRequest::~DecryptKeyRequest()
{}

std::string DecryptKeyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DecryptKeyRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DecryptKeyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DecryptKeyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DecryptKeyRequest::getRand()const
{
	return rand_;
}

void DecryptKeyRequest::setRand(const std::string& rand)
{
	rand_ = rand;
	setCoreParameter("Rand", rand);
}

std::string DecryptKeyRequest::getCiphertextBlob()const
{
	return ciphertextBlob_;
}

void DecryptKeyRequest::setCiphertextBlob(const std::string& ciphertextBlob)
{
	ciphertextBlob_ = ciphertextBlob;
	setCoreParameter("CiphertextBlob", ciphertextBlob);
}

std::string DecryptKeyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DecryptKeyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DecryptKeyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DecryptKeyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DecryptKeyRequest::getOwnerId()const
{
	return ownerId_;
}

void DecryptKeyRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

