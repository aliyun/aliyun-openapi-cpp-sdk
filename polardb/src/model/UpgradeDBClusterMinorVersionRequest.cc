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

#include <alibabacloud/polardb/model/UpgradeDBClusterMinorVersionRequest.h>

using AlibabaCloud::Polardb::Model::UpgradeDBClusterMinorVersionRequest;

UpgradeDBClusterMinorVersionRequest::UpgradeDBClusterMinorVersionRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "UpgradeDBClusterMinorVersion")
{
	setMethod(HttpRequest::Method::Post);
}

UpgradeDBClusterMinorVersionRequest::~UpgradeDBClusterMinorVersionRequest()
{}

long UpgradeDBClusterMinorVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpgradeDBClusterMinorVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpgradeDBClusterMinorVersionRequest::getPlannedEndTime()const
{
	return plannedEndTime_;
}

void UpgradeDBClusterMinorVersionRequest::setPlannedEndTime(const std::string& plannedEndTime)
{
	plannedEndTime_ = plannedEndTime;
	setParameter("PlannedEndTime", plannedEndTime);
}

std::string UpgradeDBClusterMinorVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeDBClusterMinorVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpgradeDBClusterMinorVersionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpgradeDBClusterMinorVersionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpgradeDBClusterMinorVersionRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void UpgradeDBClusterMinorVersionRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string UpgradeDBClusterMinorVersionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpgradeDBClusterMinorVersionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UpgradeDBClusterMinorVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeDBClusterMinorVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpgradeDBClusterMinorVersionRequest::getPlannedStartTime()const
{
	return plannedStartTime_;
}

void UpgradeDBClusterMinorVersionRequest::setPlannedStartTime(const std::string& plannedStartTime)
{
	plannedStartTime_ = plannedStartTime;
	setParameter("PlannedStartTime", plannedStartTime);
}

bool UpgradeDBClusterMinorVersionRequest::getFromTimeService()const
{
	return fromTimeService_;
}

void UpgradeDBClusterMinorVersionRequest::setFromTimeService(bool fromTimeService)
{
	fromTimeService_ = fromTimeService;
	setParameter("FromTimeService", fromTimeService ? "true" : "false");
}

