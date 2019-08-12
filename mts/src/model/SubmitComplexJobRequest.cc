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

#include <alibabacloud/mts/model/SubmitComplexJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitComplexJobRequest;

SubmitComplexJobRequest::SubmitComplexJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitComplexJob")
{}

SubmitComplexJobRequest::~SubmitComplexJobRequest()
{}

long SubmitComplexJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitComplexJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitComplexJobRequest::getTranscodeOutput()const
{
	return transcodeOutput_;
}

void SubmitComplexJobRequest::setTranscodeOutput(const std::string& transcodeOutput)
{
	transcodeOutput_ = transcodeOutput;
	setCoreParameter("TranscodeOutput", std::to_string(transcodeOutput));
}

std::string SubmitComplexJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitComplexJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string SubmitComplexJobRequest::getInputs()const
{
	return inputs_;
}

void SubmitComplexJobRequest::setInputs(const std::string& inputs)
{
	inputs_ = inputs;
	setCoreParameter("Inputs", std::to_string(inputs));
}

std::string SubmitComplexJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitComplexJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string SubmitComplexJobRequest::getOutputLocation()const
{
	return outputLocation_;
}

void SubmitComplexJobRequest::setOutputLocation(const std::string& outputLocation)
{
	outputLocation_ = outputLocation;
	setCoreParameter("OutputLocation", std::to_string(outputLocation));
}

long SubmitComplexJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitComplexJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SubmitComplexJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitComplexJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SubmitComplexJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitComplexJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", std::to_string(pipelineId));
}

std::string SubmitComplexJobRequest::getOutputBucket()const
{
	return outputBucket_;
}

void SubmitComplexJobRequest::setOutputBucket(const std::string& outputBucket)
{
	outputBucket_ = outputBucket;
	setCoreParameter("OutputBucket", std::to_string(outputBucket));
}

std::string SubmitComplexJobRequest::getUserData()const
{
	return userData_;
}

void SubmitComplexJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", std::to_string(userData));
}

std::string SubmitComplexJobRequest::getComplexConfigs()const
{
	return complexConfigs_;
}

void SubmitComplexJobRequest::setComplexConfigs(const std::string& complexConfigs)
{
	complexConfigs_ = complexConfigs;
	setCoreParameter("ComplexConfigs", std::to_string(complexConfigs));
}

