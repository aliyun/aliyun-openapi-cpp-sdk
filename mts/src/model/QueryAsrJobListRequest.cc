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

#include <alibabacloud/mts/model/QueryAsrJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryAsrJobListRequest;

QueryAsrJobListRequest::QueryAsrJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryAsrJobList")
{}

QueryAsrJobListRequest::~QueryAsrJobListRequest()
{}

long QueryAsrJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryAsrJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryAsrJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryAsrJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryAsrJobListRequest::getJobIds()const
{
	return jobIds_;
}

void QueryAsrJobListRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setCoreParameter("JobIds", jobIds);
}

std::string QueryAsrJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryAsrJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryAsrJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryAsrJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryAsrJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryAsrJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

