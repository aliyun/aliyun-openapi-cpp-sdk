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

#include <alibabacloud/dbs/model/RenewBackupPlanRequest.h>

using AlibabaCloud::Dbs::Model::RenewBackupPlanRequest;

RenewBackupPlanRequest::RenewBackupPlanRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "RenewBackupPlan")
{}

RenewBackupPlanRequest::~RenewBackupPlanRequest()
{}

std::string RenewBackupPlanRequest::getPeriod()const
{
	return period_;
}

void RenewBackupPlanRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string RenewBackupPlanRequest::getRegionId()const
{
	return regionId_;
}

void RenewBackupPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RenewBackupPlanRequest::getClientToken()const
{
	return clientToken_;
}

void RenewBackupPlanRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string RenewBackupPlanRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void RenewBackupPlanRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

std::string RenewBackupPlanRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewBackupPlanRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int RenewBackupPlanRequest::getUsedTime()const
{
	return usedTime_;
}

void RenewBackupPlanRequest::setUsedTime(int usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", std::to_string(usedTime));
}

