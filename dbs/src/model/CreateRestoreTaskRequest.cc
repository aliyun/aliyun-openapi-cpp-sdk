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

#include <alibabacloud/dbs/model/CreateRestoreTaskRequest.h>

using AlibabaCloud::Dbs::Model::CreateRestoreTaskRequest;

CreateRestoreTaskRequest::CreateRestoreTaskRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "CreateRestoreTask")
{}

CreateRestoreTaskRequest::~CreateRestoreTaskRequest()
{}

long CreateRestoreTaskRequest::getBackupGatewayId()const
{
	return backupGatewayId_;
}

void CreateRestoreTaskRequest::setBackupGatewayId(long backupGatewayId)
{
	backupGatewayId_ = backupGatewayId;
	setCoreParameter("BackupGatewayId", std::to_string(backupGatewayId));
}

std::string CreateRestoreTaskRequest::getDestinationEndpointOracleSID()const
{
	return destinationEndpointOracleSID_;
}

void CreateRestoreTaskRequest::setDestinationEndpointOracleSID(const std::string& destinationEndpointOracleSID)
{
	destinationEndpointOracleSID_ = destinationEndpointOracleSID;
	setCoreParameter("DestinationEndpointOracleSID", destinationEndpointOracleSID);
}

long CreateRestoreTaskRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CreateRestoreTaskRequest::setRestoreTime(long restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", std::to_string(restoreTime));
}

std::string CreateRestoreTaskRequest::getDestinationEndpointInstanceType()const
{
	return destinationEndpointInstanceType_;
}

void CreateRestoreTaskRequest::setDestinationEndpointInstanceType(const std::string& destinationEndpointInstanceType)
{
	destinationEndpointInstanceType_ = destinationEndpointInstanceType;
	setCoreParameter("DestinationEndpointInstanceType", destinationEndpointInstanceType);
}

std::string CreateRestoreTaskRequest::getClientToken()const
{
	return clientToken_;
}

void CreateRestoreTaskRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateRestoreTaskRequest::getDestinationEndpointInstanceID()const
{
	return destinationEndpointInstanceID_;
}

void CreateRestoreTaskRequest::setDestinationEndpointInstanceID(const std::string& destinationEndpointInstanceID)
{
	destinationEndpointInstanceID_ = destinationEndpointInstanceID;
	setCoreParameter("DestinationEndpointInstanceID", destinationEndpointInstanceID);
}

int CreateRestoreTaskRequest::getDestinationEndpointPort()const
{
	return destinationEndpointPort_;
}

void CreateRestoreTaskRequest::setDestinationEndpointPort(int destinationEndpointPort)
{
	destinationEndpointPort_ = destinationEndpointPort;
	setCoreParameter("DestinationEndpointPort", std::to_string(destinationEndpointPort));
}

std::string CreateRestoreTaskRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void CreateRestoreTaskRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

std::string CreateRestoreTaskRequest::getBackupSetId()const
{
	return backupSetId_;
}

void CreateRestoreTaskRequest::setBackupSetId(const std::string& backupSetId)
{
	backupSetId_ = backupSetId;
	setCoreParameter("BackupSetId", backupSetId);
}

std::string CreateRestoreTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRestoreTaskRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateRestoreTaskRequest::getDestinationEndpointRegion()const
{
	return destinationEndpointRegion_;
}

void CreateRestoreTaskRequest::setDestinationEndpointRegion(const std::string& destinationEndpointRegion)
{
	destinationEndpointRegion_ = destinationEndpointRegion;
	setCoreParameter("DestinationEndpointRegion", destinationEndpointRegion);
}

std::string CreateRestoreTaskRequest::getRestoreDir()const
{
	return restoreDir_;
}

void CreateRestoreTaskRequest::setRestoreDir(const std::string& restoreDir)
{
	restoreDir_ = restoreDir;
	setCoreParameter("RestoreDir", restoreDir);
}

std::string CreateRestoreTaskRequest::getDestinationEndpointIP()const
{
	return destinationEndpointIP_;
}

void CreateRestoreTaskRequest::setDestinationEndpointIP(const std::string& destinationEndpointIP)
{
	destinationEndpointIP_ = destinationEndpointIP;
	setCoreParameter("DestinationEndpointIP", destinationEndpointIP);
}

std::string CreateRestoreTaskRequest::getRegionId()const
{
	return regionId_;
}

void CreateRestoreTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateRestoreTaskRequest::getDestinationEndpointDatabaseName()const
{
	return destinationEndpointDatabaseName_;
}

void CreateRestoreTaskRequest::setDestinationEndpointDatabaseName(const std::string& destinationEndpointDatabaseName)
{
	destinationEndpointDatabaseName_ = destinationEndpointDatabaseName;
	setCoreParameter("DestinationEndpointDatabaseName", destinationEndpointDatabaseName);
}

std::string CreateRestoreTaskRequest::getDestinationEndpointUserName()const
{
	return destinationEndpointUserName_;
}

void CreateRestoreTaskRequest::setDestinationEndpointUserName(const std::string& destinationEndpointUserName)
{
	destinationEndpointUserName_ = destinationEndpointUserName;
	setCoreParameter("DestinationEndpointUserName", destinationEndpointUserName);
}

std::string CreateRestoreTaskRequest::getRestoreObjects()const
{
	return restoreObjects_;
}

void CreateRestoreTaskRequest::setRestoreObjects(const std::string& restoreObjects)
{
	restoreObjects_ = restoreObjects;
	setCoreParameter("RestoreObjects", restoreObjects);
}

std::string CreateRestoreTaskRequest::getRestoreTaskName()const
{
	return restoreTaskName_;
}

void CreateRestoreTaskRequest::setRestoreTaskName(const std::string& restoreTaskName)
{
	restoreTaskName_ = restoreTaskName;
	setCoreParameter("RestoreTaskName", restoreTaskName);
}

std::string CreateRestoreTaskRequest::getDuplicateConflict()const
{
	return duplicateConflict_;
}

void CreateRestoreTaskRequest::setDuplicateConflict(const std::string& duplicateConflict)
{
	duplicateConflict_ = duplicateConflict;
	setCoreParameter("DuplicateConflict", duplicateConflict);
}

std::string CreateRestoreTaskRequest::getDestinationEndpointPassword()const
{
	return destinationEndpointPassword_;
}

void CreateRestoreTaskRequest::setDestinationEndpointPassword(const std::string& destinationEndpointPassword)
{
	destinationEndpointPassword_ = destinationEndpointPassword;
	setCoreParameter("DestinationEndpointPassword", destinationEndpointPassword);
}

