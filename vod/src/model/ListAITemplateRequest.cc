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

#include <alibabacloud/vod/model/ListAITemplateRequest.h>

using AlibabaCloud::Vod::Model::ListAITemplateRequest;

ListAITemplateRequest::ListAITemplateRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListAITemplate")
{
	setMethod(HttpRequest::Method::Post);
}

ListAITemplateRequest::~ListAITemplateRequest()
{}

long ListAITemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAITemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListAITemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListAITemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ListAITemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAITemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListAITemplateRequest::getTemplateType()const
{
	return templateType_;
}

void ListAITemplateRequest::setTemplateType(const std::string& templateType)
{
	templateType_ = templateType;
	setParameter("TemplateType", templateType);
}

