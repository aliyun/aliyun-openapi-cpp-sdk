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

#include <alibabacloud/mts/model/QueryFpCompareJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryFpCompareJobListRequest;

QueryFpCompareJobListRequest::QueryFpCompareJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryFpCompareJobList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryFpCompareJobListRequest::~QueryFpCompareJobListRequest()
{}

long QueryFpCompareJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryFpCompareJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryFpCompareJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryFpCompareJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryFpCompareJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryFpCompareJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryFpCompareJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryFpCompareJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryFpCompareJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryFpCompareJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryFpCompareJobListRequest::getJobIds()const
{
	return jobIds_;
}

void QueryFpCompareJobListRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setCoreParameter("JobIds", jobIds);
}

