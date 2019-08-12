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

#include <alibabacloud/mts/model/ListPornPipelineRequest.h>

using AlibabaCloud::Mts::Model::ListPornPipelineRequest;

ListPornPipelineRequest::ListPornPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ListPornPipeline")
{}

ListPornPipelineRequest::~ListPornPipelineRequest()
{}

long ListPornPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListPornPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListPornPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListPornPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ListPornPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListPornPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long ListPornPipelineRequest::getPageSize()const
{
	return pageSize_;
}

void ListPornPipelineRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListPornPipelineRequest::getState()const
{
	return state_;
}

void ListPornPipelineRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", std::to_string(state));
}

long ListPornPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void ListPornPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long ListPornPipelineRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPornPipelineRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListPornPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListPornPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

