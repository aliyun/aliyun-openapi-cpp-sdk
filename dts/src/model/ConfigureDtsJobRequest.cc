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

#include <alibabacloud/dts/model/ConfigureDtsJobRequest.h>

using AlibabaCloud::Dts::Model::ConfigureDtsJobRequest;

ConfigureDtsJobRequest::ConfigureDtsJobRequest()
    : RpcServiceRequest("dts", "2020-01-01", "ConfigureDtsJob") {
  setMethod(HttpRequest::Method::Post);
}

ConfigureDtsJobRequest::~ConfigureDtsJobRequest() {}

std::string ConfigureDtsJobRequest::getCheckpoint() const {
  return checkpoint_;
}

void ConfigureDtsJobRequest::setCheckpoint(const std::string &checkpoint) {
  checkpoint_ = checkpoint;
  setParameter(std::string("Checkpoint"), checkpoint);
}

std::string ConfigureDtsJobRequest::getSourceEndpointUserName() const {
  return sourceEndpointUserName_;
}

void ConfigureDtsJobRequest::setSourceEndpointUserName(const std::string &sourceEndpointUserName) {
  sourceEndpointUserName_ = sourceEndpointUserName;
  setParameter(std::string("SourceEndpointUserName"), sourceEndpointUserName);
}

std::string ConfigureDtsJobRequest::getDestinationEndpointOwnerID() const {
  return destinationEndpointOwnerID_;
}

void ConfigureDtsJobRequest::setDestinationEndpointOwnerID(const std::string &destinationEndpointOwnerID) {
  destinationEndpointOwnerID_ = destinationEndpointOwnerID;
  setParameter(std::string("DestinationEndpointOwnerID"), destinationEndpointOwnerID);
}

std::string ConfigureDtsJobRequest::getDelayPhone() const {
  return delayPhone_;
}

void ConfigureDtsJobRequest::setDelayPhone(const std::string &delayPhone) {
  delayPhone_ = delayPhone;
  setParameter(std::string("DelayPhone"), delayPhone);
}

std::string ConfigureDtsJobRequest::getDtsBisLabel() const {
  return dtsBisLabel_;
}

void ConfigureDtsJobRequest::setDtsBisLabel(const std::string &dtsBisLabel) {
  dtsBisLabel_ = dtsBisLabel;
  setParameter(std::string("DtsBisLabel"), dtsBisLabel);
}

std::string ConfigureDtsJobRequest::getSourceEndpointIP() const {
  return sourceEndpointIP_;
}

void ConfigureDtsJobRequest::setSourceEndpointIP(const std::string &sourceEndpointIP) {
  sourceEndpointIP_ = sourceEndpointIP;
  setParameter(std::string("SourceEndpointIP"), sourceEndpointIP);
}

std::string ConfigureDtsJobRequest::getErrorPhone() const {
  return errorPhone_;
}

void ConfigureDtsJobRequest::setErrorPhone(const std::string &errorPhone) {
  errorPhone_ = errorPhone;
  setParameter(std::string("ErrorPhone"), errorPhone);
}

std::string ConfigureDtsJobRequest::getDestinationEndpointUserName() const {
  return destinationEndpointUserName_;
}

void ConfigureDtsJobRequest::setDestinationEndpointUserName(const std::string &destinationEndpointUserName) {
  destinationEndpointUserName_ = destinationEndpointUserName;
  setParameter(std::string("DestinationEndpointUserName"), destinationEndpointUserName);
}

std::string ConfigureDtsJobRequest::getDtsJobId() const {
  return dtsJobId_;
}

void ConfigureDtsJobRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string ConfigureDtsJobRequest::getDestinationEndpointRole() const {
  return destinationEndpointRole_;
}

void ConfigureDtsJobRequest::setDestinationEndpointRole(const std::string &destinationEndpointRole) {
  destinationEndpointRole_ = destinationEndpointRole;
  setParameter(std::string("DestinationEndpointRole"), destinationEndpointRole);
}

std::string ConfigureDtsJobRequest::getDbList() const {
  return dbList_;
}

void ConfigureDtsJobRequest::setDbList(const std::string &dbList) {
  dbList_ = dbList;
  setBodyParameter(std::string("DbList"), dbList);
}

std::string ConfigureDtsJobRequest::getDestinationEndpointOracleSID() const {
  return destinationEndpointOracleSID_;
}

