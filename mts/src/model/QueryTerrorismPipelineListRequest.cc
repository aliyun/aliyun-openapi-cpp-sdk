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

#include <alibabacloud/mts/model/QueryTerrorismPipelineListRequest.h>

using AlibabaCloud::Mts::Model::QueryTerrorismPipelineListRequest;

QueryTerrorismPipelineListRequest::QueryTerrorismPipelineListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryTerrorismPipelineList")
{}

QueryTerrorismPipelineListRequest::~QueryTerrorismPipelineListRequest()
{}

long QueryTerrorismPipelineListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryTerrorismPipelineListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryTerrorismPipelineListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryTerrorismPipelineListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryTerrorismPipelineListRequest::getPipelineIds()const
{
	return pipelineIds_;
}

void QueryTerrorismPipelineListRequest::setPipelineIds(const std::string& pipelineIds)
{
	pipelineIds_ = pipelineIds;
	setCoreParameter("PipelineIds", pipelineIds);
}

std::string QueryTerrorismPipelineListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryTerrorismPipelineListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryTerrorismPipelineListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryTerrorismPipelineListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryTerrorismPipelineListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryTerrorismPipelineListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

