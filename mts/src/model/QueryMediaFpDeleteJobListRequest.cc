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

#include <alibabacloud/mts/model/QueryMediaFpDeleteJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryMediaFpDeleteJobListRequest;

QueryMediaFpDeleteJobListRequest::QueryMediaFpDeleteJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryMediaFpDeleteJobList")
{}

QueryMediaFpDeleteJobListRequest::~QueryMediaFpDeleteJobListRequest()
{}

long QueryMediaFpDeleteJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMediaFpDeleteJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryMediaFpDeleteJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryMediaFpDeleteJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string QueryMediaFpDeleteJobListRequest::getJobIds()const
{
	return jobIds_;
}

void QueryMediaFpDeleteJobListRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setCoreParameter("JobIds", std::to_string(jobIds));
}

std::string QueryMediaFpDeleteJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryMediaFpDeleteJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long QueryMediaFpDeleteJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryMediaFpDeleteJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryMediaFpDeleteJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMediaFpDeleteJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

