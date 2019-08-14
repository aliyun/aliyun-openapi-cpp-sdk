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

#include <alibabacloud/mts/model/QueryMCTemplateListRequest.h>

using AlibabaCloud::Mts::Model::QueryMCTemplateListRequest;

QueryMCTemplateListRequest::QueryMCTemplateListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryMCTemplateList")
{}

QueryMCTemplateListRequest::~QueryMCTemplateListRequest()
{}

long QueryMCTemplateListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMCTemplateListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryMCTemplateListRequest::getTemplateIds()const
{
	return templateIds_;
}

void QueryMCTemplateListRequest::setTemplateIds(const std::string& templateIds)
{
	templateIds_ = templateIds;
	setCoreParameter("TemplateIds", templateIds);
}

std::string QueryMCTemplateListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryMCTemplateListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryMCTemplateListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryMCTemplateListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryMCTemplateListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryMCTemplateListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryMCTemplateListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMCTemplateListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

