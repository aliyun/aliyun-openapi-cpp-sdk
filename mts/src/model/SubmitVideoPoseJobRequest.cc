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

#include <alibabacloud/mts/model/SubmitVideoPoseJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitVideoPoseJobRequest;

SubmitVideoPoseJobRequest::SubmitVideoPoseJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitVideoPoseJob")
{}

SubmitVideoPoseJobRequest::~SubmitVideoPoseJobRequest()
{}

long SubmitVideoPoseJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitVideoPoseJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitVideoPoseJobRequest::getOutputConfig()const
{
	return outputConfig_;
}

void SubmitVideoPoseJobRequest::setOutputConfig(const std::string& outputConfig)
{
	outputConfig_ = outputConfig;
	setCoreParameter("OutputConfig", outputConfig);
}

std::string SubmitVideoPoseJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitVideoPoseJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitVideoPoseJobRequest::getUserData()const
{
	return userData_;
}

void SubmitVideoPoseJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

std::string SubmitVideoPoseJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitVideoPoseJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitVideoPoseJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitVideoPoseJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SubmitVideoPoseJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitVideoPoseJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitVideoPoseJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitVideoPoseJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

std::string SubmitVideoPoseJobRequest::getInput()const
{
	return input_;
}

void SubmitVideoPoseJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setCoreParameter("Input", input);
}

