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

#include <alibabacloud/dts/model/ConfigureSynchronizationJobRequest.h>

using AlibabaCloud::Dts::Model::ConfigureSynchronizationJobRequest;

ConfigureSynchronizationJobRequest::ConfigureSynchronizationJobRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ConfigureSynchronizationJob")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigureSynchronizationJobRequest::~ConfigureSynchronizationJobRequest()
{}

std::string ConfigureSynchronizationJobRequest::getSourceEndpointInstanceId()const
{
	return sourceEndpointInstanceId_;
}

void ConfigureSynchronizationJobRequest::setSourceEndpointInstanceId(const std::string& sourceEndpointInstanceId)
{
	sourceEndpointInstanceId_ = sourceEndpointInstanceId;
	setParameter("SourceEndpointInstanceId", sourceEndpointInstanceId);
}

std::string ConfigureSynchronizationJobRequest::getCheckpoint()const
{
	return checkpoint_;
}

void ConfigureSynchronizationJobRequest::setCheckpoint(const std::string& checkpoint)
{
	checkpoint_ = checkpoint;
	setParameter("Checkpoint", checkpoint);
}

std::string ConfigureSynchronizationJobRequest::getDestinationEndpointInstanceId()const
{
	return destinationEndpointInstanceId_;
}

void ConfigureSynchronizationJobRequest::setDestinationEndpointInstanceId(const std::string& destinationEndpointInstanceId)
{
	destinationEndpointInstanceId_ = destinationEndpointInstanceId;
	setParameter("DestinationEndpointInstanceId", destinationEndpointInstanceId);
}

std::string ConfigureSynchronizationJobRequest::getSourceEndpointIP()const
{
	return sourceEndpointIP_;
}

void ConfigureSynchronizationJobRequest::setSourceEndpointIP(const std::string& sourceEndpointIP)
{
	sourceEndpointIP_ = sourceEndpointIP;
	setParameter("SourceEndpointIP", sourceEndpointIP);
}

std::string ConfigureSynchronizationJobRequest::getSynchronizationObjects()const
{
	return synchronizationObjects_;
}

void ConfigureSynchronizationJobRequest::setSynchronizationObjects(const std::string& synchronizationObjects)
{
	synchronizationObjects_ = synchronizationObjects;
	setBodyParameter("SynchronizationObjects", synchronizationObjects);
}

std::string ConfigureSynchronizationJobRequest::getDestinationEndpointPassword()const
{
	return destinationEndpointPassword_;
}

void ConfigureSynchronizationJobRequest::setDestinationEndpointPassword(const std::string& destinationEndpointPassword)
{
	destinationEndpointPassword_ = destinationEndpointPassword;
	setParameter("DestinationEndpointPassword", destinationEndpointPassword);
}

bool ConfigureSynchronizationJobRequest::getDataInitialization()const
{
	return dataInitialization_;
}

void ConfigureSynchronizationJobRequest::setDataInitialization(bool dataInitialization)
{
	dataInitialization_ = dataInitialization;
	setParameter("DataInitialization", dataInitialization ? "true" : "false");
}

bool ConfigureSynchronizationJobRequest::getStructureInitialization()const
{
	return structureInitialization_;
}

void ConfigureSynchronizationJobRequest::setStructureInitialization(bool structureInitialization)
{
	structureInitialization_ = structureInitialization;
	setParameter("StructureInitialization", structureInitialization ? "true" : "false");
}

bool ConfigureSynchronizationJobRequest::getPartitionKeyModifyTime_Minute()const
{
	return partitionKeyModifyTime_Minute_;
}

void ConfigureSynchronizationJobRequest::setPartitionKeyModifyTime_Minute(bool partitionKeyModifyTime_Minute)
{
	partitionKeyModifyTime_Minute_ = partitionKeyModifyTime_Minute;
	setParameter("PartitionKeyModifyTime_Minute", partitionKeyModifyTime_Minute ? "true" : "false");
}

bool ConfigureSynchronizationJobRequest::getPartitionKeyModifyTime_Day()const
{
	return partitionKeyModifyTime_Day_;
}

