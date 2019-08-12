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

#include <alibabacloud/dbs/model/ConfigureBackupPlanRequest.h>

using AlibabaCloud::Dbs::Model::ConfigureBackupPlanRequest;

ConfigureBackupPlanRequest::ConfigureBackupPlanRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "ConfigureBackupPlan")
{}

ConfigureBackupPlanRequest::~ConfigureBackupPlanRequest()
{}

std::string ConfigureBackupPlanRequest::getSourceEndpointRegion()const
{
	return sourceEndpointRegion_;
}

void ConfigureBackupPlanRequest::setSourceEndpointRegion(const std::string& sourceEndpointRegion)
{
	sourceEndpointRegion_ = sourceEndpointRegion;
	setCoreParameter("SourceEndpointRegion", sourceEndpointRegion);
}

int ConfigureBackupPlanRequest::getDuplicationArchivePeriod()const
{
	return duplicationArchivePeriod_;
}

void ConfigureBackupPlanRequest::setDuplicationArchivePeriod(int duplicationArchivePeriod)
{
	duplicationArchivePeriod_ = duplicationArchivePeriod;
	setCoreParameter("DuplicationArchivePeriod", std::to_string(duplicationArchivePeriod));
}

long ConfigureBackupPlanRequest::getBackupGatewayId()const
{
	return backupGatewayId_;
}

void ConfigureBackupPlanRequest::setBackupGatewayId(long backupGatewayId)
{
	backupGatewayId_ = backupGatewayId;
	setCoreParameter("BackupGatewayId", std::to_string(backupGatewayId));
}

std::string ConfigureBackupPlanRequest::getSourceEndpointInstanceID()const
{
	return sourceEndpointInstanceID_;
}

void ConfigureBackupPlanRequest::setSourceEndpointInstanceID(const std::string& sourceEndpointInstanceID)
{
	sourceEndpointInstanceID_ = sourceEndpointInstanceID;
	setCoreParameter("SourceEndpointInstanceID", sourceEndpointInstanceID);
}

std::string ConfigureBackupPlanRequest::getSourceEndpointUserName()const
{
	return sourceEndpointUserName_;
}

void ConfigureBackupPlanRequest::setSourceEndpointUserName(const std::string& sourceEndpointUserName)
{
	sourceEndpointUserName_ = sourceEndpointUserName;
	setCoreParameter("SourceEndpointUserName", sourceEndpointUserName);
}

std::string ConfigureBackupPlanRequest::getClientToken()const
{
	return clientToken_;
}

void ConfigureBackupPlanRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ConfigureBackupPlanRequest::getSourceEndpointPassword()const
{
	return sourceEndpointPassword_;
}

void ConfigureBackupPlanRequest::setSourceEndpointPassword(const std::string& sourceEndpointPassword)
{
	sourceEndpointPassword_ = sourceEndpointPassword;
	setCoreParameter("SourceEndpointPassword", sourceEndpointPassword);
}

std::string ConfigureBackupPlanRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void ConfigureBackupPlanRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

std::string ConfigureBackupPlanRequest::getBackupObjects()const
{
	return backupObjects_;
}

void ConfigureBackupPlanRequest::setBackupObjects(const std::string& backupObjects)
{
	backupObjects_ = backupObjects;
	setCoreParameter("BackupObjects", backupObjects);
}

std::string ConfigureBackupPlanRequest::getOwnerId()const
{
	return ownerId_;
}

void ConfigureBackupPlanRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int ConfigureBackupPlanRequest::getSourceEndpointPort()const
{
	return sourceEndpointPort_;
}

void ConfigureBackupPlanRequest::setSourceEndpointPort(int sourceEndpointPort)
{
	sourceEndpointPort_ = sourceEndpointPort;
	setCoreParameter("SourceEndpointPort", std::to_string(sourceEndpointPort));
}

std::string ConfigureBackupPlanRequest::getSourceEndpointDatabaseName()const
{
	return sourceEndpointDatabaseName_;
}

