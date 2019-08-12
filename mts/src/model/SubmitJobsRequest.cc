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

#include <alibabacloud/mts/model/SubmitJobsRequest.h>

using AlibabaCloud::Mts::Model::SubmitJobsRequest;

SubmitJobsRequest::SubmitJobsRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitJobs")
{}

SubmitJobsRequest::~SubmitJobsRequest()
{}

std::string SubmitJobsRequest::getOutputs()const
{
	return outputs_;
}

void SubmitJobsRequest::setOutputs(const std::string& outputs)
{
	outputs_ = outputs;
	setCoreParameter("Outputs", std::to_string(outputs));
}

std::string SubmitJobsRequest::getInput()const
{
	return input_;
}

void SubmitJobsRequest::setInput(const std::string& input)
{
	input_ = input;
	setCoreParameter("Input", std::to_string(input));
}

std::string SubmitJobsRequest::getOutputBucket()const
{
	return outputBucket_;
}

void SubmitJobsRequest::setOutputBucket(const std::string& outputBucket)
{
	outputBucket_ = outputBucket;
	setCoreParameter("OutputBucket", std::to_string(outputBucket));
}

long SubmitJobsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitJobsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitJobsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitJobsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string SubmitJobsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitJobsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string SubmitJobsRequest::getOutputLocation()const
{
	return outputLocation_;
}

void SubmitJobsRequest::setOutputLocation(const std::string& outputLocation)
{
	outputLocation_ = outputLocation;
	setCoreParameter("OutputLocation", std::to_string(outputLocation));
}

long SubmitJobsRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitJobsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SubmitJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SubmitJobsRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitJobsRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", std::to_string(pipelineId));
}

