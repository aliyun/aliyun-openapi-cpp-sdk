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

#include <alibabacloud/vod/model/ListTranscodeTemplateGroupRequest.h>

using AlibabaCloud::Vod::Model::ListTranscodeTemplateGroupRequest;

ListTranscodeTemplateGroupRequest::ListTranscodeTemplateGroupRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListTranscodeTemplateGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ListTranscodeTemplateGroupRequest::~ListTranscodeTemplateGroupRequest()
{}

long ListTranscodeTemplateGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTranscodeTemplateGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListTranscodeTemplateGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTranscodeTemplateGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ListTranscodeTemplateGroupRequest::getPageSize()const
{
	return pageSize_;
}

void ListTranscodeTemplateGroupRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListTranscodeTemplateGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTranscodeTemplateGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ListTranscodeTemplateGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTranscodeTemplateGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int ListTranscodeTemplateGroupRequest::getPageNo()const
{
	return pageNo_;
}

void ListTranscodeTemplateGroupRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string ListTranscodeTemplateGroupRequest::getAppId()const
{
	return appId_;
}

void ListTranscodeTemplateGroupRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

