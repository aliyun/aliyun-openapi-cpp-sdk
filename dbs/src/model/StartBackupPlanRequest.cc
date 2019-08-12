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

#include <alibabacloud/dbs/model/StartBackupPlanRequest.h>

using AlibabaCloud::Dbs::Model::StartBackupPlanRequest;

StartBackupPlanRequest::StartBackupPlanRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "StartBackupPlan")
{}

StartBackupPlanRequest::~StartBackupPlanRequest()
{}

std::string StartBackupPlanRequest::getRegionId()const
{
	return regionId_;
}

void StartBackupPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string StartBackupPlanRequest::getClientToken()const
{
	return clientToken_;
}

void StartBackupPlanRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string StartBackupPlanRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void StartBackupPlanRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

std::string StartBackupPlanRequest::getOwnerId()const
{
	return ownerId_;
}

void StartBackupPlanRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

