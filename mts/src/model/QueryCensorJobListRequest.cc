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

#include <alibabacloud/mts/model/QueryCensorJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryCensorJobListRequest;

QueryCensorJobListRequest::QueryCensorJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryCensorJobList")
{}

QueryCensorJobListRequest::~QueryCensorJobListRequest()
{}

long QueryCensorJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryCensorJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryCensorJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryCensorJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string QueryCensorJobListRequest::getJobIds()const
{
	return jobIds_;
}

void QueryCensorJobListRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setCoreParameter("JobIds", std::to_string(jobIds));
}

std::string QueryCensorJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryCensorJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long QueryCensorJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryCensorJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryCensorJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryCensorJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

