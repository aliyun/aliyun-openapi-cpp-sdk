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

#include <alibabacloud/mts/model/ListCensorPipelineRequest.h>

using AlibabaCloud::Mts::Model::ListCensorPipelineRequest;

ListCensorPipelineRequest::ListCensorPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ListCensorPipeline")
{}

ListCensorPipelineRequest::~ListCensorPipelineRequest()
{}

long ListCensorPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListCensorPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListCensorPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListCensorPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListCensorPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListCensorPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ListCensorPipelineRequest::getPageSize()const
{
	return pageSize_;
}

void ListCensorPipelineRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListCensorPipelineRequest::getState()const
{
	return state_;
}

void ListCensorPipelineRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

long ListCensorPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void ListCensorPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

long ListCensorPipelineRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCensorPipelineRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListCensorPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListCensorPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

