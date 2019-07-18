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

#include <alibabacloud/vod/model/SubmitTranscodeJobsRequest.h>

using AlibabaCloud::Vod::Model::SubmitTranscodeJobsRequest;

SubmitTranscodeJobsRequest::SubmitTranscodeJobsRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SubmitTranscodeJobs")
{}

SubmitTranscodeJobsRequest::~SubmitTranscodeJobsRequest()
{}

std::string SubmitTranscodeJobsRequest::getUserData()const
{
	return userData_;
}

void SubmitTranscodeJobsRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

long SubmitTranscodeJobsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitTranscodeJobsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitTranscodeJobsRequest::getTemplateGroupId()const
{
	return templateGroupId_;
}

void SubmitTranscodeJobsRequest::setTemplateGroupId(const std::string& templateGroupId)
{
	templateGroupId_ = templateGroupId;
	setCoreParameter("TemplateGroupId", templateGroupId);
}

std::string SubmitTranscodeJobsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitTranscodeJobsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitTranscodeJobsRequest::getVideoId()const
{
	return videoId_;
}

void SubmitTranscodeJobsRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setCoreParameter("VideoId", videoId);
}

std::string SubmitTranscodeJobsRequest::getOverrideParams()const
{
	return overrideParams_;
}

void SubmitTranscodeJobsRequest::setOverrideParams(const std::string& overrideParams)
{
	overrideParams_ = overrideParams;
	setCoreParameter("OverrideParams", overrideParams);
}

long SubmitTranscodeJobsRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitTranscodeJobsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitTranscodeJobsRequest::getPriority()const
{
	return priority_;
}

void SubmitTranscodeJobsRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string SubmitTranscodeJobsRequest::getEncryptConfig()const
{
	return encryptConfig_;
}

void SubmitTranscodeJobsRequest::setEncryptConfig(const std::string& encryptConfig)
{
	encryptConfig_ = encryptConfig;
	setCoreParameter("EncryptConfig", encryptConfig);
}

std::string SubmitTranscodeJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitTranscodeJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitTranscodeJobsRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitTranscodeJobsRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

