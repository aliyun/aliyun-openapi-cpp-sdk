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

#include <alibabacloud/ess/model/DescribeCapacityHistoryRequest.h>

using AlibabaCloud::Ess::Model::DescribeCapacityHistoryRequest;

DescribeCapacityHistoryRequest::DescribeCapacityHistoryRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DescribeCapacityHistory")
{}

DescribeCapacityHistoryRequest::~DescribeCapacityHistoryRequest()
{}

std::string DescribeCapacityHistoryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCapacityHistoryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCapacityHistoryRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DescribeCapacityHistoryRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

int DescribeCapacityHistoryRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCapacityHistoryRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCapacityHistoryRequest::getEndTime()const
{
	return endTime_;
}

void DescribeCapacityHistoryRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeCapacityHistoryRequest::getStartTime()const
{
	return startTime_;
}

void DescribeCapacityHistoryRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeCapacityHistoryRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCapacityHistoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeCapacityHistoryRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCapacityHistoryRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeCapacityHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCapacityHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