void ConfigureSynchronizationJobRequest::setPartitionKeyModifyTime_Day(bool partitionKeyModifyTime_Day)
{
	partitionKeyModifyTime_Day_ = partitionKeyModifyTime_Day;
	setParameter("PartitionKeyModifyTime_Day", partitionKeyModifyTime_Day ? "true" : "false");
}

std::string ConfigureSynchronizationJobRequest::getSourceEndpointInstanceType()const
{
	return sourceEndpointInstanceType_;
}

void ConfigureSynchronizationJobRequest::setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType)
{
	sourceEndpointInstanceType_ = sourceEndpointInstanceType;
	setParameter("SourceEndpointInstanceType", sourceEndpointInstanceType);
}

std::string ConfigureSynchronizationJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ConfigureSynchronizationJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ConfigureSynchronizationJobRequest::getSynchronizationJobId()const
{
	return synchronizationJobId_;
}

void ConfigureSynchronizationJobRequest::setSynchronizationJobId(const std::string& synchronizationJobId)
{
	synchronizationJobId_ = synchronizationJobId;
	setParameter("SynchronizationJobId", synchronizationJobId);
}

std::string ConfigureSynchronizationJobRequest::getSynchronizationJobName()const
{
	return synchronizationJobName_;
}

void ConfigureSynchronizationJobRequest::setSynchronizationJobName(const std::string& synchronizationJobName)
{
	synchronizationJobName_ = synchronizationJobName;
	setParameter("SynchronizationJobName", synchronizationJobName);
}

std::string ConfigureSynchronizationJobRequest::getAccountId()const
{
	return accountId_;
}

void ConfigureSynchronizationJobRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string ConfigureSynchronizationJobRequest::getSourceEndpointUserName()const
{
	return sourceEndpointUserName_;
}

void ConfigureSynchronizationJobRequest::setSourceEndpointUserName(const std::string& sourceEndpointUserName)
{
	sourceEndpointUserName_ = sourceEndpointUserName;
	setParameter("SourceEndpointUserName", sourceEndpointUserName);
}

std::string ConfigureSynchronizationJobRequest::getSourceEndpointDatabaseName()const
{
	return sourceEndpointDatabaseName_;
}

void ConfigureSynchronizationJobRequest::setSourceEndpointDatabaseName(const std::string& sourceEndpointDatabaseName)
{
	sourceEndpointDatabaseName_ = sourceEndpointDatabaseName;
	setParameter("SourceEndpointDatabaseName", sourceEndpointDatabaseName);
}

bool ConfigureSynchronizationJobRequest::getPartitionKeyModifyTime_Month()const
{
	return partitionKeyModifyTime_Month_;
}

void ConfigureSynchronizationJobRequest::setPartitionKeyModifyTime_Month(bool partitionKeyModifyTime_Month)
{
	partitionKeyModifyTime_Month_ = partitionKeyModifyTime_Month;
	setParameter("PartitionKeyModifyTime_Month", partitionKeyModifyTime_Month ? "true" : "false");
}

std::string ConfigureSynchronizationJobRequest::getSourceEndpointPort()const
{
	return sourceEndpointPort_;
}

void ConfigureSynchronizationJobRequest::setSourceEndpointPort(const std::string& sourceEndpointPort)
{
	sourceEndpointPort_ = sourceEndpointPort;
	setParameter("SourceEndpointPort", sourceEndpointPort);
}

std::string ConfigureSynchronizationJobRequest::getSourceEndpointOwnerID()const
{
	return sourceEndpointOwnerID_;
}

void ConfigureSynchronizationJobRequest::setSourceEndpointOwnerID(const std::string& sourceEndpointOwnerID)
{
	sourceEndpointOwnerID_ = sourceEndpointOwnerID;
	setParameter("SourceEndpointOwnerID", sourceEndpointOwnerID);
}

std::string ConfigureSynchronizationJobRequest::getDestinationEndpointUserName()const
{
	return destinationEndpointUserName_;
}

void ConfigureSynchronizationJobRequest::setDestinationEndpointUserName(const std::string& destinationEndpointUserName)
{
	destinationEndpointUserName_ = destinationEndpointUserName;
	setParameter("DestinationEndpointUserName", destinationEndpointUserName);
}

std::string ConfigureSynchronizationJobRequest::getDestinationEndpointPort()const
{
	return destinationEndpointPort_;
}

