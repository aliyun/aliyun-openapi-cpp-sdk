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

#include <alibabacloud/dts/model/ConfigureMigrationJobRequest.h>

using AlibabaCloud::Dts::Model::ConfigureMigrationJobRequest;

ConfigureMigrationJobRequest::ConfigureMigrationJobRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ConfigureMigrationJob")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigureMigrationJobRequest::~ConfigureMigrationJobRequest()
{}

std::string ConfigureMigrationJobRequest::getSourceEndpointInstanceID()const
{
	return sourceEndpointInstanceID_;
}

void ConfigureMigrationJobRequest::setSourceEndpointInstanceID(const std::string& sourceEndpointInstanceID)
{
	sourceEndpointInstanceID_ = sourceEndpointInstanceID;
	setParameter("SourceEndpointInstanceID", sourceEndpointInstanceID);
}

std::string ConfigureMigrationJobRequest::getCheckpoint()const
{
	return checkpoint_;
}

void ConfigureMigrationJobRequest::setCheckpoint(const std::string& checkpoint)
{
	checkpoint_ = checkpoint;
	setParameter("Checkpoint", checkpoint);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointEngineName()const
{
	return sourceEndpointEngineName_;
}

void ConfigureMigrationJobRequest::setSourceEndpointEngineName(const std::string& sourceEndpointEngineName)
{
	sourceEndpointEngineName_ = sourceEndpointEngineName;
	setParameter("SourceEndpointEngineName", sourceEndpointEngineName);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointOracleSID()const
{
	return sourceEndpointOracleSID_;
}

void ConfigureMigrationJobRequest::setSourceEndpointOracleSID(const std::string& sourceEndpointOracleSID)
{
	sourceEndpointOracleSID_ = sourceEndpointOracleSID;
	setParameter("SourceEndpointOracleSID", sourceEndpointOracleSID);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointInstanceID()const
{
	return destinationEndpointInstanceID_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointInstanceID(const std::string& destinationEndpointInstanceID)
{
	destinationEndpointInstanceID_ = destinationEndpointInstanceID;
	setParameter("DestinationEndpointInstanceID", destinationEndpointInstanceID);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointIP()const
{
	return sourceEndpointIP_;
}

void ConfigureMigrationJobRequest::setSourceEndpointIP(const std::string& sourceEndpointIP)
{
	sourceEndpointIP_ = sourceEndpointIP;
	setParameter("SourceEndpointIP", sourceEndpointIP);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointPassword()const
{
	return destinationEndpointPassword_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointPassword(const std::string& destinationEndpointPassword)
{
	destinationEndpointPassword_ = destinationEndpointPassword;
	setParameter("DestinationEndpointPassword", destinationEndpointPassword);
}

std::string ConfigureMigrationJobRequest::getMigrationObject()const
{
	return migrationObject_;
}

void ConfigureMigrationJobRequest::setMigrationObject(const std::string& migrationObject)
{
	migrationObject_ = migrationObject;
	setBodyParameter("MigrationObject", migrationObject);
}

bool ConfigureMigrationJobRequest::getMigrationModeDataIntialization()const
{
	return migrationModeDataIntialization_;
}

void ConfigureMigrationJobRequest::setMigrationModeDataIntialization(bool migrationModeDataIntialization)
{
	migrationModeDataIntialization_ = migrationModeDataIntialization;
	setParameter("MigrationModeDataIntialization", migrationModeDataIntialization ? "true" : "false");
}

std::string ConfigureMigrationJobRequest::getMigrationJobId()const
{
	return migrationJobId_;
}

void ConfigureMigrationJobRequest::setMigrationJobId(const std::string& migrationJobId)
{
	migrationJobId_ = migrationJobId;
	setParameter("MigrationJobId", migrationJobId);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointInstanceType()const
{
	return sourceEndpointInstanceType_;
}

void ConfigureMigrationJobRequest::setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType)
{
	sourceEndpointInstanceType_ = sourceEndpointInstanceType;
	setParameter("SourceEndpointInstanceType", sourceEndpointInstanceType);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointEngineName()const
{
	return destinationEndpointEngineName_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointEngineName(const std::string& destinationEndpointEngineName)
{
	destinationEndpointEngineName_ = destinationEndpointEngineName;
	setParameter("DestinationEndpointEngineName", destinationEndpointEngineName);
}

std::string ConfigureMigrationJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ConfigureMigrationJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ConfigureMigrationJobRequest::getAccountId()const
{
	return accountId_;
}

void ConfigureMigrationJobRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

bool ConfigureMigrationJobRequest::getMigrationModeStructureIntialization()const
{
	return migrationModeStructureIntialization_;
}

void ConfigureMigrationJobRequest::setMigrationModeStructureIntialization(bool migrationModeStructureIntialization)
{
	migrationModeStructureIntialization_ = migrationModeStructureIntialization;
	setParameter("MigrationModeStructureIntialization", migrationModeStructureIntialization ? "true" : "false");
}

bool ConfigureMigrationJobRequest::getMigrationModeDataSynchronization()const
{
	return migrationModeDataSynchronization_;
}

void ConfigureMigrationJobRequest::setMigrationModeDataSynchronization(bool migrationModeDataSynchronization)
{
	migrationModeDataSynchronization_ = migrationModeDataSynchronization;
	setParameter("MigrationModeDataSynchronization", migrationModeDataSynchronization ? "true" : "false");
}

std::string ConfigureMigrationJobRequest::getRegionId()const
{
	return regionId_;
}

void ConfigureMigrationJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointRegion()const
{
	return destinationEndpointRegion_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointRegion(const std::string& destinationEndpointRegion)
{
	destinationEndpointRegion_ = destinationEndpointRegion;
	setParameter("DestinationEndpointRegion", destinationEndpointRegion);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointUserName()const
{
	return sourceEndpointUserName_;
}

void ConfigureMigrationJobRequest::setSourceEndpointUserName(const std::string& sourceEndpointUserName)
{
	sourceEndpointUserName_ = sourceEndpointUserName;
	setParameter("SourceEndpointUserName", sourceEndpointUserName);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointDatabaseName()const
{
	return sourceEndpointDatabaseName_;
}

void ConfigureMigrationJobRequest::setSourceEndpointDatabaseName(const std::string& sourceEndpointDatabaseName)
{
	sourceEndpointDatabaseName_ = sourceEndpointDatabaseName;
	setParameter("SourceEndpointDatabaseName", sourceEndpointDatabaseName);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointPort()const
{
	return sourceEndpointPort_;
}

void ConfigureMigrationJobRequest::setSourceEndpointPort(const std::string& sourceEndpointPort)
{
	sourceEndpointPort_ = sourceEndpointPort;
	setParameter("SourceEndpointPort", sourceEndpointPort);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointOwnerID()const
{
	return sourceEndpointOwnerID_;
}

void ConfigureMigrationJobRequest::setSourceEndpointOwnerID(const std::string& sourceEndpointOwnerID)
{
	sourceEndpointOwnerID_ = sourceEndpointOwnerID;
	setParameter("SourceEndpointOwnerID", sourceEndpointOwnerID);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointUserName()const
{
	return destinationEndpointUserName_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointUserName(const std::string& destinationEndpointUserName)
{
	destinationEndpointUserName_ = destinationEndpointUserName;
	setParameter("DestinationEndpointUserName", destinationEndpointUserName);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointOracleSID()const
{
	return destinationEndpointOracleSID_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointOracleSID(const std::string& destinationEndpointOracleSID)
{
	destinationEndpointOracleSID_ = destinationEndpointOracleSID;
	setParameter("DestinationEndpointOracleSID", destinationEndpointOracleSID);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointPort()const
{
	return destinationEndpointPort_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointPort(const std::string& destinationEndpointPort)
{
	destinationEndpointPort_ = destinationEndpointPort;
	setParameter("DestinationEndpointPort", destinationEndpointPort);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointRegion()const
{
	return sourceEndpointRegion_;
}

void ConfigureMigrationJobRequest::setSourceEndpointRegion(const std::string& sourceEndpointRegion)
{
	sourceEndpointRegion_ = sourceEndpointRegion;
	setParameter("SourceEndpointRegion", sourceEndpointRegion);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointRole()const
{
	return sourceEndpointRole_;
}

void ConfigureMigrationJobRequest::setSourceEndpointRole(const std::string& sourceEndpointRole)
{
	sourceEndpointRole_ = sourceEndpointRole;
	setParameter("SourceEndpointRole", sourceEndpointRole);
}

std::string ConfigureMigrationJobRequest::getOwnerId()const
{
	return ownerId_;
}

void ConfigureMigrationJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointDataBaseName()const
{
	return destinationEndpointDataBaseName_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointDataBaseName(const std::string& destinationEndpointDataBaseName)
{
	destinationEndpointDataBaseName_ = destinationEndpointDataBaseName;
	setParameter("DestinationEndpointDataBaseName", destinationEndpointDataBaseName);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointPassword()const
{
	return sourceEndpointPassword_;
}

void ConfigureMigrationJobRequest::setSourceEndpointPassword(const std::string& sourceEndpointPassword)
{
	sourceEndpointPassword_ = sourceEndpointPassword;
	setParameter("SourceEndpointPassword", sourceEndpointPassword);
}

std::string ConfigureMigrationJobRequest::getMigrationReserved()const
{
	return migrationReserved_;
}

void ConfigureMigrationJobRequest::setMigrationReserved(const std::string& migrationReserved)
{
	migrationReserved_ = migrationReserved;
	setParameter("MigrationReserved", migrationReserved);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointIP()const
{
	return destinationEndpointIP_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointIP(const std::string& destinationEndpointIP)
{
	destinationEndpointIP_ = destinationEndpointIP;
	setParameter("DestinationEndpointIP", destinationEndpointIP);
}

std::string ConfigureMigrationJobRequest::getMigrationJobName()const
{
	return migrationJobName_;
}

void ConfigureMigrationJobRequest::setMigrationJobName(const std::string& migrationJobName)
{
	migrationJobName_ = migrationJobName;
	setParameter("MigrationJobName", migrationJobName);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointInstanceType()const
{
	return destinationEndpointInstanceType_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointInstanceType(const std::string& destinationEndpointInstanceType)
{
	destinationEndpointInstanceType_ = destinationEndpointInstanceType;
	setParameter("DestinationEndpointInstanceType", destinationEndpointInstanceType);
}

