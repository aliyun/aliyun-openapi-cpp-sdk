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

#include <alibabacloud/vod/model/RegisterMediaRequest.h>

using AlibabaCloud::Vod::Model::RegisterMediaRequest;

RegisterMediaRequest::RegisterMediaRequest() :
	RpcServiceRequest("vod", "2017-03-21", "RegisterMedia")
{}

RegisterMediaRequest::~RegisterMediaRequest()
{}

std::string RegisterMediaRequest::getUserData()const
{
	return userData_;
}

void RegisterMediaRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

long RegisterMediaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RegisterMediaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RegisterMediaRequest::getTemplateGroupId()const
{
	return templateGroupId_;
}

void RegisterMediaRequest::setTemplateGroupId(const std::string& templateGroupId)
{
	templateGroupId_ = templateGroupId;
	setCoreParameter("TemplateGroupId", templateGroupId);
}

std::string RegisterMediaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RegisterMediaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long RegisterMediaRequest::getOwnerId()const
{
	return ownerId_;
}

void RegisterMediaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RegisterMediaRequest::getRegisterMetadatas()const
{
	return registerMetadatas_;
}

void RegisterMediaRequest::setRegisterMetadatas(const std::string& registerMetadatas)
{
	registerMetadatas_ = registerMetadatas;
	setCoreParameter("RegisterMetadatas", registerMetadatas);
}

std::string RegisterMediaRequest::getWorkflowId()const
{
	return workflowId_;
}

void RegisterMediaRequest::setWorkflowId(const std::string& workflowId)
{
	workflowId_ = workflowId;
	setCoreParameter("WorkflowId", workflowId);
}

std::string RegisterMediaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RegisterMediaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

