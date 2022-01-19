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

#include <alibabacloud/dysmsapi/model/QuerySmsSignListRequest.h>

using AlibabaCloud::Dysmsapi::Model::QuerySmsSignListRequest;

QuerySmsSignListRequest::QuerySmsSignListRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "QuerySmsSignList")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySmsSignListRequest::~QuerySmsSignListRequest()
{}

long QuerySmsSignListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QuerySmsSignListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QuerySmsSignListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QuerySmsSignListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int QuerySmsSignListRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySmsSignListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int QuerySmsSignListRequest::getPageIndex()const
{
	return pageIndex_;
}

void QuerySmsSignListRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string QuerySmsSignListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QuerySmsSignListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QuerySmsSignListRequest::getOwnerId()const
{
	return ownerId_;
}

void QuerySmsSignListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

