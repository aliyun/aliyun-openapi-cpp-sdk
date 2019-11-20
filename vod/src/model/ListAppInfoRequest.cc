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

#include <alibabacloud/vod/model/ListAppInfoRequest.h>

using AlibabaCloud::Vod::Model::ListAppInfoRequest;

ListAppInfoRequest::ListAppInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListAppInfo")
{
	setMethod(HttpRequest::Method::Post);
}

ListAppInfoRequest::~ListAppInfoRequest()
{}

long ListAppInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAppInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ListAppInfoRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void ListAppInfoRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setCoreParameter("ResourceRealOwnerId", std::to_string(resourceRealOwnerId));
}

std::string ListAppInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAppInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int ListAppInfoRequest::getPageSize()const
{
	return pageSize_;
}

void ListAppInfoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListAppInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListAppInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ListAppInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAppInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int ListAppInfoRequest::getPageNo()const
{
	return pageNo_;
}

void ListAppInfoRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", std::to_string(pageNo));
}

std::string ListAppInfoRequest::getStatus()const
{
	return status_;
}

void ListAppInfoRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

