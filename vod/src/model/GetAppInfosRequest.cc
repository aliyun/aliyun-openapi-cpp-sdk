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

#include <alibabacloud/vod/model/GetAppInfosRequest.h>

using AlibabaCloud::Vod::Model::GetAppInfosRequest;

GetAppInfosRequest::GetAppInfosRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetAppInfos")
{
	setMethod(HttpRequest::Method::Post);
}

GetAppInfosRequest::~GetAppInfosRequest()
{}

long GetAppInfosRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetAppInfosRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetAppInfosRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetAppInfosRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long GetAppInfosRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void GetAppInfosRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setParameter("ResourceRealOwnerId", std::to_string(resourceRealOwnerId));
}

long GetAppInfosRequest::getOwnerId()const
{
	return ownerId_;
}

void GetAppInfosRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetAppInfosRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAppInfosRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetAppInfosRequest::getAppIds()const
{
	return appIds_;
}

void GetAppInfosRequest::setAppIds(const std::string& appIds)
{
	appIds_ = appIds;
	setParameter("AppIds", appIds);
}

