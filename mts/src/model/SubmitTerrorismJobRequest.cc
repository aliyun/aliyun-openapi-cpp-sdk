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

#include <alibabacloud/mts/model/SubmitTerrorismJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitTerrorismJobRequest;

SubmitTerrorismJobRequest::SubmitTerrorismJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitTerrorismJob")
{}

SubmitTerrorismJobRequest::~SubmitTerrorismJobRequest()
{}

std::string SubmitTerrorismJobRequest::getInput()const
{
	return input_;
}

void SubmitTerrorismJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setCoreParameter("Input", input);
}

std::string SubmitTerrorismJobRequest::getUserData()const
{
	return userData_;
}

void SubmitTerrorismJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

long SubmitTerrorismJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitTerrorismJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitTerrorismJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitTerrorismJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitTerrorismJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitTerrorismJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SubmitTerrorismJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitTerrorismJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitTerrorismJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitTerrorismJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitTerrorismJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitTerrorismJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

std::string SubmitTerrorismJobRequest::getTerrorismConfig()const
{
	return terrorismConfig_;
}

void SubmitTerrorismJobRequest::setTerrorismConfig(const std::string& terrorismConfig)
{
	terrorismConfig_ = terrorismConfig;
	setCoreParameter("TerrorismConfig", terrorismConfig);
}

