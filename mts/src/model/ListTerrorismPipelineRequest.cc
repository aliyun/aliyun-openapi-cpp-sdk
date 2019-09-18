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

#include <alibabacloud/mts/model/ListTerrorismPipelineRequest.h>

using AlibabaCloud::Mts::Model::ListTerrorismPipelineRequest;

ListTerrorismPipelineRequest::ListTerrorismPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ListTerrorismPipeline")
{}

ListTerrorismPipelineRequest::~ListTerrorismPipelineRequest()
{}

long ListTerrorismPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTerrorismPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ListTerrorismPipelineRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListTerrorismPipelineRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListTerrorismPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTerrorismPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long ListTerrorismPipelineRequest::getPageSize()const
{
	return pageSize_;
}

void ListTerrorismPipelineRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListTerrorismPipelineRequest::getState()const
{
	return state_;
}

void ListTerrorismPipelineRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

std::string ListTerrorismPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTerrorismPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListTerrorismPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListTerrorismPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ListTerrorismPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTerrorismPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

