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

#include <alibabacloud/mts/model/UpdateTemplateRequest.h>

using AlibabaCloud::Mts::Model::UpdateTemplateRequest;

UpdateTemplateRequest::UpdateTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UpdateTemplate")
{}

UpdateTemplateRequest::~UpdateTemplateRequest()
{}

std::string UpdateTemplateRequest::getContainer()const
{
	return container_;
}

void UpdateTemplateRequest::setContainer(const std::string& container)
{
	container_ = container;
	setParameter("Container", container);
}

long UpdateTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string UpdateTemplateRequest::getMuxConfig()const
{
	return muxConfig_;
}

void UpdateTemplateRequest::setMuxConfig(const std::string& muxConfig)
{
	muxConfig_ = muxConfig;
	setParameter("MuxConfig", muxConfig);
}

std::string UpdateTemplateRequest::getVideo()const
{
	return video_;
}

void UpdateTemplateRequest::setVideo(const std::string& video)
{
	video_ = video;
	setParameter("Video", video);
}

long UpdateTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void UpdateTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string UpdateTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateTemplateRequest::getName()const
{
	return name_;
}

void UpdateTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateTemplateRequest::getTransConfig()const
{
	return transConfig_;
}

void UpdateTemplateRequest::setTransConfig(const std::string& transConfig)
{
	transConfig_ = transConfig;
	setParameter("TransConfig", transConfig);
}

std::string UpdateTemplateRequest::getAudio()const
{
	return audio_;
}

void UpdateTemplateRequest::setAudio(const std::string& audio)
{
	audio_ = audio;
	setParameter("Audio", audio);
}

