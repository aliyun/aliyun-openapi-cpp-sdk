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

#include <alibabacloud/smc/model/DeleteReplicationJobRequest.h>

using AlibabaCloud::Smc::Model::DeleteReplicationJobRequest;

DeleteReplicationJobRequest::DeleteReplicationJobRequest() :
	RpcServiceRequest("smc", "2019-06-01", "DeleteReplicationJob")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteReplicationJobRequest::~DeleteReplicationJobRequest()
{}

std::string DeleteReplicationJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteReplicationJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DeleteReplicationJobRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteReplicationJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteReplicationJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteReplicationJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteReplicationJobRequest::getJobId()const
{
	return jobId_;
}

void DeleteReplicationJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

