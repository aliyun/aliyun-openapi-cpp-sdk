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

#include <alibabacloud/mts/model/SubmitMediaCensorJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitMediaCensorJobRequest;

SubmitMediaCensorJobRequest::SubmitMediaCensorJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitMediaCensorJob")
{}

SubmitMediaCensorJobRequest::~SubmitMediaCensorJobRequest()
{}

long SubmitMediaCensorJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitMediaCensorJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitMediaCensorJobRequest::getCoverImages()const
{
	return coverImages_;
}

void SubmitMediaCensorJobRequest::setCoverImages(const std::string& coverImages)
{
	coverImages_ = coverImages;
	setCoreParameter("CoverImages", std::to_string(coverImages));
}

std::string SubmitMediaCensorJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitMediaCensorJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string SubmitMediaCensorJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitMediaCensorJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string SubmitMediaCensorJobRequest::getDescription()const
{
	return description_;
}

void SubmitMediaCensorJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long SubmitMediaCensorJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitMediaCensorJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SubmitMediaCensorJobRequest::getTitle()const
{
	return title_;
}

void SubmitMediaCensorJobRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", std::to_string(title));
}

std::string SubmitMediaCensorJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitMediaCensorJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SubmitMediaCensorJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitMediaCensorJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", std::to_string(pipelineId));
}

std::string SubmitMediaCensorJobRequest::getVideoCensorConfig()const
{
	return videoCensorConfig_;
}

void SubmitMediaCensorJobRequest::setVideoCensorConfig(const std::string& videoCensorConfig)
{
	videoCensorConfig_ = videoCensorConfig;
	setCoreParameter("VideoCensorConfig", std::to_string(videoCensorConfig));
}

std::string SubmitMediaCensorJobRequest::getInput()const
{
	return input_;
}

void SubmitMediaCensorJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setCoreParameter("Input", std::to_string(input));
}

std::string SubmitMediaCensorJobRequest::getUserData()const
{
	return userData_;
}

void SubmitMediaCensorJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", std::to_string(userData));
}

std::string SubmitMediaCensorJobRequest::getBarrages()const
{
	return barrages_;
}

void SubmitMediaCensorJobRequest::setBarrages(const std::string& barrages)
{
	barrages_ = barrages;
	setCoreParameter("Barrages", std::to_string(barrages));
}

