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

#include <alibabacloud/mts/model/SubmitAsrJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitAsrJobRequest;

SubmitAsrJobRequest::SubmitAsrJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitAsrJob")
{}

SubmitAsrJobRequest::~SubmitAsrJobRequest()
{}

std::string SubmitAsrJobRequest::getInput()const
{
	return input_;
}

void SubmitAsrJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setParameter("Input", input);
}

std::string SubmitAsrJobRequest::getUserData()const
{
	return userData_;
}

void SubmitAsrJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

long SubmitAsrJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitAsrJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitAsrJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitAsrJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitAsrJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitAsrJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SubmitAsrJobRequest::getAsrConfig()const
{
	return asrConfig_;
}

void SubmitAsrJobRequest::setAsrConfig(const std::string& asrConfig)
{
	asrConfig_ = asrConfig;
	setParameter("AsrConfig", asrConfig);
}

long SubmitAsrJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitAsrJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitAsrJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitAsrJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitAsrJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitAsrJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", pipelineId);
}