void ConfigureSynchronizationJobRequest::setDestinationEndpointPort(const std::string& destinationEndpointPort)
{
	destinationEndpointPort_ = destinationEndpointPort;
	setParameter("DestinationEndpointPort", destinationEndpointPort);
}

bool ConfigureSynchronizationJobRequest::getPartitionKeyModifyTime_Year()const
{
	return partitionKeyModifyTime_Year_;
}

void ConfigureSynchronizationJobRequest::setPartitionKeyModifyTime_Year(bool partitionKeyModifyTime_Year)
{
	partitionKeyModifyTime_Year_ = partitionKeyModifyTime_Year;
	setParameter("PartitionKeyModifyTime_Year", partitionKeyModifyTime_Year ? "true" : "false");
}

std::string ConfigureSynchronizationJobRequest::getSourceEndpointRole()const
{
	return sourceEndpointRole_;
}

void ConfigureSynchronizationJobRequest::setSourceEndpointRole(const std::string& sourceEndpointRole)
{
	sourceEndpointRole_ = sourceEndpointRole;
	setParameter("SourceEndpointRole", sourceEndpointRole);
}

std::string ConfigureSynchronizationJobRequest::getOwnerId()const
{
	return ownerId_;
}

void ConfigureSynchronizationJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

bool ConfigureSynchronizationJobRequest::getPartitionKeyModifyTime_Hour()const
{
	return partitionKeyModifyTime_Hour_;
}

void ConfigureSynchronizationJobRequest::setPartitionKeyModifyTime_Hour(bool partitionKeyModifyTime_Hour)
{
	partitionKeyModifyTime_Hour_ = partitionKeyModifyTime_Hour;
	setParameter("PartitionKeyModifyTime_Hour", partitionKeyModifyTime_Hour ? "true" : "false");
}

std::string ConfigureSynchronizationJobRequest::getDestinationEndpointDataBaseName()const
{
	return destinationEndpointDataBaseName_;
}

void ConfigureSynchronizationJobRequest::setDestinationEndpointDataBaseName(const std::string& destinationEndpointDataBaseName)
{
	destinationEndpointDataBaseName_ = destinationEndpointDataBaseName;
	setParameter("DestinationEndpointDataBaseName", destinationEndpointDataBaseName);
}

std::string ConfigureSynchronizationJobRequest::getSourceEndpointPassword()const
{
	return sourceEndpointPassword_;
}

void ConfigureSynchronizationJobRequest::setSourceEndpointPassword(const std::string& sourceEndpointPassword)
{
	sourceEndpointPassword_ = sourceEndpointPassword;
	setParameter("SourceEndpointPassword", sourceEndpointPassword);
}

std::string ConfigureSynchronizationJobRequest::getMigrationReserved()const
{
	return migrationReserved_;
}

void ConfigureSynchronizationJobRequest::setMigrationReserved(const std::string& migrationReserved)
{
	migrationReserved_ = migrationReserved;
	setParameter("MigrationReserved", migrationReserved);
}

std::string ConfigureSynchronizationJobRequest::getDestinationEndpointIP()const
{
	return destinationEndpointIP_;
}

void ConfigureSynchronizationJobRequest::setDestinationEndpointIP(const std::string& destinationEndpointIP)
{
	destinationEndpointIP_ = destinationEndpointIP;
	setParameter("DestinationEndpointIP", destinationEndpointIP);
}

std::string ConfigureSynchronizationJobRequest::getDestinationEndpointInstanceType()const
{
	return destinationEndpointInstanceType_;
}

void ConfigureSynchronizationJobRequest::setDestinationEndpointInstanceType(const std::string& destinationEndpointInstanceType)
{
	destinationEndpointInstanceType_ = destinationEndpointInstanceType;
	setParameter("DestinationEndpointInstanceType", destinationEndpointInstanceType);
}

std::string ConfigureSynchronizationJobRequest::getSynchronizationDirection()const
{
	return synchronizationDirection_;
}

void ConfigureSynchronizationJobRequest::setSynchronizationDirection(const std::string& synchronizationDirection)
{
	synchronizationDirection_ = synchronizationDirection;
	setParameter("SynchronizationDirection", synchronizationDirection);
}

