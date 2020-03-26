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

#include <alibabacloud/mts/model/QueryTemplateListRequest.h>

using AlibabaCloud::Mts::Model::QueryTemplateListRequest;

QueryTemplateListRequest::QueryTemplateListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryTemplateList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTemplateListRequest::~QueryTemplateListRequest()
{}

long QueryTemplateListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryTemplateListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryTemplateListRequest::getTemplateIds()const
{
	return templateIds_;
}

void QueryTemplateListRequest::setTemplateIds(const std::string& templateIds)
{
	templateIds_ = templateIds;
	setParameter("TemplateIds", templateIds);
}

std::string QueryTemplateListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryTemplateListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryTemplateListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryTemplateListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long QueryTemplateListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryTemplateListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryTemplateListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryTemplateListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

