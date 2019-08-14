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

#include <alibabacloud/mts/model/QueryWaterMarkTemplateListRequest.h>

using AlibabaCloud::Mts::Model::QueryWaterMarkTemplateListRequest;

QueryWaterMarkTemplateListRequest::QueryWaterMarkTemplateListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryWaterMarkTemplateList")
{}

QueryWaterMarkTemplateListRequest::~QueryWaterMarkTemplateListRequest()
{}

long QueryWaterMarkTemplateListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryWaterMarkTemplateListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryWaterMarkTemplateListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryWaterMarkTemplateListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryWaterMarkTemplateListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryWaterMarkTemplateListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryWaterMarkTemplateListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryWaterMarkTemplateListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryWaterMarkTemplateListRequest::getWaterMarkTemplateIds()const
{
	return waterMarkTemplateIds_;
}

void QueryWaterMarkTemplateListRequest::setWaterMarkTemplateIds(const std::string& waterMarkTemplateIds)
{
	waterMarkTemplateIds_ = waterMarkTemplateIds;
	setCoreParameter("WaterMarkTemplateIds", waterMarkTemplateIds);
}

std::string QueryWaterMarkTemplateListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryWaterMarkTemplateListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

