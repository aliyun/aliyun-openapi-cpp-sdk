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

#include <alibabacloud/mts/model/CancelJobRequest.h>

using AlibabaCloud::Mts::Model::CancelJobRequest;

CancelJobRequest::CancelJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "CancelJob")
{
	setMethod(HttpRequest::Method::Post);
}

CancelJobRequest::~CancelJobRequest()
{}

long CancelJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CancelJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CancelJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CancelJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CancelJobRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CancelJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CancelJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CancelJobRequest::getJobId()const
{
	return jobId_;
}

void CancelJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

