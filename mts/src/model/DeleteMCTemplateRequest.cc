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

#include <alibabacloud/mts/model/DeleteMCTemplateRequest.h>

using AlibabaCloud::Mts::Model::DeleteMCTemplateRequest;

DeleteMCTemplateRequest::DeleteMCTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "DeleteMCTemplate")
{}

DeleteMCTemplateRequest::~DeleteMCTemplateRequest()
{}

long DeleteMCTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteMCTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteMCTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteMCTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteMCTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteMCTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteMCTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteMCTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteMCTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void DeleteMCTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", templateId);
}

std::string DeleteMCTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteMCTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

