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

ConfigureBackupPlanRequest::ConfigureBackupPlanRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "ConfigureBackupPlan") {
  setMethod(HttpRequest::Method::Post);
}

ConfigureBackupPlanRequest::~ConfigureBackupPlanRequest() {}

long ConfigureBackupPlanRequest::getBackupGatewayId() const {
  return backupGatewayId_;
}

void ConfigureBackupPlanRequest::setBackupGatewayId(long backupGatewayId) {
  backupGatewayId_ = backupGatewayId;
  setParameter(std::string("BackupGatewayId"), std::to_string(backupGatewayId));
}

std::string ConfigureBackupPlanRequest::getSourceEndpointUserName() const {
  return sourceEndpointUserName_;
}

void ConfigureBackupPlanRequest::setSourceEndpointUserName(const std::string &sourceEndpointUserName) {
  sourceEndpointUserName_ = sourceEndpointUserName;
  setParameter(std::string("SourceEndpointUserName"), sourceEndpointUserName);
}

std::string ConfigureBackupPlanRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ConfigureBackupPlanRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ConfigureBackupPlanRequest::getBackupStartTime() const {
  return backupStartTime_;
}

void ConfigureBackupPlanRequest::setBackupStartTime(const std::string &backupStartTime) {
  backupStartTime_ = backupStartTime;
  setParameter(std::string("BackupStartTime"), backupStartTime);
}

std::string ConfigureBackupPlanRequest::getSourceEndpointIP() const {
  return sourceEndpointIP_;
}

void ConfigureBackupPlanRequest::setSourceEndpointIP(const std::string &sourceEndpointIP) {
  sourceEndpointIP_ = sourceEndpointIP;
  setParameter(std::string("SourceEndpointIP"), sourceEndpointIP);
}

std::string ConfigureBackupPlanRequest::getCrossRoleName() const {
  return crossRoleName_;
}

void ConfigureBackupPlanRequest::setCrossRoleName(const std::string &crossRoleName) {
  crossRoleName_ = crossRoleName;
  setParameter(std::string("CrossRoleName"), crossRoleName);
}

std::string ConfigureBackupPlanRequest::getBackupStorageType() const {
  return backupStorageType_;
}

void ConfigureBackupPlanRequest::setBackupStorageType(const std::string &backupStorageType) {
  backupStorageType_ = backupStorageType;
  setParameter(std::string("BackupStorageType"), backupStorageType);
}

int ConfigureBackupPlanRequest::getDuplicationArchivePeriod() const {
  return duplicationArchivePeriod_;
}

void ConfigureBackupPlanRequest::setDuplicationArchivePeriod(int duplicationArchivePeriod) {
  duplicationArchivePeriod_ = duplicationArchivePeriod;
  setParameter(std::string("DuplicationArchivePeriod"), std::to_string(duplicationArchivePeriod));
}

int ConfigureBackupPlanRequest::getBackupLogIntervalSeconds() const {
  return backupLogIntervalSeconds_;
}

void ConfigureBackupPlanRequest::setBackupLogIntervalSeconds(int backupLogIntervalSeconds) {
  backupLogIntervalSeconds_ = backupLogIntervalSeconds;
  setParameter(std::string("BackupLogIntervalSeconds"), std::to_string(backupLogIntervalSeconds));
}

bool ConfigureBackupPlanRequest::getAutoStartBackup() const {
  return autoStartBackup_;
}

void ConfigureBackupPlanRequest::setAutoStartBackup(bool autoStartBackup) {
  autoStartBackup_ = autoStartBackup;
  setParameter(std::string("AutoStartBackup"), autoStartBackup ? "true" : "false");
}

std::string ConfigureBackupPlanRequest::getSourceEndpointPassword() const {
  return sourceEndpointPassword_;
}

void ConfigureBackupPlanRequest::setSourceEndpointPassword(const std::string &sourceEndpointPassword) {
  sourceEndpointPassword_ = sourceEndpointPassword;
  setParameter(std::string("SourceEndpointPassword"), sourceEndpointPassword);
}

std::string ConfigureBackupPlanRequest::getOwnerId() const {
  return ownerId_;
}

void ConfigureBackupPlanRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

int ConfigureBackupPlanRequest::getBackupRetentionPeriod() const {
  return backupRetentionPeriod_;
}

void ConfigureBackupPlanRequest::setBackupRetentionPeriod(int backupRetentionPeriod) {
  backupRetentionPeriod_ = backupRetentionPeriod;
  setParameter(std::string("BackupRetentionPeriod"), std::to_string(backupRetentionPeriod));
}

std::string ConfigureBackupPlanRequest::getBackupPeriod() const {
  return backupPeriod_;
}

void ConfigureBackupPlanRequest::setBackupPeriod(const std::string &backupPeriod) {
  backupPeriod_ = backupPeriod;
  setParameter(std::string("BackupPeriod"), backupPeriod);
}

long ConfigureBackupPlanRequest::getBackupSpeedLimit() const {
  return backupSpeedLimit_;
}

void ConfigureBackupPlanRequest::setBackupSpeedLimit(long backupSpeedLimit) {
  backupSpeedLimit_ = backupSpeedLimit;
  setParameter(std::string("BackupSpeedLimit"), std::to_string(backupSpeedLimit));
}

std::string ConfigureBackupPlanRequest::getSourceEndpointInstanceType() const {
  return sourceEndpointInstanceType_;
}

