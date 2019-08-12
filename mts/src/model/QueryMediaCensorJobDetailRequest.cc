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

#include <alibabacloud/mts/model/QueryMediaCensorJobDetailRequest.h>

using AlibabaCloud::Mts::Model::QueryMediaCensorJobDetailRequest;

QueryMediaCensorJobDetailRequest::QueryMediaCensorJobDetailRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryMediaCensorJobDetail")
{}

QueryMediaCensorJobDetailRequest::~QueryMediaCensorJobDetailRequest()
{}

std::string QueryMediaCensorJobDetailRequest::getJobId()const
{
	return jobId_;
}

void QueryMediaCensorJobDetailRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

long QueryMediaCensorJobDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMediaCensorJobDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryMediaCensorJobDetailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryMediaCensorJobDetailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryMediaCensorJobDetailRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void QueryMediaCensorJobDetailRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

std::string QueryMediaCensorJobDetailRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryMediaCensorJobDetailRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryMediaCensorJobDetailRequest::getMaximumPageSize()const
{
	return maximumPageSize_;
}

void QueryMediaCensorJobDetailRequest::setMaximumPageSize(long maximumPageSize)
{
	maximumPageSize_ = maximumPageSize;
	setCoreParameter("MaximumPageSize", std::to_string(maximumPageSize));
}

long QueryMediaCensorJobDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryMediaCensorJobDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryMediaCensorJobDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMediaCensorJobDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

