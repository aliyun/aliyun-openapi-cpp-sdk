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

#include <alibabacloud/vod/model/GetAITemplateRequest.h>

using AlibabaCloud::Vod::Model::GetAITemplateRequest;

GetAITemplateRequest::GetAITemplateRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetAITemplate")
{
	setMethod(HttpRequest::Method::Post);
}

GetAITemplateRequest::~GetAITemplateRequest()
{}

long GetAITemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetAITemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetAITemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetAITemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long GetAITemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void GetAITemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GetAITemplateRequest::getTemplateId()const
{
	return templateId_;
}

void GetAITemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", templateId);
}

