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

#include <alibabacloud/r-kvstore/model/SetSnapshotSettingsRequest.h>

using AlibabaCloud::R_kvstore::Model::SetSnapshotSettingsRequest;

SetSnapshotSettingsRequest::SetSnapshotSettingsRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "SetSnapshotSettings")
{}

SetSnapshotSettingsRequest::~SetSnapshotSettingsRequest()
{}

long SetSnapshotSettingsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetSnapshotSettingsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int SetSnapshotSettingsRequest::getEndHour()const
{
	return endHour_;
}

void SetSnapshotSettingsRequest::setEndHour(int endHour)
{
	endHour_ = endHour;
	setCoreParameter("EndHour", endHour);
}

std::string SetSnapshotSettingsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetSnapshotSettingsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetSnapshotSettingsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetSnapshotSettingsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int SetSnapshotSettingsRequest::getDayList()const
{
	return dayList_;
}

void SetSnapshotSettingsRequest::setDayList(int dayList)
{
	dayList_ = dayList;
	setCoreParameter("DayList", dayList);
}

long SetSnapshotSettingsRequest::getOwnerId()const
{
	return ownerId_;
}

void SetSnapshotSettingsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetSnapshotSettingsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetSnapshotSettingsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetSnapshotSettingsRequest::getInstanceId()const
{
	return instanceId_;
}

void SetSnapshotSettingsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

int SetSnapshotSettingsRequest::getRetentionDay()const
{
	return retentionDay_;
}

void SetSnapshotSettingsRequest::setRetentionDay(int retentionDay)
{
	retentionDay_ = retentionDay;
	setCoreParameter("RetentionDay", retentionDay);
}

std::string SetSnapshotSettingsRequest::getRegionId()const
{
	return regionId_;
}

void SetSnapshotSettingsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int SetSnapshotSettingsRequest::getMaxManualSnapshots()const
{
	return maxManualSnapshots_;
}

void SetSnapshotSettingsRequest::setMaxManualSnapshots(int maxManualSnapshots)
{
	maxManualSnapshots_ = maxManualSnapshots;
	setCoreParameter("MaxManualSnapshots", maxManualSnapshots);
}

int SetSnapshotSettingsRequest::getMaxAutoSnapshots()const
{
	return maxAutoSnapshots_;
}

void SetSnapshotSettingsRequest::setMaxAutoSnapshots(int maxAutoSnapshots)
{
	maxAutoSnapshots_ = maxAutoSnapshots;
	setCoreParameter("MaxAutoSnapshots", maxAutoSnapshots);
}

int SetSnapshotSettingsRequest::getBeginHour()const
{
	return beginHour_;
}

void SetSnapshotSettingsRequest::setBeginHour(int beginHour)
{
	beginHour_ = beginHour;
	setCoreParameter("BeginHour", beginHour);
}

