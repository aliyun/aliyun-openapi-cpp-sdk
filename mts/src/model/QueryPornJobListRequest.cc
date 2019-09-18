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

#include <alibabacloud/mts/model/QueryPornJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryPornJobListRequest;

QueryPornJobListRequest::QueryPornJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryPornJobList")
{}

QueryPornJobListRequest::~QueryPornJobListRequest()
{}

long QueryPornJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryPornJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryPornJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryPornJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryPornJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryPornJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryPornJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryPornJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryPornJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryPornJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryPornJobListRequest::getJobIds()const
{
	return jobIds_;
}

void QueryPornJobListRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setCoreParameter("JobIds", jobIds);
}