void ConfigureDtsJobRequest::setDestinationEndpointOracleSID(const std::string &destinationEndpointOracleSID) {
  destinationEndpointOracleSID_ = destinationEndpointOracleSID;
  setParameter(std::string("DestinationEndpointOracleSID"), destinationEndpointOracleSID);
}

std::string ConfigureDtsJobRequest::getDestinationEndpointPort() const {
  return destinationEndpointPort_;
}

void ConfigureDtsJobRequest::setDestinationEndpointPort(const std::string &destinationEndpointPort) {
  destinationEndpointPort_ = destinationEndpointPort;
  setParameter(std::string("DestinationEndpointPort"), destinationEndpointPort);
}

std::string ConfigureDtsJobRequest::getSourceEndpointPassword() const {
  return sourceEndpointPassword_;
}

void ConfigureDtsJobRequest::setSourceEndpointPassword(const std::string &sourceEndpointPassword) {
  sourceEndpointPassword_ = sourceEndpointPassword;
  setParameter(std::string("SourceEndpointPassword"), sourceEndpointPassword);
}

std::string ConfigureDtsJobRequest::getOwnerId() const {
  return ownerId_;
}

void ConfigureDtsJobRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ConfigureDtsJobRequest::getJobType() const {
  return jobType_;
}

void ConfigureDtsJobRequest::setJobType(const std::string &jobType) {
  jobType_ = jobType;
  setParameter(std::string("JobType"), jobType);
}

long ConfigureDtsJobRequest::getDelayRuleTime() const {
  return delayRuleTime_;
}

void ConfigureDtsJobRequest::setDelayRuleTime(long delayRuleTime) {
  delayRuleTime_ = delayRuleTime;
  setParameter(std::string("DelayRuleTime"), std::to_string(delayRuleTime));
}

bool ConfigureDtsJobRequest::getDisasterRecoveryJob() const {
  return disasterRecoveryJob_;
}

void ConfigureDtsJobRequest::setDisasterRecoveryJob(bool disasterRecoveryJob) {
  disasterRecoveryJob_ = disasterRecoveryJob;
  setParameter(std::string("DisasterRecoveryJob"), disasterRecoveryJob ? "true" : "false");
}

std::string ConfigureDtsJobRequest::getDestinationEndpointIP() const {
  return destinationEndpointIP_;
}

void ConfigureDtsJobRequest::setDestinationEndpointIP(const std::string &destinationEndpointIP) {
  destinationEndpointIP_ = destinationEndpointIP;
  setParameter(std::string("DestinationEndpointIP"), destinationEndpointIP);
}

std::string ConfigureDtsJobRequest::getSourceEndpointInstanceType() const {
  return sourceEndpointInstanceType_;
}

void ConfigureDtsJobRequest::setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType) {
  sourceEndpointInstanceType_ = sourceEndpointInstanceType;
  setParameter(std::string("SourceEndpointInstanceType"), sourceEndpointInstanceType);
}

std::string ConfigureDtsJobRequest::getDtsJobName() const {
  return dtsJobName_;
}

void ConfigureDtsJobRequest::setDtsJobName(const std::string &dtsJobName) {
  dtsJobName_ = dtsJobName;
  setParameter(std::string("DtsJobName"), dtsJobName);
}

std::string ConfigureDtsJobRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void ConfigureDtsJobRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

std::string ConfigureDtsJobRequest::getSynchronizationDirection() const {
  return synchronizationDirection_;
}

void ConfigureDtsJobRequest::setSynchronizationDirection(const std::string &synchronizationDirection) {
  synchronizationDirection_ = synchronizationDirection;
  setParameter(std::string("SynchronizationDirection"), synchronizationDirection);
}

std::string ConfigureDtsJobRequest::getSourceEndpointRegion() const {
  return sourceEndpointRegion_;
}

void ConfigureDtsJobRequest::setSourceEndpointRegion(const std::string &sourceEndpointRegion) {
  sourceEndpointRegion_ = sourceEndpointRegion;
  setParameter(std::string("SourceEndpointRegion"), sourceEndpointRegion);
}

bool ConfigureDtsJobRequest::getDelayNotice() const {
  return delayNotice_;
}

void ConfigureDtsJobRequest::setDelayNotice(bool delayNotice) {
  delayNotice_ = delayNotice;
  setParameter(std::string("DelayNotice"), delayNotice ? "true" : "false");
}

