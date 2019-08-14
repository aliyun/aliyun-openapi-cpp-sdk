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

#include <alibabacloud/ecs/model/DescribeSnapshotMonitorDataRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSnapshotMonitorDataRequest;

DescribeSnapshotMonitorDataRequest::DescribeSnapshotMonitorDataRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeSnapshotMonitorData")
{}

DescribeSnapshotMonitorDataRequest::~DescribeSnapshotMonitorDataRequest()
{}

std::string DescribeSnapshotMonitorDataRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeSnapshotMonitorDataRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DescribeSnapshotMonitorDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSnapshotMonitorDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeSnapshotMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeSnapshotMonitorDataRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string DescribeSnapshotMonitorDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSnapshotMonitorDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSnapshotMonitorDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSnapshotMonitorDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeSnapshotMonitorDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSnapshotMonitorDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSnapshotMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSnapshotMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeSnapshotMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSnapshotMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeSnapshotMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSnapshotMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

