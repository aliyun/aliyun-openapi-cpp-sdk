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

#include <alibabacloud/mts/model/DeleteTemplateRequest.h>

using AlibabaCloud::Mts::Model::DeleteTemplateRequest;

DeleteTemplateRequest::DeleteTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "DeleteTemplate")
{}

DeleteTemplateRequest::~DeleteTemplateRequest()
{}

long DeleteTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void DeleteTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", templateId);
}

std::string DeleteTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

