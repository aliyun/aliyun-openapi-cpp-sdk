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

#include <alibabacloud/mts/model/SubmitTagJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitTagJobRequest;

SubmitTagJobRequest::SubmitTagJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitTagJob")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitTagJobRequest::~SubmitTagJobRequest()
{}

long SubmitTagJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitTagJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitTagJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitTagJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitTagJobRequest::getUserData()const
{
	return userData_;
}

void SubmitTagJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

std::string SubmitTagJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitTagJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitTagJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitTagJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string SubmitTagJobRequest::getTagConfig()const
{
	return tagConfig_;
}

void SubmitTagJobRequest::setTagConfig(const std::string& tagConfig)
{
	tagConfig_ = tagConfig;
	setCoreParameter("TagConfig", tagConfig);
}

long SubmitTagJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitTagJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitTagJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitTagJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

std::string SubmitTagJobRequest::getInput()const
{
	return input_;
}

void SubmitTagJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setCoreParameter("Input", input);
}

