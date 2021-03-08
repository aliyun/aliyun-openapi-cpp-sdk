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

#include <alibabacloud/polardb/model/UpgradeDBClusterVersionRequest.h>

using AlibabaCloud::Polardb::Model::UpgradeDBClusterVersionRequest;

UpgradeDBClusterVersionRequest::UpgradeDBClusterVersionRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "UpgradeDBClusterVersion")
{
	setMethod(HttpRequest::Method::Post);
}

UpgradeDBClusterVersionRequest::~UpgradeDBClusterVersionRequest()
{}

long UpgradeDBClusterVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpgradeDBClusterVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpgradeDBClusterVersionRequest::getUpgradeType()const
{
	return upgradeType_;
}

void UpgradeDBClusterVersionRequest::setUpgradeType(const std::string& upgradeType)
{
	upgradeType_ = upgradeType;
	setParameter("UpgradeType", upgradeType);
}

std::string UpgradeDBClusterVersionRequest::getPlannedEndTime()const
{
	return plannedEndTime_;
}

void UpgradeDBClusterVersionRequest::setPlannedEndTime(const std::string& plannedEndTime)
{
	plannedEndTime_ = plannedEndTime;
	setParameter("PlannedEndTime", plannedEndTime);
}

std::string UpgradeDBClusterVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeDBClusterVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpgradeDBClusterVersionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpgradeDBClusterVersionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpgradeDBClusterVersionRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void UpgradeDBClusterVersionRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string UpgradeDBClusterVersionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpgradeDBClusterVersionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UpgradeDBClusterVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeDBClusterVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpgradeDBClusterVersionRequest::getPlannedStartTime()const
{
	return plannedStartTime_;
}

void UpgradeDBClusterVersionRequest::setPlannedStartTime(const std::string& plannedStartTime)
{
	plannedStartTime_ = plannedStartTime;
	setParameter("PlannedStartTime", plannedStartTime);
}

bool UpgradeDBClusterVersionRequest::getFromTimeService()const
{
	return fromTimeService_;
}

void UpgradeDBClusterVersionRequest::setFromTimeService(bool fromTimeService)
{
	fromTimeService_ = fromTimeService;
	setParameter("FromTimeService", fromTimeService ? "true" : "false");
}

