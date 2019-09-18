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

#include <alibabacloud/mts/model/SubmitMediaFpDeleteJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitMediaFpDeleteJobRequest;

SubmitMediaFpDeleteJobRequest::SubmitMediaFpDeleteJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitMediaFpDeleteJob")
{}

SubmitMediaFpDeleteJobRequest::~SubmitMediaFpDeleteJobRequest()
{}

long SubmitMediaFpDeleteJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitMediaFpDeleteJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitMediaFpDeleteJobRequest::getFpDBId()const
{
	return fpDBId_;
}

void SubmitMediaFpDeleteJobRequest::setFpDBId(const std::string& fpDBId)
{
	fpDBId_ = fpDBId;
	setCoreParameter("FpDBId", fpDBId);
}

std::string SubmitMediaFpDeleteJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitMediaFpDeleteJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitMediaFpDeleteJobRequest::getUserData()const
{
	return userData_;
}

void SubmitMediaFpDeleteJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", userData);
}

std::string SubmitMediaFpDeleteJobRequest::getPrimaryKey()const
{
	return primaryKey_;
}

void SubmitMediaFpDeleteJobRequest::setPrimaryKey(const std::string& primaryKey)
{
	primaryKey_ = primaryKey;
	setCoreParameter("PrimaryKey", primaryKey);
}

std::string SubmitMediaFpDeleteJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitMediaFpDeleteJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitMediaFpDeleteJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitMediaFpDeleteJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SubmitMediaFpDeleteJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitMediaFpDeleteJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitMediaFpDeleteJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitMediaFpDeleteJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

