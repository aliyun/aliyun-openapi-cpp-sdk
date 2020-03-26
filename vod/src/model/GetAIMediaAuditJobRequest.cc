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

#include <alibabacloud/vod/model/GetAIMediaAuditJobRequest.h>

using AlibabaCloud::Vod::Model::GetAIMediaAuditJobRequest;

GetAIMediaAuditJobRequest::GetAIMediaAuditJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetAIMediaAuditJob")
{
	setMethod(HttpRequest::Method::Post);
}

GetAIMediaAuditJobRequest::~GetAIMediaAuditJobRequest()
{}

long GetAIMediaAuditJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetAIMediaAuditJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetAIMediaAuditJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetAIMediaAuditJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetAIMediaAuditJobRequest::getOwnerId()const
{
	return ownerId_;
}

void GetAIMediaAuditJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string GetAIMediaAuditJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAIMediaAuditJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetAIMediaAuditJobRequest::getJobId()const
{
	return jobId_;
}

void GetAIMediaAuditJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

