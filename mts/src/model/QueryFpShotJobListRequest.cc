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

#include <alibabacloud/mts/model/QueryFpShotJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryFpShotJobListRequest;

QueryFpShotJobListRequest::QueryFpShotJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryFpShotJobList")
{}

QueryFpShotJobListRequest::~QueryFpShotJobListRequest()
{}

long QueryFpShotJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryFpShotJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryFpShotJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryFpShotJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryFpShotJobListRequest::getJobIds()const
{
	return jobIds_;
}

void QueryFpShotJobListRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setParameter("JobIds", jobIds);
}

std::string QueryFpShotJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryFpShotJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long QueryFpShotJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryFpShotJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryFpShotJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryFpShotJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

