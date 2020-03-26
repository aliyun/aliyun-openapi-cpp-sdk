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

#include <alibabacloud/dysmsapi/model/AddSmsTemplateRequest.h>

using AlibabaCloud::Dysmsapi::Model::AddSmsTemplateRequest;

AddSmsTemplateRequest::AddSmsTemplateRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "AddSmsTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

AddSmsTemplateRequest::~AddSmsTemplateRequest()
{}

long AddSmsTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddSmsTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddSmsTemplateRequest::getRemark()const
{
	return remark_;
}

void AddSmsTemplateRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string AddSmsTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddSmsTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int AddSmsTemplateRequest::getTemplateType()const
{
	return templateType_;
}

void AddSmsTemplateRequest::setTemplateType(int templateType)
{
	templateType_ = templateType;
	setParameter("TemplateType", std::to_string(templateType));
}

std::string AddSmsTemplateRequest::getTemplateName()const
{
	return templateName_;
}

void AddSmsTemplateRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setParameter("TemplateName", templateName);
}

std::string AddSmsTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddSmsTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long AddSmsTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void AddSmsTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddSmsTemplateRequest::getTemplateContent()const
{
	return templateContent_;
}

void AddSmsTemplateRequest::setTemplateContent(const std::string& templateContent)
{
	templateContent_ = templateContent;
	setParameter("TemplateContent", templateContent);
}

