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

#include <alibabacloud/dbs/model/ModifyBackupStrategyRequest.h>

using AlibabaCloud::Dbs::Model::ModifyBackupStrategyRequest;

ModifyBackupStrategyRequest::ModifyBackupStrategyRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "ModifyBackupStrategy")
{}

ModifyBackupStrategyRequest::~ModifyBackupStrategyRequest()
{}

std::string ModifyBackupStrategyRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyBackupStrategyRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyBackupStrategyRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void ModifyBackupStrategyRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

std::string ModifyBackupStrategyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyBackupStrategyRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyBackupStrategyRequest::getBackupPeriod()const
{
	return backupPeriod_;
}

void ModifyBackupStrategyRequest::setBackupPeriod(const std::string& backupPeriod)
{
	backupPeriod_ = backupPeriod;
	setCoreParameter("BackupPeriod", backupPeriod);
}

std::string ModifyBackupStrategyRequest::getBackupStartTime()const
{
	return backupStartTime_;
}

void ModifyBackupStrategyRequest::setBackupStartTime(const std::string& backupStartTime)
{
	backupStartTime_ = backupStartTime;
	setCoreParameter("BackupStartTime", backupStartTime);
}

