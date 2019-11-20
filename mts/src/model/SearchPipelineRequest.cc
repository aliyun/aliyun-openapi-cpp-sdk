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

#include <alibabacloud/mts/model/SearchPipelineRequest.h>

using AlibabaCloud::Mts::Model::SearchPipelineRequest;

SearchPipelineRequest::SearchPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SearchPipeline")
{
	setMethod(HttpRequest::Method::Post);
}

SearchPipelineRequest::~SearchPipelineRequest()
{}

long SearchPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SearchPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long SearchPipelineRequest::getPageNumber()const
{
	return pageNumber_;
}

void SearchPipelineRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string SearchPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SearchPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long SearchPipelineRequest::getPageSize()const
{
	return pageSize_;
}

void SearchPipelineRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string SearchPipelineRequest::getState()const
{
	return state_;
}

void SearchPipelineRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

std::string SearchPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SearchPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SearchPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SearchPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SearchPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void SearchPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

