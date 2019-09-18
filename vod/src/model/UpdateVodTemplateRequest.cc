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

#include <alibabacloud/vod/model/UpdateVodTemplateRequest.h>

using AlibabaCloud::Vod::Model::UpdateVodTemplateRequest;

UpdateVodTemplateRequest::UpdateVodTemplateRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateVodTemplate")
{}

UpdateVodTemplateRequest::~UpdateVodTemplateRequest()
{}

long UpdateVodTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateVodTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateVodTemplateRequest::getTemplateConfig()const
{
	return templateConfig_;
}

void UpdateVodTemplateRequest::setTemplateConfig(const std::string& templateConfig)
{
	templateConfig_ = templateConfig;
	setCoreParameter("TemplateConfig", templateConfig);
}

std::string UpdateVodTemplateRequest::getVodTemplateId()const
{
	return vodTemplateId_;
}

void UpdateVodTemplateRequest::setVodTemplateId(const std::string& vodTemplateId)
{
	vodTemplateId_ = vodTemplateId;
	setCoreParameter("VodTemplateId", vodTemplateId);
}

std::string UpdateVodTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateVodTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long UpdateVodTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateVodTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateVodTemplateRequest::getName()const
{
	return name_;
}

void UpdateVodTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

