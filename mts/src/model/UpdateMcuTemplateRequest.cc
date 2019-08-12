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

#include <alibabacloud/mts/model/UpdateMcuTemplateRequest.h>

using AlibabaCloud::Mts::Model::UpdateMcuTemplateRequest;

UpdateMcuTemplateRequest::UpdateMcuTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UpdateMcuTemplate")
{}

UpdateMcuTemplateRequest::~UpdateMcuTemplateRequest()
{}

std::string UpdateMcuTemplateRequest::get_Template()const
{
	return _template_;
}

void UpdateMcuTemplateRequest::set_Template(const std::string& _template)
{
	_template_ = _template;
	setCoreParameter("_Template", std::to_string(_template));
}

long UpdateMcuTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateMcuTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UpdateMcuTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateMcuTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string UpdateMcuTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateMcuTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long UpdateMcuTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateMcuTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string UpdateMcuTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateMcuTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", std::to_string(templateId));
}

std::string UpdateMcuTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateMcuTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

