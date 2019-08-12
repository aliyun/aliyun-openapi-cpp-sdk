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

#include <alibabacloud/mts/model/QueryMcuTemplateRequest.h>

using AlibabaCloud::Mts::Model::QueryMcuTemplateRequest;

QueryMcuTemplateRequest::QueryMcuTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryMcuTemplate")
{}

QueryMcuTemplateRequest::~QueryMcuTemplateRequest()
{}

long QueryMcuTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMcuTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryMcuTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryMcuTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryMcuTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryMcuTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryMcuTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryMcuTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryMcuTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void QueryMcuTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", templateId);
}

std::string QueryMcuTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMcuTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

