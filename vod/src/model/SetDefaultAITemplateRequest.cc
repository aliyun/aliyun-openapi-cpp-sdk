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

#include <alibabacloud/vod/model/SetDefaultAITemplateRequest.h>

using AlibabaCloud::Vod::Model::SetDefaultAITemplateRequest;

SetDefaultAITemplateRequest::SetDefaultAITemplateRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SetDefaultAITemplate")
{
	setMethod(HttpRequest::Method::Post);
}

SetDefaultAITemplateRequest::~SetDefaultAITemplateRequest()
{}

long SetDefaultAITemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetDefaultAITemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetDefaultAITemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetDefaultAITemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long SetDefaultAITemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void SetDefaultAITemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetDefaultAITemplateRequest::getTemplateId()const
{
	return templateId_;
}

void SetDefaultAITemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", templateId);
}