void ConfigureBackupPlanRequest::setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType) {
  sourceEndpointInstanceType_ = sourceEndpointInstanceType;
  setParameter(std::string("SourceEndpointInstanceType"), sourceEndpointInstanceType);
}

std::string ConfigureBackupPlanRequest::getBackupPlanName() const {
  return backupPlanName_;
}

void ConfigureBackupPlanRequest::setBackupPlanName(const std::string &backupPlanName) {
  backupPlanName_ = backupPlanName;
  setParameter(std::string("BackupPlanName"), backupPlanName);
}

std::string ConfigureBackupPlanRequest::getOSSBucketName() const {
  return oSSBucketName_;
}

void ConfigureBackupPlanRequest::setOSSBucketName(const std::string &oSSBucketName) {
  oSSBucketName_ = oSSBucketName;
  setParameter(std::string("OSSBucketName"), oSSBucketName);
}

std::string ConfigureBackupPlanRequest::getSourceEndpointRegion() const {
  return sourceEndpointRegion_;
}

void ConfigureBackupPlanRequest::setSourceEndpointRegion(const std::string &sourceEndpointRegion) {
  sourceEndpointRegion_ = sourceEndpointRegion;
  setParameter(std::string("SourceEndpointRegion"), sourceEndpointRegion);
}

std::string ConfigureBackupPlanRequest::getSourceEndpointInstanceID() const {
  return sourceEndpointInstanceID_;
}

void ConfigureBackupPlanRequest::setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID) {
  sourceEndpointInstanceID_ = sourceEndpointInstanceID;
  setParameter(std::string("SourceEndpointInstanceID"), sourceEndpointInstanceID);
}

std::string ConfigureBackupPlanRequest::getClientToken() const {
  return clientToken_;
}

void ConfigureBackupPlanRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ConfigureBackupPlanRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void ConfigureBackupPlanRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

std::string ConfigureBackupPlanRequest::getSourceEndpointDatabaseName() const {
  return sourceEndpointDatabaseName_;
}

void ConfigureBackupPlanRequest::setSourceEndpointDatabaseName(const std::string &sourceEndpointDatabaseName) {
  sourceEndpointDatabaseName_ = sourceEndpointDatabaseName;
  setParameter(std::string("SourceEndpointDatabaseName"), sourceEndpointDatabaseName);
}

int ConfigureBackupPlanRequest::getDuplicationInfrequentAccessPeriod() const {
  return duplicationInfrequentAccessPeriod_;
}

void ConfigureBackupPlanRequest::setDuplicationInfrequentAccessPeriod(int duplicationInfrequentAccessPeriod) {
  duplicationInfrequentAccessPeriod_ = duplicationInfrequentAccessPeriod;
  setParameter(std::string("DuplicationInfrequentAccessPeriod"), std::to_string(duplicationInfrequentAccessPeriod));
}

bool ConfigureBackupPlanRequest::getEnableBackupLog() const {
  return enableBackupLog_;
}

void ConfigureBackupPlanRequest::setEnableBackupLog(bool enableBackupLog) {
  enableBackupLog_ = enableBackupLog;
  setParameter(std::string("EnableBackupLog"), enableBackupLog ? "true" : "false");
}

std::string ConfigureBackupPlanRequest::getCrossAliyunId() const {
  return crossAliyunId_;
}

void ConfigureBackupPlanRequest::setCrossAliyunId(const std::string &crossAliyunId) {
  crossAliyunId_ = crossAliyunId;
  setParameter(std::string("CrossAliyunId"), crossAliyunId);
}

std::string ConfigureBackupPlanRequest::getBackupObjects() const {
  return backupObjects_;
}

void ConfigureBackupPlanRequest::setBackupObjects(const std::string &backupObjects) {
  backupObjects_ = backupObjects;
  setParameter(std::string("BackupObjects"), backupObjects);
}

long ConfigureBackupPlanRequest::getBackupRateLimit() const {
  return backupRateLimit_;
}

void ConfigureBackupPlanRequest::setBackupRateLimit(long backupRateLimit) {
  backupRateLimit_ = backupRateLimit;
  setParameter(std::string("BackupRateLimit"), std::to_string(backupRateLimit));
}

int ConfigureBackupPlanRequest::getSourceEndpointPort() const {
  return sourceEndpointPort_;
}

void ConfigureBackupPlanRequest::setSourceEndpointPort(int sourceEndpointPort) {
  sourceEndpointPort_ = sourceEndpointPort;
  setParameter(std::string("SourceEndpointPort"), std::to_string(sourceEndpointPort));
}

std::string ConfigureBackupPlanRequest::getSourceEndpointOracleSID() const {
  return sourceEndpointOracleSID_;
}

void ConfigureBackupPlanRequest::setSourceEndpointOracleSID(const std::string &sourceEndpointOracleSID) {
  sourceEndpointOracleSID_ = sourceEndpointOracleSID;
  setParameter(std::string("SourceEndpointOracleSID"), sourceEndpointOracleSID);
}

std::string ConfigureBackupPlanRequest::getBackupStrategyType() const {
  return backupStrategyType_;
}

void ConfigureBackupPlanRequest::setBackupStrategyType(const std::string &backupStrategyType) {
  backupStrategyType_ = backupStrategyType;
  setParameter(std::string("BackupStrategyType"), backupStrategyType);
}

