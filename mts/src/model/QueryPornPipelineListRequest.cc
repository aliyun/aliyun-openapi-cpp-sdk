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

#include <alibabacloud/mts/model/QueryPornPipelineListRequest.h>

using AlibabaCloud::Mts::Model::QueryPornPipelineListRequest;

QueryPornPipelineListRequest::QueryPornPipelineListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryPornPipelineList")
{}

QueryPornPipelineListRequest::~QueryPornPipelineListRequest()
{}

long QueryPornPipelineListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryPornPipelineListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryPornPipelineListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryPornPipelineListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryPornPipelineListRequest::getPipelineIds()const
{
	return pipelineIds_;
}

void QueryPornPipelineListRequest::setPipelineIds(const std::string& pipelineIds)
{
	pipelineIds_ = pipelineIds;
	setCoreParameter("PipelineIds", pipelineIds);
}

std::string QueryPornPipelineListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryPornPipelineListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryPornPipelineListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryPornPipelineListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryPornPipelineListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryPornPipelineListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

