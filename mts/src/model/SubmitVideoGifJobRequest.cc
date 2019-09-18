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

#include <alibabacloud/mts/model/SubmitVideoGifJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitVideoGifJobRequest;

SubmitVideoGifJobRequest::SubmitVideoGifJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitVideoGifJob")
{}

SubmitVideoGifJobRequest::~SubmitVideoGifJobRequest()
{}

long SubmitVideoGifJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitVideoGifJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitVideoGifJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitVideoGifJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitVideoGifJobRequest::getUserData()const
{
	return userData_;
}

void SubmitVideoGifJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

std::string SubmitVideoGifJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitVideoGifJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitVideoGifJobRequest::getVideoGifConfig()const
{
	return videoGifConfig_;
}

void SubmitVideoGifJobRequest::setVideoGifConfig(const std::string& videoGifConfig)
{
	videoGifConfig_ = videoGifConfig;
	setCoreParameter("VideoGifConfig", videoGifConfig);
}

std::string SubmitVideoGifJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitVideoGifJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SubmitVideoGifJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitVideoGifJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitVideoGifJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitVideoGifJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

std::string SubmitVideoGifJobRequest::getInput()const
{
	return input_;
}

void SubmitVideoGifJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setCoreParameter("Input", input);
}

