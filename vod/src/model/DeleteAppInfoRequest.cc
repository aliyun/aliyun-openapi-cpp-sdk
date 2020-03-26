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

#include <alibabacloud/vod/model/DeleteAppInfoRequest.h>

using AlibabaCloud::Vod::Model::DeleteAppInfoRequest;

DeleteAppInfoRequest::DeleteAppInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DeleteAppInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAppInfoRequest::~DeleteAppInfoRequest()
{}

long DeleteAppInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteAppInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteAppInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteAppInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DeleteAppInfoRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void DeleteAppInfoRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setParameter("ResourceRealOwnerId", std::to_string(resourceRealOwnerId));
}

long DeleteAppInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteAppInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteAppInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteAppInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteAppInfoRequest::getAppId()const
{
	return appId_;
}

void DeleteAppInfoRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

