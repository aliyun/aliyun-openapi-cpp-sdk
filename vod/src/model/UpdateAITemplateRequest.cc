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

#include <alibabacloud/vod/model/UpdateAITemplateRequest.h>

using AlibabaCloud::Vod::Model::UpdateAITemplateRequest;

UpdateAITemplateRequest::UpdateAITemplateRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateAITemplate")
{}

UpdateAITemplateRequest::~UpdateAITemplateRequest()
{}

long UpdateAITemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateAITemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UpdateAITemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateAITemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string UpdateAITemplateRequest::getTemplateConfig()const
{
	return templateConfig_;
}

void UpdateAITemplateRequest::setTemplateConfig(const std::string& templateConfig)
{
	templateConfig_ = templateConfig;
	setCoreParameter("TemplateConfig", std::to_string(templateConfig));
}

std::string UpdateAITemplateRequest::getTemplateName()const
{
	return templateName_;
}

void UpdateAITemplateRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setCoreParameter("TemplateName", std::to_string(templateName));
}

long UpdateAITemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateAITemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string UpdateAITemplateRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateAITemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", std::to_string(templateId));
}

