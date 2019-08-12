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

#include <alibabacloud/mts/model/SearchWaterMarkTemplateRequest.h>

using AlibabaCloud::Mts::Model::SearchWaterMarkTemplateRequest;

SearchWaterMarkTemplateRequest::SearchWaterMarkTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SearchWaterMarkTemplate")
{}

SearchWaterMarkTemplateRequest::~SearchWaterMarkTemplateRequest()
{}

long SearchWaterMarkTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SearchWaterMarkTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SearchWaterMarkTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SearchWaterMarkTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SearchWaterMarkTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SearchWaterMarkTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SearchWaterMarkTemplateRequest::getPageSize()const
{
	return pageSize_;
}

void SearchWaterMarkTemplateRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string SearchWaterMarkTemplateRequest::getState()const
{
	return state_;
}

void SearchWaterMarkTemplateRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

long SearchWaterMarkTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void SearchWaterMarkTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

long SearchWaterMarkTemplateRequest::getPageNumber()const
{
	return pageNumber_;
}

void SearchWaterMarkTemplateRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string SearchWaterMarkTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SearchWaterMarkTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

