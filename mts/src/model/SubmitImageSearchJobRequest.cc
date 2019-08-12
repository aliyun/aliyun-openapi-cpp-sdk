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

#include <alibabacloud/mts/model/SubmitImageSearchJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitImageSearchJobRequest;

SubmitImageSearchJobRequest::SubmitImageSearchJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitImageSearchJob")
{}

SubmitImageSearchJobRequest::~SubmitImageSearchJobRequest()
{}

std::string SubmitImageSearchJobRequest::getInputImage()const
{
	return inputImage_;
}

void SubmitImageSearchJobRequest::setInputImage(const std::string& inputImage)
{
	inputImage_ = inputImage;
	setCoreParameter("InputImage", std::to_string(inputImage));
}

std::string SubmitImageSearchJobRequest::getUserData()const
{
	return userData_;
}

void SubmitImageSearchJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", std::to_string(userData));
}

long SubmitImageSearchJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitImageSearchJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitImageSearchJobRequest::getFpDBId()const
{
	return fpDBId_;
}

void SubmitImageSearchJobRequest::setFpDBId(const std::string& fpDBId)
{
	fpDBId_ = fpDBId;
	setCoreParameter("FpDBId", std::to_string(fpDBId));
}

std::string SubmitImageSearchJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitImageSearchJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string SubmitImageSearchJobRequest::getInputVideo()const
{
	return inputVideo_;
}

void SubmitImageSearchJobRequest::setInputVideo(const std::string& inputVideo)
{
	inputVideo_ = inputVideo;
	setCoreParameter("InputVideo", std::to_string(inputVideo));
}

std::string SubmitImageSearchJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitImageSearchJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long SubmitImageSearchJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitImageSearchJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SubmitImageSearchJobRequest::getConfig()const
{
	return config_;
}

void SubmitImageSearchJobRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", std::to_string(config));
}

std::string SubmitImageSearchJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitImageSearchJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SubmitImageSearchJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitImageSearchJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", std::to_string(pipelineId));
}

