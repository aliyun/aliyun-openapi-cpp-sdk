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

#include <alibabacloud/mts/model/SubmitFacerecogJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitFacerecogJobRequest;

SubmitFacerecogJobRequest::SubmitFacerecogJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitFacerecogJob")
{}

SubmitFacerecogJobRequest::~SubmitFacerecogJobRequest()
{}

std::string SubmitFacerecogJobRequest::getInput()const
{
	return input_;
}

void SubmitFacerecogJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setCoreParameter("Input", input);
}

std::string SubmitFacerecogJobRequest::getUserData()const
{
	return userData_;
}

void SubmitFacerecogJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

long SubmitFacerecogJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitFacerecogJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitFacerecogJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitFacerecogJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitFacerecogJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitFacerecogJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SubmitFacerecogJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitFacerecogJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SubmitFacerecogJobRequest::getFacerecogConfig()const
{
	return facerecogConfig_;
}

void SubmitFacerecogJobRequest::setFacerecogConfig(const std::string& facerecogConfig)
{
	facerecogConfig_ = facerecogConfig;
	setCoreParameter("FacerecogConfig", facerecogConfig);
}

std::string SubmitFacerecogJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitFacerecogJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitFacerecogJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitFacerecogJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

