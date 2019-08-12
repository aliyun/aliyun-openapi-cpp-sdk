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

#include <alibabacloud/mts/model/SubmitAnalysisJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitAnalysisJobRequest;

SubmitAnalysisJobRequest::SubmitAnalysisJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitAnalysisJob")
{}

SubmitAnalysisJobRequest::~SubmitAnalysisJobRequest()
{}

std::string SubmitAnalysisJobRequest::getInput()const
{
	return input_;
}

void SubmitAnalysisJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setCoreParameter("Input", input);
}

std::string SubmitAnalysisJobRequest::getUserData()const
{
	return userData_;
}

void SubmitAnalysisJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

long SubmitAnalysisJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitAnalysisJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitAnalysisJobRequest::getAnalysisConfig()const
{
	return analysisConfig_;
}

void SubmitAnalysisJobRequest::setAnalysisConfig(const std::string& analysisConfig)
{
	analysisConfig_ = analysisConfig;
	setCoreParameter("AnalysisConfig", analysisConfig);
}

std::string SubmitAnalysisJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitAnalysisJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitAnalysisJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitAnalysisJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SubmitAnalysisJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitAnalysisJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SubmitAnalysisJobRequest::getPriority()const
{
	return priority_;
}

void SubmitAnalysisJobRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string SubmitAnalysisJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitAnalysisJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitAnalysisJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitAnalysisJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

