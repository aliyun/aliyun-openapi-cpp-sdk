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

#include <alibabacloud/mts/model/SearchTemplateRequest.h>

using AlibabaCloud::Mts::Model::SearchTemplateRequest;

SearchTemplateRequest::SearchTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SearchTemplate")
{}

SearchTemplateRequest::~SearchTemplateRequest()
{}

long SearchTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SearchTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SearchTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SearchTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string SearchTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SearchTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long SearchTemplateRequest::getPageSize()const
{
	return pageSize_;
}

void SearchTemplateRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string SearchTemplateRequest::getState()const
{
	return state_;
}

void SearchTemplateRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", std::to_string(state));
}

long SearchTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void SearchTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long SearchTemplateRequest::getPageNumber()const
{
	return pageNumber_;
}

void SearchTemplateRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string SearchTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SearchTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

