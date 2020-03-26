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

#include <alibabacloud/mts/model/QueryPipelineListRequest.h>

using AlibabaCloud::Mts::Model::QueryPipelineListRequest;

QueryPipelineListRequest::QueryPipelineListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryPipelineList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryPipelineListRequest::~QueryPipelineListRequest()
{}

long QueryPipelineListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryPipelineListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryPipelineListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryPipelineListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryPipelineListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryPipelineListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long QueryPipelineListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryPipelineListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryPipelineListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryPipelineListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryPipelineListRequest::getPipelineIds()const
{
	return pipelineIds_;
}

void QueryPipelineListRequest::setPipelineIds(const std::string& pipelineIds)
{
	pipelineIds_ = pipelineIds;
	setParameter("PipelineIds", pipelineIds);
}

