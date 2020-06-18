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

#include <alibabacloud/dypnsapi/model/GetAuthTokenRequest.h>

using AlibabaCloud::Dypnsapi::Model::GetAuthTokenRequest;

GetAuthTokenRequest::GetAuthTokenRequest() :
	RpcServiceRequest("dypnsapi", "2017-05-25", "GetAuthToken")
{
	setMethod(HttpRequest::Method::Post);
}

GetAuthTokenRequest::~GetAuthTokenRequest()
{}

long GetAuthTokenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetAuthTokenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetAuthTokenRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetAuthTokenRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetAuthTokenRequest::getOrigin()const
{
	return origin_;
}

void GetAuthTokenRequest::setOrigin(const std::string& origin)
{
	origin_ = origin;
	setParameter("Origin", origin);
}

long GetAuthTokenRequest::getOwnerId()const
{
	return ownerId_;
}

void GetAuthTokenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetAuthTokenRequest::getUrl()const
{
	return url_;
}

void GetAuthTokenRequest::setUrl(const std::string& url)
{
	url_ = url;
	setParameter("Url", url);
}

std::string GetAuthTokenRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAuthTokenRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

