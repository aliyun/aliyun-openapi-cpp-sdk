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

#include <alibabacloud/mts/model/AddTemplateRequest.h>

using AlibabaCloud::Mts::Model::AddTemplateRequest;

AddTemplateRequest::AddTemplateRequest() :
	RpcServiceRequest("mts", "2014-06-18", "AddTemplate")
{}

AddTemplateRequest::~AddTemplateRequest()
{}

std::string AddTemplateRequest::getContainer()const
{
	return container_;
}

void AddTemplateRequest::setContainer(const std::string& container)
{
	container_ = container;
	setCoreParameter("Container", container);
}

long AddTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddTemplateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddTemplateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AddTemplateRequest::getName()const
{
	return name_;
}

void AddTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string AddTemplateRequest::getTransConfig()const
{
	return transConfig_;
}

void AddTemplateRequest::setTransConfig(const std::string& transConfig)
{
	transConfig_ = transConfig;
	setCoreParameter("TransConfig", transConfig);
}

std::string AddTemplateRequest::getMuxConfig()const
{
	return muxConfig_;
}

void AddTemplateRequest::setMuxConfig(const std::string& muxConfig)
{
	muxConfig_ = muxConfig;
	setCoreParameter("MuxConfig", muxConfig);
}

std::string AddTemplateRequest::getVideo()const
{
	return video_;
}

void AddTemplateRequest::setVideo(const std::string& video)
{
	video_ = video;
	setCoreParameter("Video", video);
}

std::string AddTemplateRequest::getAudio()const
{
	return audio_;
}

void AddTemplateRequest::setAudio(const std::string& audio)
{
	audio_ = audio;
	setCoreParameter("Audio", audio);
}

long AddTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void AddTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

