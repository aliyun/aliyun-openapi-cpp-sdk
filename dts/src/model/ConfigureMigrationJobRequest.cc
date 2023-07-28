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

ConfigureMigrationJobRequest::ConfigureMigrationJobRequest()
    : RpcServiceRequest("dts", "2017-06-01", "ConfigureMigrationJob") {
  setMethod(HttpRequest::Method::Post);
}

ConfigureMigrationJobRequest::~ConfigureMigrationJobRequest() {}

std::string ConfigureMigrationJobRequest::getSourceEndpointInstanceID() const {
  return sourceEndpointInstanceID_;
}

void ConfigureMigrationJobRequest::setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID) {
  sourceEndpointInstanceID_ = sourceEndpointInstanceID;
  setParameter(std::string("SourceEndpoint.InstanceID"), sourceEndpointInstanceID);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointEngineName() const {
  return sourceEndpointEngineName_;
}

void ConfigureMigrationJobRequest::setSourceEndpointEngineName(const std::string &sourceEndpointEngineName) {
  sourceEndpointEngineName_ = sourceEndpointEngineName;
  setParameter(std::string("SourceEndpoint.EngineName"), sourceEndpointEngineName);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointOracleSID() const {
  return sourceEndpointOracleSID_;
}

void ConfigureMigrationJobRequest::setSourceEndpointOracleSID(const std::string &sourceEndpointOracleSID) {
  sourceEndpointOracleSID_ = sourceEndpointOracleSID;
  setParameter(std::string("SourceEndpoint.OracleSID"), sourceEndpointOracleSID);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointInstanceID() const {
  return destinationEndpointInstanceID_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointInstanceID(const std::string &destinationEndpointInstanceID) {
  destinationEndpointInstanceID_ = destinationEndpointInstanceID;
  setParameter(std::string("DestinationEndpoint.InstanceID"), destinationEndpointInstanceID);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointIP() const {
  return sourceEndpointIP_;
}

void ConfigureMigrationJobRequest::setSourceEndpointIP(const std::string &sourceEndpointIP) {
  sourceEndpointIP_ = sourceEndpointIP;
  setParameter(std::string("SourceEndpoint.IP"), sourceEndpointIP);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointPassword() const {
  return destinationEndpointPassword_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointPassword(const std::string &destinationEndpointPassword) {
  destinationEndpointPassword_ = destinationEndpointPassword;
  setParameter(std::string("DestinationEndpoint.Password"), destinationEndpointPassword);
}

std::string ConfigureMigrationJobRequest::getMigrationObject() const {
  return migrationObject_;
}

void ConfigureMigrationJobRequest::setMigrationObject(const std::string &migrationObject) {
  migrationObject_ = migrationObject;
  setParameter(std::string("MigrationObject"), migrationObject);
}

bool ConfigureMigrationJobRequest::getMigrationModeDataIntialization() const {
  return migrationModeDataIntialization_;
}

void ConfigureMigrationJobRequest::setMigrationModeDataIntialization(bool migrationModeDataIntialization) {
  migrationModeDataIntialization_ = migrationModeDataIntialization;
  setParameter(std::string("MigrationMode.DataIntialization"), migrationModeDataIntialization ? "true" : "false");
}

std::string ConfigureMigrationJobRequest::getMigrationJobId() const {
  return migrationJobId_;
}

void ConfigureMigrationJobRequest::setMigrationJobId(const std::string &migrationJobId) {
  migrationJobId_ = migrationJobId;
  setParameter(std::string("MigrationJobId"), migrationJobId);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointInstanceType() const {
  return sourceEndpointInstanceType_;
}

void ConfigureMigrationJobRequest::setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType) {
  sourceEndpointInstanceType_ = sourceEndpointInstanceType;
  setParameter(std::string("SourceEndpoint.InstanceType"), sourceEndpointInstanceType);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointEngineName() const {
  return destinationEndpointEngineName_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointEngineName(const std::string &destinationEndpointEngineName) {
  destinationEndpointEngineName_ = destinationEndpointEngineName;
  setParameter(std::string("DestinationEndpoint.EngineName"), destinationEndpointEngineName);
}

bool ConfigureMigrationJobRequest::getMigrationModeStructureIntialization() const {
  return migrationModeStructureIntialization_;
}

void ConfigureMigrationJobRequest::setMigrationModeStructureIntialization(bool migrationModeStructureIntialization) {
  migrationModeStructureIntialization_ = migrationModeStructureIntialization;
  setParameter(std::string("MigrationMode.StructureIntialization"), migrationModeStructureIntialization ? "true" : "false");
}

bool ConfigureMigrationJobRequest::getMigrationModeDataSynchronization() const {
  return migrationModeDataSynchronization_;
}

void ConfigureMigrationJobRequest::setMigrationModeDataSynchronization(bool migrationModeDataSynchronization) {
  migrationModeDataSynchronization_ = migrationModeDataSynchronization;
  setParameter(std::string("MigrationMode.DataSynchronization"), migrationModeDataSynchronization ? "true" : "false");
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointRegion() const {
  return destinationEndpointRegion_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointRegion(const std::string &destinationEndpointRegion) {
  destinationEndpointRegion_ = destinationEndpointRegion;
  setParameter(std::string("DestinationEndpoint.Region"), destinationEndpointRegion);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointUserName() const {
  return sourceEndpointUserName_;
}

void ConfigureMigrationJobRequest::setSourceEndpointUserName(const std::string &sourceEndpointUserName) {
  sourceEndpointUserName_ = sourceEndpointUserName;
  setParameter(std::string("SourceEndpoint.UserName"), sourceEndpointUserName);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointDatabaseName() const {
  return sourceEndpointDatabaseName_;
}

void ConfigureMigrationJobRequest::setSourceEndpointDatabaseName(const std::string &sourceEndpointDatabaseName) {
  sourceEndpointDatabaseName_ = sourceEndpointDatabaseName;
  setParameter(std::string("SourceEndpoint.DatabaseName"), sourceEndpointDatabaseName);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointPort() const {
  return sourceEndpointPort_;
}

void ConfigureMigrationJobRequest::setSourceEndpointPort(const std::string &sourceEndpointPort) {
  sourceEndpointPort_ = sourceEndpointPort;
  setParameter(std::string("SourceEndpoint.Port"), sourceEndpointPort);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointOwnerID() const {
  return sourceEndpointOwnerID_;
}

void ConfigureMigrationJobRequest::setSourceEndpointOwnerID(const std::string &sourceEndpointOwnerID) {
  sourceEndpointOwnerID_ = sourceEndpointOwnerID;
  setParameter(std::string("SourceEndpoint.OwnerID"), sourceEndpointOwnerID);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointUserName() const {
  return destinationEndpointUserName_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointUserName(const std::string &destinationEndpointUserName) {
  destinationEndpointUserName_ = destinationEndpointUserName;
  setParameter(std::string("DestinationEndpoint.UserName"), destinationEndpointUserName);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointPort() const {
  return destinationEndpointPort_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointPort(const std::string &destinationEndpointPort) {
  destinationEndpointPort_ = destinationEndpointPort;
  setParameter(std::string("DestinationEndpoint.Port"), destinationEndpointPort);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointRegion() const {
  return sourceEndpointRegion_;
}

void ConfigureMigrationJobRequest::setSourceEndpointRegion(const std::string &sourceEndpointRegion) {
  sourceEndpointRegion_ = sourceEndpointRegion;
  setParameter(std::string("SourceEndpoint.Region"), sourceEndpointRegion);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointRole() const {
  return sourceEndpointRole_;
}

void ConfigureMigrationJobRequest::setSourceEndpointRole(const std::string &sourceEndpointRole) {
  sourceEndpointRole_ = sourceEndpointRole;
  setParameter(std::string("SourceEndpoint.Role"), sourceEndpointRole);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointDataBaseName() const {
  return destinationEndpointDataBaseName_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointDataBaseName(const std::string &destinationEndpointDataBaseName) {
  destinationEndpointDataBaseName_ = destinationEndpointDataBaseName;
  setParameter(std::string("DestinationEndpoint.DataBaseName"), destinationEndpointDataBaseName);
}

std::string ConfigureMigrationJobRequest::getSourceEndpointPassword() const {
  return sourceEndpointPassword_;
}

void ConfigureMigrationJobRequest::setSourceEndpointPassword(const std::string &sourceEndpointPassword) {
  sourceEndpointPassword_ = sourceEndpointPassword;
  setParameter(std::string("SourceEndpoint.Password"), sourceEndpointPassword);
}

std::string ConfigureMigrationJobRequest::getMigrationReserved() const {
  return migrationReserved_;
}

void ConfigureMigrationJobRequest::setMigrationReserved(const std::string &migrationReserved) {
  migrationReserved_ = migrationReserved;
  setParameter(std::string("MigrationReserved"), migrationReserved);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointIP() const {
  return destinationEndpointIP_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointIP(const std::string &destinationEndpointIP) {
  destinationEndpointIP_ = destinationEndpointIP;
  setParameter(std::string("DestinationEndpoint.IP"), destinationEndpointIP);
}

std::string ConfigureMigrationJobRequest::getMigrationJobName() const {
  return migrationJobName_;
}

void ConfigureMigrationJobRequest::setMigrationJobName(const std::string &migrationJobName) {
  migrationJobName_ = migrationJobName;
  setParameter(std::string("MigrationJobName"), migrationJobName);
}

std::string ConfigureMigrationJobRequest::getDestinationEndpointInstanceType() const {
  return destinationEndpointInstanceType_;
}

void ConfigureMigrationJobRequest::setDestinationEndpointInstanceType(const std::string &destinationEndpointInstanceType) {
  destinationEndpointInstanceType_ = destinationEndpointInstanceType;
  setParameter(std::string("DestinationEndpoint.InstanceType"), destinationEndpointInstanceType);
}

