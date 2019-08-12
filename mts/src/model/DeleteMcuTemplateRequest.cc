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

#include <alibabacloud/mts/model/DeleteMcuTemplateRequest.h>

using AlibabaCloud::Mts::Model::DeleteMcuTemplateRequest;

DeleteMcuTemplateRequest::DeleteMcuTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "DeleteMcuTemplate")
{}

DeleteMcuTemplateRequest::~DeleteMcuTemplateRequest()
{}

long DeleteMcuTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteMcuTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteMcuTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteMcuTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DeleteMcuTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteMcuTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long DeleteMcuTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteMcuTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteMcuTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void DeleteMcuTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", std::to_string(templateId));
}

std::string DeleteMcuTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteMcuTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

