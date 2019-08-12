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

#include <alibabacloud/mts/model/SubmitSnapshotJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitSnapshotJobRequest;

SubmitSnapshotJobRequest::SubmitSnapshotJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitSnapshotJob")
{}

SubmitSnapshotJobRequest::~SubmitSnapshotJobRequest()
{}

std::string SubmitSnapshotJobRequest::getInput()const
{
	return input_;
}

void SubmitSnapshotJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setCoreParameter("Input", std::to_string(input));
}

std::string SubmitSnapshotJobRequest::getUserData()const
{
	return userData_;
}

void SubmitSnapshotJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", std::to_string(userData));
}

long SubmitSnapshotJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitSnapshotJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SubmitSnapshotJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitSnapshotJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string SubmitSnapshotJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitSnapshotJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long SubmitSnapshotJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitSnapshotJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SubmitSnapshotJobRequest::getSnapshotConfig()const
{
	return snapshotConfig_;
}

void SubmitSnapshotJobRequest::setSnapshotConfig(const std::string& snapshotConfig)
{
	snapshotConfig_ = snapshotConfig;
	setCoreParameter("SnapshotConfig", std::to_string(snapshotConfig));
}

std::string SubmitSnapshotJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitSnapshotJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string SubmitSnapshotJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitSnapshotJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", std::to_string(pipelineId));
}

