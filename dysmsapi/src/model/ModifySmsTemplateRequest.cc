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

#include <alibabacloud/dysmsapi/model/ModifySmsTemplateRequest.h>

using AlibabaCloud::Dysmsapi::Model::ModifySmsTemplateRequest;

ModifySmsTemplateRequest::ModifySmsTemplateRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "ModifySmsTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySmsTemplateRequest::~ModifySmsTemplateRequest()
{}

long ModifySmsTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySmsTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySmsTemplateRequest::getRemark()const
{
	return remark_;
}

void ModifySmsTemplateRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string ModifySmsTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySmsTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ModifySmsTemplateRequest::getTemplateType()const
{
	return templateType_;
}

void ModifySmsTemplateRequest::setTemplateType(int templateType)
{
	templateType_ = templateType;
	setParameter("TemplateType", std::to_string(templateType));
}

std::string ModifySmsTemplateRequest::getTemplateName()const
{
	return templateName_;
}

void ModifySmsTemplateRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setParameter("TemplateName", templateName);
}

std::string ModifySmsTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySmsTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ModifySmsTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySmsTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifySmsTemplateRequest::getTemplateContent()const
{
	return templateContent_;
}

void ModifySmsTemplateRequest::setTemplateContent(const std::string& templateContent)
{
	templateContent_ = templateContent;
	setParameter("TemplateContent", templateContent);
}

std::string ModifySmsTemplateRequest::getTemplateCode()const
{
	return templateCode_;
}

void ModifySmsTemplateRequest::setTemplateCode(const std::string& templateCode)
{
	templateCode_ = templateCode;
	setParameter("TemplateCode", templateCode);
}

