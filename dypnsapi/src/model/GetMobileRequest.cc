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

#include <alibabacloud/dypnsapi/model/GetMobileRequest.h>

using AlibabaCloud::Dypnsapi::Model::GetMobileRequest;

GetMobileRequest::GetMobileRequest() :
	RpcServiceRequest("dypnsapi", "2017-05-25", "GetMobile")
{
	setMethod(HttpRequest::Method::Post);
}

GetMobileRequest::~GetMobileRequest()
{}

long GetMobileRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetMobileRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetMobileRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetMobileRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetMobileRequest::getAccessToken()const
{
	return accessToken_;
}

void GetMobileRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long GetMobileRequest::getOwnerId()const
{
	return ownerId_;
}

void GetMobileRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetMobileRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetMobileRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetMobileRequest::getOutId()const
{
	return outId_;
}

void GetMobileRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setParameter("OutId", outId);
}

