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

#include <alibabacloud/dysmsapi/model/QuerySmsTemplateListRequest.h>

using AlibabaCloud::Dysmsapi::Model::QuerySmsTemplateListRequest;

QuerySmsTemplateListRequest::QuerySmsTemplateListRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "QuerySmsTemplateList")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySmsTemplateListRequest::~QuerySmsTemplateListRequest()
{}

long QuerySmsTemplateListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QuerySmsTemplateListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QuerySmsTemplateListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QuerySmsTemplateListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int QuerySmsTemplateListRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySmsTemplateListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int QuerySmsTemplateListRequest::getPageIndex()const
{
	return pageIndex_;
}

void QuerySmsTemplateListRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string QuerySmsTemplateListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QuerySmsTemplateListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QuerySmsTemplateListRequest::getOwnerId()const
{
	return ownerId_;
}

void QuerySmsTemplateListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

