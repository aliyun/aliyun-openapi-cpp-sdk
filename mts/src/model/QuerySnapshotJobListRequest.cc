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

#include <alibabacloud/mts/model/QuerySnapshotJobListRequest.h>

using AlibabaCloud::Mts::Model::QuerySnapshotJobListRequest;

QuerySnapshotJobListRequest::QuerySnapshotJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QuerySnapshotJobList")
{}

QuerySnapshotJobListRequest::~QuerySnapshotJobListRequest()
{}

long QuerySnapshotJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QuerySnapshotJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QuerySnapshotJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QuerySnapshotJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string QuerySnapshotJobListRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void QuerySnapshotJobListRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", std::to_string(nextPageToken));
}

std::string QuerySnapshotJobListRequest::getSnapshotJobIds()const
{
	return snapshotJobIds_;
}

void QuerySnapshotJobListRequest::setSnapshotJobIds(const std::string& snapshotJobIds)
{
	snapshotJobIds_ = snapshotJobIds;
	setCoreParameter("SnapshotJobIds", std::to_string(snapshotJobIds));
}

std::string QuerySnapshotJobListRequest::getStartOfJobCreatedTimeRange()const
{
	return startOfJobCreatedTimeRange_;
}

void QuerySnapshotJobListRequest::setStartOfJobCreatedTimeRange(const std::string& startOfJobCreatedTimeRange)
{
	startOfJobCreatedTimeRange_ = startOfJobCreatedTimeRange;
	setCoreParameter("StartOfJobCreatedTimeRange", std::to_string(startOfJobCreatedTimeRange));
}

std::string QuerySnapshotJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QuerySnapshotJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long QuerySnapshotJobListRequest::getMaximumPageSize()const
{
	return maximumPageSize_;
}

void QuerySnapshotJobListRequest::setMaximumPageSize(long maximumPageSize)
{
	maximumPageSize_ = maximumPageSize;
	setCoreParameter("MaximumPageSize", maximumPageSize);
}

long QuerySnapshotJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QuerySnapshotJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QuerySnapshotJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QuerySnapshotJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string QuerySnapshotJobListRequest::getPipelineId()const
{
	return pipelineId_;
}

void QuerySnapshotJobListRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", std::to_string(pipelineId));
}

std::string QuerySnapshotJobListRequest::getState()const
{
	return state_;
}

void QuerySnapshotJobListRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", std::to_string(state));
}

std::string QuerySnapshotJobListRequest::getEndOfJobCreatedTimeRange()const
{
	return endOfJobCreatedTimeRange_;
}

void QuerySnapshotJobListRequest::setEndOfJobCreatedTimeRange(const std::string& endOfJobCreatedTimeRange)
{
	endOfJobCreatedTimeRange_ = endOfJobCreatedTimeRange;
	setCoreParameter("EndOfJobCreatedTimeRange", std::to_string(endOfJobCreatedTimeRange));
}

