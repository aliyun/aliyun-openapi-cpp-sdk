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

#include <alibabacloud/dyplsapi/model/GetFaceVerifyRequest.h>

using AlibabaCloud::Dyplsapi::Model::GetFaceVerifyRequest;

GetFaceVerifyRequest::GetFaceVerifyRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "GetFaceVerify")
{
	setMethod(HttpRequest::Method::Post);
}

GetFaceVerifyRequest::~GetFaceVerifyRequest()
{}

long GetFaceVerifyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetFaceVerifyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetFaceVerifyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetFaceVerifyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetFaceVerifyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetFaceVerifyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetFaceVerifyRequest::getVerifyToken()const
{
	return verifyToken_;
}

void GetFaceVerifyRequest::setVerifyToken(const std::string& verifyToken)
{
	verifyToken_ = verifyToken;
	setParameter("VerifyToken", verifyToken);
}

std::string GetFaceVerifyRequest::getProdCode()const
{
	return prodCode_;
}

void GetFaceVerifyRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setParameter("ProdCode", prodCode);
}

long GetFaceVerifyRequest::getOwnerId()const
{
	return ownerId_;
}

void GetFaceVerifyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

