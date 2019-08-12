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

#include <alibabacloud/mts/model/ListAsrPipelineRequest.h>

using AlibabaCloud::Mts::Model::ListAsrPipelineRequest;

ListAsrPipelineRequest::ListAsrPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ListAsrPipeline")
{}

ListAsrPipelineRequest::~ListAsrPipelineRequest()
{}

long ListAsrPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAsrPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListAsrPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListAsrPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ListAsrPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListAsrPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long ListAsrPipelineRequest::getPageSize()const
{
	return pageSize_;
}

void ListAsrPipelineRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListAsrPipelineRequest::getState()const
{
	return state_;
}

void ListAsrPipelineRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", std::to_string(state));
}

long ListAsrPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAsrPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long ListAsrPipelineRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAsrPipelineRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListAsrPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAsrPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