void ConfigureBackupPlanRequest::setSourceEndpointDatabaseName(const std::string& sourceEndpointDatabaseName)
{
	sourceEndpointDatabaseName_ = sourceEndpointDatabaseName;
	setCoreParameter("SourceEndpointDatabaseName", sourceEndpointDatabaseName);
}

int ConfigureBackupPlanRequest::getBackupRetentionPeriod()const
{
	return backupRetentionPeriod_;
}

void ConfigureBackupPlanRequest::setBackupRetentionPeriod(int backupRetentionPeriod)
{
	backupRetentionPeriod_ = backupRetentionPeriod;
	setCoreParameter("BackupRetentionPeriod", std::to_string(backupRetentionPeriod));
}

int ConfigureBackupPlanRequest::getDuplicationInfrequentAccessPeriod()const
{
	return duplicationInfrequentAccessPeriod_;
}

void ConfigureBackupPlanRequest::setDuplicationInfrequentAccessPeriod(int duplicationInfrequentAccessPeriod)
{
	duplicationInfrequentAccessPeriod_ = duplicationInfrequentAccessPeriod;
	setCoreParameter("DuplicationInfrequentAccessPeriod", std::to_string(duplicationInfrequentAccessPeriod));
}

std::string ConfigureBackupPlanRequest::getBackupPeriod()const
{
	return backupPeriod_;
}

void ConfigureBackupPlanRequest::setBackupPeriod(const std::string& backupPeriod)
{
	backupPeriod_ = backupPeriod;
	setCoreParameter("BackupPeriod", backupPeriod);
}

std::string ConfigureBackupPlanRequest::getBackupStartTime()const
{
	return backupStartTime_;
}

void ConfigureBackupPlanRequest::setBackupStartTime(const std::string& backupStartTime)
{
	backupStartTime_ = backupStartTime;
	setCoreParameter("BackupStartTime", backupStartTime);
}

std::string ConfigureBackupPlanRequest::getSourceEndpointInstanceType()const
{
	return sourceEndpointInstanceType_;
}

void ConfigureBackupPlanRequest::setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType)
{
	sourceEndpointInstanceType_ = sourceEndpointInstanceType;
	setCoreParameter("SourceEndpointInstanceType", sourceEndpointInstanceType);
}

std::string ConfigureBackupPlanRequest::getSourceEndpointIP()const
{
	return sourceEndpointIP_;
}

void ConfigureBackupPlanRequest::setSourceEndpointIP(const std::string& sourceEndpointIP)
{
	sourceEndpointIP_ = sourceEndpointIP;
	setCoreParameter("SourceEndpointIP", sourceEndpointIP);
}

std::string ConfigureBackupPlanRequest::getBackupPlanName()const
{
	return backupPlanName_;
}

void ConfigureBackupPlanRequest::setBackupPlanName(const std::string& backupPlanName)
{
	backupPlanName_ = backupPlanName;
	setCoreParameter("BackupPlanName", backupPlanName);
}

std::string ConfigureBackupPlanRequest::getRegionId()const
{
	return regionId_;
}

void ConfigureBackupPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ConfigureBackupPlanRequest::getSourceEndpointOracleSID()const
{
	return sourceEndpointOracleSID_;
}

void ConfigureBackupPlanRequest::setSourceEndpointOracleSID(const std::string& sourceEndpointOracleSID)
{
	sourceEndpointOracleSID_ = sourceEndpointOracleSID;
	setCoreParameter("SourceEndpointOracleSID", sourceEndpointOracleSID);
}

std::string ConfigureBackupPlanRequest::getOSSBucketName()const
{
	return oSSBucketName_;
}

void ConfigureBackupPlanRequest::setOSSBucketName(const std::string& oSSBucketName)
{
	oSSBucketName_ = oSSBucketName;
	setCoreParameter("OSSBucketName", oSSBucketName);
}

bool ConfigureBackupPlanRequest::getEnableBackupLog()const
{
	return enableBackupLog_;
}

void ConfigureBackupPlanRequest::setEnableBackupLog(bool enableBackupLog)
{
	enableBackupLog_ = enableBackupLog;
	setCoreParameter("EnableBackupLog", enableBackupLog ? "true" : "false");
}