std::string ConfigureDtsJobRequest::getDestinationEndpointInstanceType() const {
  return destinationEndpointInstanceType_;
}

void ConfigureDtsJobRequest::setDestinationEndpointInstanceType(const std::string &destinationEndpointInstanceType) {
  destinationEndpointInstanceType_ = destinationEndpointInstanceType;
  setParameter(std::string("DestinationEndpointInstanceType"), destinationEndpointInstanceType);
}

bool ConfigureDtsJobRequest::getDataInitialization() const {
  return dataInitialization_;
}

void ConfigureDtsJobRequest::setDataInitialization(bool dataInitialization) {
  dataInitialization_ = dataInitialization;
  setParameter(std::string("DataInitialization"), dataInitialization ? "true" : "false");
}

std::string ConfigureDtsJobRequest::getSourceEndpointInstanceID() const {
  return sourceEndpointInstanceID_;
}

void ConfigureDtsJobRequest::setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID) {
  sourceEndpointInstanceID_ = sourceEndpointInstanceID;
  setParameter(std::string("SourceEndpointInstanceID"), sourceEndpointInstanceID);
}

bool ConfigureDtsJobRequest::getStructureInitialization() const {
  return structureInitialization_;
}

void ConfigureDtsJobRequest::setStructureInitialization(bool structureInitialization) {
  structureInitialization_ = structureInitialization;
  setParameter(std::string("StructureInitialization"), structureInitialization ? "true" : "false");
}

std::string ConfigureDtsJobRequest::getSourceEndpointOwnerID() const {
  return sourceEndpointOwnerID_;
}

void ConfigureDtsJobRequest::setSourceEndpointOwnerID(const std::string &sourceEndpointOwnerID) {
  sourceEndpointOwnerID_ = sourceEndpointOwnerID;
  setParameter(std::string("SourceEndpointOwnerID"), sourceEndpointOwnerID);
}

std::string ConfigureDtsJobRequest::getDedicatedClusterId() const {
  return dedicatedClusterId_;
}

void ConfigureDtsJobRequest::setDedicatedClusterId(const std::string &dedicatedClusterId) {
  dedicatedClusterId_ = dedicatedClusterId;
  setParameter(std::string("DedicatedClusterId"), dedicatedClusterId);
}

std::string ConfigureDtsJobRequest::getSourceEndpointDatabaseName() const {
  return sourceEndpointDatabaseName_;
}

void ConfigureDtsJobRequest::setSourceEndpointDatabaseName(const std::string &sourceEndpointDatabaseName) {
  sourceEndpointDatabaseName_ = sourceEndpointDatabaseName;
  setParameter(std::string("SourceEndpointDatabaseName"), sourceEndpointDatabaseName);
}

std::string ConfigureDtsJobRequest::getDestinationEndpointRegion() const {
  return destinationEndpointRegion_;
}

void ConfigureDtsJobRequest::setDestinationEndpointRegion(const std::string &destinationEndpointRegion) {
  destinationEndpointRegion_ = destinationEndpointRegion;
  setParameter(std::string("DestinationEndpointRegion"), destinationEndpointRegion);
}

std::string ConfigureDtsJobRequest::getDataCheckConfigure() const {
  return dataCheckConfigure_;
}

void ConfigureDtsJobRequest::setDataCheckConfigure(const std::string &dataCheckConfigure) {
  dataCheckConfigure_ = dataCheckConfigure;
  setParameter(std::string("DataCheckConfigure"), dataCheckConfigure);
}

std::string ConfigureDtsJobRequest::getRegionId() const {
  return regionId_;
}

void ConfigureDtsJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ConfigureDtsJobRequest::getReserve() const {
  return reserve_;
}

void ConfigureDtsJobRequest::setReserve(const std::string &reserve) {
  reserve_ = reserve;
  setBodyParameter(std::string("Reserve"), reserve);
}

std::string ConfigureDtsJobRequest::getSourceEndpointVSwitchID() const {
  return sourceEndpointVSwitchID_;
}

void ConfigureDtsJobRequest::setSourceEndpointVSwitchID(const std::string &sourceEndpointVSwitchID) {
  sourceEndpointVSwitchID_ = sourceEndpointVSwitchID;
  setParameter(std::string("SourceEndpointVSwitchID"), sourceEndpointVSwitchID);
}

