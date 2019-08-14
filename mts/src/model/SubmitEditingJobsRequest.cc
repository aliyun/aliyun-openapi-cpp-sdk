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

#include <alibabacloud/mts/model/SubmitEditingJobsRequest.h>

using AlibabaCloud::Mts::Model::SubmitEditingJobsRequest;

SubmitEditingJobsRequest::SubmitEditingJobsRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitEditingJobs")
{}

SubmitEditingJobsRequest::~SubmitEditingJobsRequest()
{}

std::string SubmitEditingJobsRequest::getOutputBucket()const
{
	return outputBucket_;
}

void SubmitEditingJobsRequest::setOutputBucket(const std::string& outputBucket)
{
	outputBucket_ = outputBucket;
	setCoreParameter("OutputBucket", outputBucket);
}

long SubmitEditingJobsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitEditingJobsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitEditingJobsRequest::getEditingJobOutputs()const
{
	return editingJobOutputs_;
}

void SubmitEditingJobsRequest::setEditingJobOutputs(const std::string& editingJobOutputs)
{
	editingJobOutputs_ = editingJobOutputs;
	setCoreParameter("EditingJobOutputs", editingJobOutputs);
}

std::string SubmitEditingJobsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitEditingJobsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitEditingJobsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitEditingJobsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string SubmitEditingJobsRequest::getOutputLocation()const
{
	return outputLocation_;
}

void SubmitEditingJobsRequest::setOutputLocation(const std::string& outputLocation)
{
	outputLocation_ = outputLocation;
	setCoreParameter("OutputLocation", outputLocation);
}

long SubmitEditingJobsRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitEditingJobsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitEditingJobsRequest::getEditingInputs()const
{
	return editingInputs_;
}

void SubmitEditingJobsRequest::setEditingInputs(const std::string& editingInputs)
{
	editingInputs_ = editingInputs;
	setCoreParameter("EditingInputs", editingInputs);
}

std::string SubmitEditingJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitEditingJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitEditingJobsRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitEditingJobsRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

