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

#include <alibabacloud/mts/model/QueryVideoSummaryJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryVideoSummaryJobListRequest;

QueryVideoSummaryJobListRequest::QueryVideoSummaryJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryVideoSummaryJobList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryVideoSummaryJobListRequest::~QueryVideoSummaryJobListRequest()
{}

long QueryVideoSummaryJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryVideoSummaryJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryVideoSummaryJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryVideoSummaryJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryVideoSummaryJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryVideoSummaryJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long QueryVideoSummaryJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryVideoSummaryJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryVideoSummaryJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryVideoSummaryJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryVideoSummaryJobListRequest::getJobIds()const
{
	return jobIds_;
}

void QueryVideoSummaryJobListRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setParameter("JobIds", jobIds);
}

