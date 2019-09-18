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

#include <alibabacloud/mts/model/QueryComplexJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryComplexJobListRequest;

QueryComplexJobListRequest::QueryComplexJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryComplexJobList")
{}

QueryComplexJobListRequest::~QueryComplexJobListRequest()
{}

long QueryComplexJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryComplexJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryComplexJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryComplexJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryComplexJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryComplexJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryComplexJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryComplexJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryComplexJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryComplexJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryComplexJobListRequest::getJobIds()const
{
	return jobIds_;
}

void QueryComplexJobListRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setCoreParameter("JobIds", jobIds);
}

