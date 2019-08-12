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

#include <alibabacloud/mts/model/SubmitVideoSummaryJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitVideoSummaryJobRequest;

SubmitVideoSummaryJobRequest::SubmitVideoSummaryJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitVideoSummaryJob")
{}

SubmitVideoSummaryJobRequest::~SubmitVideoSummaryJobRequest()
{}

std::string SubmitVideoSummaryJobRequest::getInput()const
{
	return input_;
}

void SubmitVideoSummaryJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setCoreParameter("Input", std::to_string(input));
}

std::string SubmitVideoSummaryJobRequest::getUserData()const
{
	return userData_;
}

void SubmitVideoSummaryJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", std::to_string(userData));
}

long SubmitVideoSummaryJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitVideoSummaryJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitVideoSummaryJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitVideoSummaryJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string SubmitVideoSummaryJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitVideoSummaryJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string SubmitVideoSummaryJobRequest::getVideoSummaryConfig()const
{
	return videoSummaryConfig_;
}

void SubmitVideoSummaryJobRequest::setVideoSummaryConfig(const std::string& videoSummaryConfig)
{
	videoSummaryConfig_ = videoSummaryConfig;
	setCoreParameter("VideoSummaryConfig", std::to_string(videoSummaryConfig));
}

long SubmitVideoSummaryJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitVideoSummaryJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SubmitVideoSummaryJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitVideoSummaryJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SubmitVideoSummaryJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitVideoSummaryJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", std::to_string(pipelineId));
}

