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

#include <alibabacloud/ecs/model/CheckAutoSnapshotPolicyRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CheckAutoSnapshotPolicyRequest::CheckAutoSnapshotPolicyRequest() :
	EcsRequest("CheckAutoSnapshotPolicy")
{}

CheckAutoSnapshotPolicyRequest::~CheckAutoSnapshotPolicyRequest()
{}

bool CheckAutoSnapshotPolicyRequest::getDataDiskPolicyEnabled()const
{
	return dataDiskPolicyEnabled_;
}

void CheckAutoSnapshotPolicyRequest::setDataDiskPolicyEnabled(bool dataDiskPolicyEnabled)
{
	dataDiskPolicyEnabled_ = dataDiskPolicyEnabled;
	setParameter("DataDiskPolicyEnabled", std::to_string(dataDiskPolicyEnabled));
}

long CheckAutoSnapshotPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CheckAutoSnapshotPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CheckAutoSnapshotPolicyRequest::getDataDiskPolicyRetentionDays()const
{
	return dataDiskPolicyRetentionDays_;
}

void CheckAutoSnapshotPolicyRequest::setDataDiskPolicyRetentionDays(int dataDiskPolicyRetentionDays)
{
	dataDiskPolicyRetentionDays_ = dataDiskPolicyRetentionDays;
	setParameter("DataDiskPolicyRetentionDays", std::to_string(dataDiskPolicyRetentionDays));
}

std::string CheckAutoSnapshotPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CheckAutoSnapshotPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

bool CheckAutoSnapshotPolicyRequest::getSystemDiskPolicyRetentionLastWeek()const
{
	return systemDiskPolicyRetentionLastWeek_;
}

void CheckAutoSnapshotPolicyRequest::setSystemDiskPolicyRetentionLastWeek(bool systemDiskPolicyRetentionLastWeek)
{
	systemDiskPolicyRetentionLastWeek_ = systemDiskPolicyRetentionLastWeek;
	setParameter("SystemDiskPolicyRetentionLastWeek", std::to_string(systemDiskPolicyRetentionLastWeek));
}

std::string CheckAutoSnapshotPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CheckAutoSnapshotPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int CheckAutoSnapshotPolicyRequest::getSystemDiskPolicyTimePeriod()const
{
	return systemDiskPolicyTimePeriod_;
}

void CheckAutoSnapshotPolicyRequest::setSystemDiskPolicyTimePeriod(int systemDiskPolicyTimePeriod)
{
	systemDiskPolicyTimePeriod_ = systemDiskPolicyTimePeriod;
	setParameter("SystemDiskPolicyTimePeriod", std::to_string(systemDiskPolicyTimePeriod));
}

long CheckAutoSnapshotPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckAutoSnapshotPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool CheckAutoSnapshotPolicyRequest::getDataDiskPolicyRetentionLastWeek()const
{
	return dataDiskPolicyRetentionLastWeek_;
}

void CheckAutoSnapshotPolicyRequest::setDataDiskPolicyRetentionLastWeek(bool dataDiskPolicyRetentionLastWeek)
{
	dataDiskPolicyRetentionLastWeek_ = dataDiskPolicyRetentionLastWeek;
	setParameter("DataDiskPolicyRetentionLastWeek", std::to_string(dataDiskPolicyRetentionLastWeek));
}

int CheckAutoSnapshotPolicyRequest::getSystemDiskPolicyRetentionDays()const
{
	return systemDiskPolicyRetentionDays_;
}

void CheckAutoSnapshotPolicyRequest::setSystemDiskPolicyRetentionDays(int systemDiskPolicyRetentionDays)
{
	systemDiskPolicyRetentionDays_ = systemDiskPolicyRetentionDays;
	setParameter("SystemDiskPolicyRetentionDays", std::to_string(systemDiskPolicyRetentionDays));
}

int CheckAutoSnapshotPolicyRequest::getDataDiskPolicyTimePeriod()const
{
	return dataDiskPolicyTimePeriod_;
}

void CheckAutoSnapshotPolicyRequest::setDataDiskPolicyTimePeriod(int dataDiskPolicyTimePeriod)
{
	dataDiskPolicyTimePeriod_ = dataDiskPolicyTimePeriod;
	setParameter("DataDiskPolicyTimePeriod", std::to_string(dataDiskPolicyTimePeriod));
}

bool CheckAutoSnapshotPolicyRequest::getSystemDiskPolicyEnabled()const
{
	return systemDiskPolicyEnabled_;
}

void CheckAutoSnapshotPolicyRequest::setSystemDiskPolicyEnabled(bool systemDiskPolicyEnabled)
{
	systemDiskPolicyEnabled_ = systemDiskPolicyEnabled;
	setParameter("SystemDiskPolicyEnabled", std::to_string(systemDiskPolicyEnabled));
}