bool ConfigureDtsJobRequest::getDataSynchronization() const {
  return dataSynchronization_;
}

void ConfigureDtsJobRequest::setDataSynchronization(bool dataSynchronization) {
  dataSynchronization_ = dataSynchronization;
  setParameter(std::string("DataSynchronization"), dataSynchronization ? "true" : "false");
}

std::string ConfigureDtsJobRequest::getFileOssUrl() const {
  return fileOssUrl_;
}

void ConfigureDtsJobRequest::setFileOssUrl(const std::string &fileOssUrl) {
  fileOssUrl_ = fileOssUrl;
  setParameter(std::string("FileOssUrl"), fileOssUrl);
}

std::string ConfigureDtsJobRequest::getDestinationEndpointEngineName() const {
  return destinationEndpointEngineName_;
}

void ConfigureDtsJobRequest::setDestinationEndpointEngineName(const std::string &destinationEndpointEngineName) {
  destinationEndpointEngineName_ = destinationEndpointEngineName;
  setParameter(std::string("DestinationEndpointEngineName"), destinationEndpointEngineName);
}

std::string ConfigureDtsJobRequest::getDestinationEndpointInstanceID() const {
  return destinationEndpointInstanceID_;
}

void ConfigureDtsJobRequest::setDestinationEndpointInstanceID(const std::string &destinationEndpointInstanceID) {
  destinationEndpointInstanceID_ = destinationEndpointInstanceID;
  setParameter(std::string("DestinationEndpointInstanceID"), destinationEndpointInstanceID);
}

std::string ConfigureDtsJobRequest::getSourceEndpointPort() const {
  return sourceEndpointPort_;
}

void ConfigureDtsJobRequest::setSourceEndpointPort(const std::string &sourceEndpointPort) {
  sourceEndpointPort_ = sourceEndpointPort;
  setParameter(std::string("SourceEndpointPort"), sourceEndpointPort);
}

std::string ConfigureDtsJobRequest::getSourceEndpointOracleSID() const {
  return sourceEndpointOracleSID_;
}

void ConfigureDtsJobRequest::setSourceEndpointOracleSID(const std::string &sourceEndpointOracleSID) {
  sourceEndpointOracleSID_ = sourceEndpointOracleSID;
  setParameter(std::string("SourceEndpointOracleSID"), sourceEndpointOracleSID);
}

std::string ConfigureDtsJobRequest::getDestinationEndpointDataBaseName() const {
  return destinationEndpointDataBaseName_;
}

void ConfigureDtsJobRequest::setDestinationEndpointDataBaseName(const std::string &destinationEndpointDataBaseName) {
  destinationEndpointDataBaseName_ = destinationEndpointDataBaseName;
  setParameter(std::string("DestinationEndpointDataBaseName"), destinationEndpointDataBaseName);
}

bool ConfigureDtsJobRequest::getErrorNotice() const {
  return errorNotice_;
}

void ConfigureDtsJobRequest::setErrorNotice(bool errorNotice) {
  errorNotice_ = errorNotice;
  setParameter(std::string("ErrorNotice"), errorNotice ? "true" : "false");
}

std::string ConfigureDtsJobRequest::getSourceEndpointRole() const {
  return sourceEndpointRole_;
}

void ConfigureDtsJobRequest::setSourceEndpointRole(const std::string &sourceEndpointRole) {
  sourceEndpointRole_ = sourceEndpointRole;
  setParameter(std::string("SourceEndpointRole"), sourceEndpointRole);
}

std::string ConfigureDtsJobRequest::getDestinationEndpointPassword() const {
  return destinationEndpointPassword_;
}

void ConfigureDtsJobRequest::setDestinationEndpointPassword(const std::string &destinationEndpointPassword) {
  destinationEndpointPassword_ = destinationEndpointPassword;
  setParameter(std::string("DestinationEndpointPassword"), destinationEndpointPassword);
}

std::string ConfigureDtsJobRequest::getSourceEndpointEngineName() const {
  return sourceEndpointEngineName_;
}

void ConfigureDtsJobRequest::setSourceEndpointEngineName(const std::string &sourceEndpointEngineName) {
  sourceEndpointEngineName_ = sourceEndpointEngineName;
  setParameter(std::string("SourceEndpointEngineName"), sourceEndpointEngineName);
}

