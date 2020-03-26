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

#include <alibabacloud/mts/model/QueryCoverJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryCoverJobListRequest;

QueryCoverJobListRequest::QueryCoverJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryCoverJobList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryCoverJobListRequest::~QueryCoverJobListRequest()
{}

long QueryCoverJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryCoverJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryCoverJobListRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void QueryCoverJobListRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setParameter("NextPageToken", nextPageToken);
}

std::string QueryCoverJobListRequest::getStartOfJobCreatedTimeRange()const
{
	return startOfJobCreatedTimeRange_;
}

void QueryCoverJobListRequest::setStartOfJobCreatedTimeRange(const std::string& startOfJobCreatedTimeRange)
{
	startOfJobCreatedTimeRange_ = startOfJobCreatedTimeRange;
	setParameter("StartOfJobCreatedTimeRange", startOfJobCreatedTimeRange);
}

std::string QueryCoverJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryCoverJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryCoverJobListRequest::getCoverJobIds()const
{
	return coverJobIds_;
}

void QueryCoverJobListRequest::setCoverJobIds(const std::string& coverJobIds)
{
	coverJobIds_ = coverJobIds;
	setParameter("CoverJobIds", coverJobIds);
}

std::string QueryCoverJobListRequest::getState()const
{
	return state_;
}

void QueryCoverJobListRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

std::string QueryCoverJobListRequest::getEndOfJobCreatedTimeRange()const
{
	return endOfJobCreatedTimeRange_;
}

void QueryCoverJobListRequest::setEndOfJobCreatedTimeRange(const std::string& endOfJobCreatedTimeRange)
{
	endOfJobCreatedTimeRange_ = endOfJobCreatedTimeRange;
	setParameter("EndOfJobCreatedTimeRange", endOfJobCreatedTimeRange);
}

std::string QueryCoverJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryCoverJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryCoverJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryCoverJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long QueryCoverJobListRequest::getMaximumPageSize()const
{
	return maximumPageSize_;
}

void QueryCoverJobListRequest::setMaximumPageSize(long maximumPageSize)
{
	maximumPageSize_ = maximumPageSize;
	setParameter("MaximumPageSize", std::to_string(maximumPageSize));
}

long QueryCoverJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryCoverJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryCoverJobListRequest::getPipelineId()const
{
	return pipelineId_;
}

void QueryCoverJobListRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", pipelineId);
}

