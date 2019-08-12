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

#include <alibabacloud/r-kvstore/model/DescribeSnapshotsRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeSnapshotsRequest;

DescribeSnapshotsRequest::DescribeSnapshotsRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeSnapshots")
{}

DescribeSnapshotsRequest::~DescribeSnapshotsRequest()
{}

long DescribeSnapshotsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSnapshotsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeSnapshotsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeSnapshotsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeSnapshotsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSnapshotsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeSnapshotsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSnapshotsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeSnapshotsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSnapshotsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeSnapshotsRequest::getSnapshotIds()const
{
	return snapshotIds_;
}

void DescribeSnapshotsRequest::setSnapshotIds(const std::string& snapshotIds)
{
	snapshotIds_ = snapshotIds;
	setCoreParameter("SnapshotIds", std::to_string(snapshotIds));
}

std::string DescribeSnapshotsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSnapshotsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeSnapshotsRequest::getBeginTime()const
{
	return beginTime_;
}

void DescribeSnapshotsRequest::setBeginTime(const std::string& beginTime)
{
	beginTime_ = beginTime;
	setCoreParameter("BeginTime", std::to_string(beginTime));
}

long DescribeSnapshotsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSnapshotsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeSnapshotsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSnapshotsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

