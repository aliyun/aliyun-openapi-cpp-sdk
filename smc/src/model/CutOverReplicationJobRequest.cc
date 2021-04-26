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

#include <alibabacloud/smc/model/CutOverReplicationJobRequest.h>

using AlibabaCloud::Smc::Model::CutOverReplicationJobRequest;

CutOverReplicationJobRequest::CutOverReplicationJobRequest() :
	RpcServiceRequest("smc", "2019-06-01", "CutOverReplicationJob")
{
	setMethod(HttpRequest::Method::Post);
}

CutOverReplicationJobRequest::~CutOverReplicationJobRequest()
{}

std::string CutOverReplicationJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CutOverReplicationJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CutOverReplicationJobRequest::getOwnerId()const
{
	return ownerId_;
}

void CutOverReplicationJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CutOverReplicationJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CutOverReplicationJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CutOverReplicationJobRequest::getJobId()const
{
	return jobId_;
}

void CutOverReplicationJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

bool CutOverReplicationJobRequest::getSyncData()const
{
	return syncData_;
}

void CutOverReplicationJobRequest::setSyncData(bool syncData)
{
	syncData_ = syncData;
	setParameter("SyncData", syncData ? "true" : "false");
}

