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

#include <alibabacloud/mts/model/SubmitBeautifyJobsRequest.h>

using AlibabaCloud::Mts::Model::SubmitBeautifyJobsRequest;

SubmitBeautifyJobsRequest::SubmitBeautifyJobsRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitBeautifyJobs")
{}

SubmitBeautifyJobsRequest::~SubmitBeautifyJobsRequest()
{}

long SubmitBeautifyJobsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitBeautifyJobsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitBeautifyJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitBeautifyJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitBeautifyJobsRequest::getBeautifyConfig()const
{
	return beautifyConfig_;
}

void SubmitBeautifyJobsRequest::setBeautifyConfig(const std::string& beautifyConfig)
{
	beautifyConfig_ = beautifyConfig;
	setCoreParameter("BeautifyConfig", beautifyConfig);
}

std::string SubmitBeautifyJobsRequest::getUserData()const
{
	return userData_;
}

void SubmitBeautifyJobsRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

std::string SubmitBeautifyJobsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitBeautifyJobsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitBeautifyJobsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitBeautifyJobsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SubmitBeautifyJobsRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitBeautifyJobsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitBeautifyJobsRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitBeautifyJobsRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

bool SubmitBeautifyJobsRequest::getAsync()const
{
	return async_;
}

void SubmitBeautifyJobsRequest::setAsync(bool async)
{
	async_ = async;
	setCoreParameter("Async", async ? "true" : "false");
}

