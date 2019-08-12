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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryFpShotJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryFpShotJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string QueryFpShotJobListRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void QueryFpShotJobListRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", std::to_string(nextPageToken));
}

std::string QueryFpShotJobListRequest::getStartOfJobCreatedTimeRange()const
{
	return startOfJobCreatedTimeRange_;
}

void QueryFpShotJobListRequest::setStartOfJobCreatedTimeRange(const std::string& startOfJobCreatedTimeRange)
{
	startOfJobCreatedTimeRange_ = startOfJobCreatedTimeRange;
	setCoreParameter("StartOfJobCreatedTimeRange", std::to_string(startOfJobCreatedTimeRange));
}

std::string QueryFpShotJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryFpShotJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long QueryFpShotJobListRequest::getMaximumPageSize()const
{
	return maximumPageSize_;
}

void QueryFpShotJobListRequest::setMaximumPageSize(long maximumPageSize)
{
	maximumPageSize_ = maximumPageSize;
	setCoreParameter("MaximumPageSize", maximumPageSize);
}

long QueryFpShotJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryFpShotJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryFpShotJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryFpShotJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string QueryFpShotJobListRequest::getPipelineId()const
{
	return pipelineId_;
}

void QueryFpShotJobListRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", std::to_string(pipelineId));
}

std::string QueryFpShotJobListRequest::getPrimaryKeyList()const
{
	return primaryKeyList_;
}

void QueryFpShotJobListRequest::setPrimaryKeyList(const std::string& primaryKeyList)
{
	primaryKeyList_ = primaryKeyList;
	setCoreParameter("PrimaryKeyList", std::to_string(primaryKeyList));
}

std::string QueryFpShotJobListRequest::getJobIds()const
{
	return jobIds_;
}

void QueryFpShotJobListRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setCoreParameter("JobIds", std::to_string(jobIds));
}

std::string QueryFpShotJobListRequest::getState()const
{
	return state_;
}

void QueryFpShotJobListRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", std::to_string(state));
}

std::string QueryFpShotJobListRequest::getEndOfJobCreatedTimeRange()const
{
	return endOfJobCreatedTimeRange_;
}

void QueryFpShotJobListRequest::setEndOfJobCreatedTimeRange(const std::string& endOfJobCreatedTimeRange)
{
	endOfJobCreatedTimeRange_ = endOfJobCreatedTimeRange;
	setCoreParameter("EndOfJobCreatedTimeRange", std::to_string(endOfJobCreatedTimeRange));
}

