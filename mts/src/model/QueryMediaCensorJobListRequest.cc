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

#include <alibabacloud/mts/model/QueryMediaCensorJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryMediaCensorJobListRequest;

QueryMediaCensorJobListRequest::QueryMediaCensorJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryMediaCensorJobList")
{}

QueryMediaCensorJobListRequest::~QueryMediaCensorJobListRequest()
{}

long QueryMediaCensorJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMediaCensorJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryMediaCensorJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryMediaCensorJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryMediaCensorJobListRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void QueryMediaCensorJobListRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

std::string QueryMediaCensorJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryMediaCensorJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string QueryMediaCensorJobListRequest::getStartOfJobCreatedTimeRange()const
{
	return startOfJobCreatedTimeRange_;
}

void QueryMediaCensorJobListRequest::setStartOfJobCreatedTimeRange(const std::string& startOfJobCreatedTimeRange)
{
	startOfJobCreatedTimeRange_ = startOfJobCreatedTimeRange;
	setCoreParameter("StartOfJobCreatedTimeRange", startOfJobCreatedTimeRange);
}

long QueryMediaCensorJobListRequest::getMaximumPageSize()const
{
	return maximumPageSize_;
}

void QueryMediaCensorJobListRequest::setMaximumPageSize(long maximumPageSize)
{
	maximumPageSize_ = maximumPageSize;
	setCoreParameter("MaximumPageSize", std::to_string(maximumPageSize));
}

long QueryMediaCensorJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryMediaCensorJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryMediaCensorJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMediaCensorJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryMediaCensorJobListRequest::getPipelineId()const
{
	return pipelineId_;
}

void QueryMediaCensorJobListRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

std::string QueryMediaCensorJobListRequest::getJobId()const
{
	return jobId_;
}

void QueryMediaCensorJobListRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

std::string QueryMediaCensorJobListRequest::getState()const
{
	return state_;
}

void QueryMediaCensorJobListRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

std::string QueryMediaCensorJobListRequest::getEndOfJobCreatedTimeRange()const
{
	return endOfJobCreatedTimeRange_;
}

void QueryMediaCensorJobListRequest::setEndOfJobCreatedTimeRange(const std::string& endOfJobCreatedTimeRange)
{
	endOfJobCreatedTimeRange_ = endOfJobCreatedTimeRange;
	setCoreParameter("EndOfJobCreatedTimeRange", endOfJobCreatedTimeRange);
}

