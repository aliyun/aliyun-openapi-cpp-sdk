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

#include <alibabacloud/mts/model/SubmitMediaDetailJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitMediaDetailJobRequest;

SubmitMediaDetailJobRequest::SubmitMediaDetailJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitMediaDetailJob")
{}

SubmitMediaDetailJobRequest::~SubmitMediaDetailJobRequest()
{}

std::string SubmitMediaDetailJobRequest::getInput()const
{
	return input_;
}

void SubmitMediaDetailJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setParameter("Input", input);
}

std::string SubmitMediaDetailJobRequest::getUserData()const
{
	return userData_;
}

void SubmitMediaDetailJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

long SubmitMediaDetailJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitMediaDetailJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitMediaDetailJobRequest::getMediaDetailConfig()const
{
	return mediaDetailConfig_;
}

void SubmitMediaDetailJobRequest::setMediaDetailConfig(const std::string& mediaDetailConfig)
{
	mediaDetailConfig_ = mediaDetailConfig;
	setParameter("MediaDetailConfig", mediaDetailConfig);
}

std::string SubmitMediaDetailJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitMediaDetailJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitMediaDetailJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitMediaDetailJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SubmitMediaDetailJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitMediaDetailJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitMediaDetailJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitMediaDetailJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitMediaDetailJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitMediaDetailJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", pipelineId);
}

