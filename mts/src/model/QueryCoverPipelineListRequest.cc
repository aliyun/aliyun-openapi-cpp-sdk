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

#include <alibabacloud/mts/model/QueryCoverPipelineListRequest.h>

using AlibabaCloud::Mts::Model::QueryCoverPipelineListRequest;

QueryCoverPipelineListRequest::QueryCoverPipelineListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryCoverPipelineList")
{}

QueryCoverPipelineListRequest::~QueryCoverPipelineListRequest()
{}

long QueryCoverPipelineListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryCoverPipelineListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryCoverPipelineListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryCoverPipelineListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryCoverPipelineListRequest::getPipelineIds()const
{
	return pipelineIds_;
}

void QueryCoverPipelineListRequest::setPipelineIds(const std::string& pipelineIds)
{
	pipelineIds_ = pipelineIds;
	setCoreParameter("PipelineIds", pipelineIds);
}

std::string QueryCoverPipelineListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryCoverPipelineListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryCoverPipelineListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryCoverPipelineListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryCoverPipelineListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryCoverPipelineListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

