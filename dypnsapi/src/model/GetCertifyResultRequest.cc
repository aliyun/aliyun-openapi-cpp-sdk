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

#include <alibabacloud/dypnsapi/model/GetCertifyResultRequest.h>

using AlibabaCloud::Dypnsapi::Model::GetCertifyResultRequest;

GetCertifyResultRequest::GetCertifyResultRequest() :
	RpcServiceRequest("dypnsapi", "2017-05-25", "GetCertifyResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetCertifyResultRequest::~GetCertifyResultRequest()
{}

long GetCertifyResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetCertifyResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetCertifyResultRequest::getProductCode()const
{
	return productCode_;
}

void GetCertifyResultRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string GetCertifyResultRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetCertifyResultRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetCertifyResultRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetCertifyResultRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long GetCertifyResultRequest::getOwnerId()const
{
	return ownerId_;
}

void GetCertifyResultRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetCertifyResultRequest::getToken()const
{
	return token_;
}

void GetCertifyResultRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

