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

#include <alibabacloud/dbs/model/CreateAndStartBackupPlanRequest.h>

using AlibabaCloud::Dbs::Model::CreateAndStartBackupPlanRequest;

CreateAndStartBackupPlanRequest::CreateAndStartBackupPlanRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "CreateAndStartBackupPlan") {
  setMethod(HttpRequest::Method::Post);
}

CreateAndStartBackupPlanRequest::~CreateAndStartBackupPlanRequest() {}

std::string CreateAndStartBackupPlanRequest::getDatabaseType() const {
  return databaseType_;
}

void CreateAndStartBackupPlanRequest::setDatabaseType(const std::string &databaseType) {
  databaseType_ = databaseType;
  setParameter(std::string("DatabaseType"), databaseType);
}

long CreateAndStartBackupPlanRequest::getBackupGatewayId() const {
  return backupGatewayId_;
}

void CreateAndStartBackupPlanRequest::setBackupGatewayId(long backupGatewayId) {
  backupGatewayId_ = backupGatewayId;
  setParameter(std::string("BackupGatewayId"), std::to_string(backupGatewayId));
}

std::string CreateAndStartBackupPlanRequest::getSourceEndpointUserName() const {
  return sourceEndpointUserName_;
}

void CreateAndStartBackupPlanRequest::setSourceEndpointUserName(const std::string &sourceEndpointUserName) {
  sourceEndpointUserName_ = sourceEndpointUserName;
  setParameter(std::string("SourceEndpointUserName"), sourceEndpointUserName);
}

std::string CreateAndStartBackupPlanRequest::getStorageType() const {
  return storageType_;
}

void CreateAndStartBackupPlanRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string CreateAndStartBackupPlanRequest::getDatabaseRegion() const {
  return databaseRegion_;
}

void CreateAndStartBackupPlanRequest::setDatabaseRegion(const std::string &databaseRegion) {
  databaseRegion_ = databaseRegion;
  setParameter(std::string("DatabaseRegion"), databaseRegion);
}

std::string CreateAndStartBackupPlanRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateAndStartBackupPlanRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateAndStartBackupPlanRequest::getBackupStartTime() const {
  return backupStartTime_;
}

void CreateAndStartBackupPlanRequest::setBackupStartTime(const std::string &backupStartTime) {
  backupStartTime_ = backupStartTime;
  setParameter(std::string("BackupStartTime"), backupStartTime);
}

std::string CreateAndStartBackupPlanRequest::getSourceEndpointIP() const {
  return sourceEndpointIP_;
}

void CreateAndStartBackupPlanRequest::setSourceEndpointIP(const std::string &sourceEndpointIP) {
  sourceEndpointIP_ = sourceEndpointIP;
  setParameter(std::string("SourceEndpointIP"), sourceEndpointIP);
}

std::string CreateAndStartBackupPlanRequest::getCrossRoleName() const {
  return crossRoleName_;
}

void CreateAndStartBackupPlanRequest::setCrossRoleName(const std::string &crossRoleName) {
  crossRoleName_ = crossRoleName;
  setParameter(std::string("CrossRoleName"), crossRoleName);
}

std::string CreateAndStartBackupPlanRequest::getBackupStorageType() const {
  return backupStorageType_;
}

void CreateAndStartBackupPlanRequest::setBackupStorageType(const std::string &backupStorageType) {
  backupStorageType_ = backupStorageType;
  setParameter(std::string("BackupStorageType"), backupStorageType);
}

int CreateAndStartBackupPlanRequest::getDuplicationArchivePeriod() const {
  return duplicationArchivePeriod_;
}

void CreateAndStartBackupPlanRequest::setDuplicationArchivePeriod(int duplicationArchivePeriod) {
  duplicationArchivePeriod_ = duplicationArchivePeriod;
  setParameter(std::string("DuplicationArchivePeriod"), std::to_string(duplicationArchivePeriod));
}

std::string CreateAndStartBackupPlanRequest::getPeriod() const {
  return period_;
}

void CreateAndStartBackupPlanRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

int CreateAndStartBackupPlanRequest::getBackupLogIntervalSeconds() const {
  return backupLogIntervalSeconds_;
}

void CreateAndStartBackupPlanRequest::setBackupLogIntervalSeconds(int backupLogIntervalSeconds) {
  backupLogIntervalSeconds_ = backupLogIntervalSeconds;
  setParameter(std::string("BackupLogIntervalSeconds"), std::to_string(backupLogIntervalSeconds));
}

std::string CreateAndStartBackupPlanRequest::getFromApp() const {
  return fromApp_;
}

void CreateAndStartBackupPlanRequest::setFromApp(const std::string &fromApp) {
  fromApp_ = fromApp;
  setParameter(std::string("FromApp"), fromApp);
}

std::string CreateAndStartBackupPlanRequest::getSourceEndpointPassword() const {
  return sourceEndpointPassword_;
}

void CreateAndStartBackupPlanRequest::setSourceEndpointPassword(const std::string &sourceEndpointPassword) {
  sourceEndpointPassword_ = sourceEndpointPassword;
  setParameter(std::string("SourceEndpointPassword"), sourceEndpointPassword);
}

std::string CreateAndStartBackupPlanRequest::getOwnerId() const {
  return ownerId_;
}

void CreateAndStartBackupPlanRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string CreateAndStartBackupPlanRequest::getBackupMethod() const {
  return backupMethod_;
}

void CreateAndStartBackupPlanRequest::setBackupMethod(const std::string &backupMethod) {
  backupMethod_ = backupMethod;
  setParameter(std::string("BackupMethod"), backupMethod);
}

int CreateAndStartBackupPlanRequest::getBackupRetentionPeriod() const {
  return backupRetentionPeriod_;
}

void CreateAndStartBackupPlanRequest::setBackupRetentionPeriod(int backupRetentionPeriod) {
  backupRetentionPeriod_ = backupRetentionPeriod;
  setParameter(std::string("BackupRetentionPeriod"), std::to_string(backupRetentionPeriod));
}

std::string CreateAndStartBackupPlanRequest::getBackupPeriod() const {
  return backupPeriod_;
}

void CreateAndStartBackupPlanRequest::setBackupPeriod(const std::string &backupPeriod) {
  backupPeriod_ = backupPeriod;
  setParameter(std::string("BackupPeriod"), backupPeriod);
}

long CreateAndStartBackupPlanRequest::getBackupSpeedLimit() const {
  return backupSpeedLimit_;
}

void CreateAndStartBackupPlanRequest::setBackupSpeedLimit(long backupSpeedLimit) {
  backupSpeedLimit_ = backupSpeedLimit;
  setParameter(std::string("BackupSpeedLimit"), std::to_string(backupSpeedLimit));
}

std::string CreateAndStartBackupPlanRequest::getSourceEndpointInstanceType() const {
  return sourceEndpointInstanceType_;
}

void CreateAndStartBackupPlanRequest::setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType) {
  sourceEndpointInstanceType_ = sourceEndpointInstanceType;
  setParameter(std::string("SourceEndpointInstanceType"), sourceEndpointInstanceType);
}

std::string CreateAndStartBackupPlanRequest::getBackupPlanName() const {
  return backupPlanName_;
}

void CreateAndStartBackupPlanRequest::setBackupPlanName(const std::string &backupPlanName) {
  backupPlanName_ = backupPlanName;
  setParameter(std::string("BackupPlanName"), backupPlanName);
}

std::string CreateAndStartBackupPlanRequest::getOSSBucketName() const {
  return oSSBucketName_;
}

void CreateAndStartBackupPlanRequest::setOSSBucketName(const std::string &oSSBucketName) {
  oSSBucketName_ = oSSBucketName;
  setParameter(std::string("OSSBucketName"), oSSBucketName);
}

std::string CreateAndStartBackupPlanRequest::getRegion() const {
  return region_;
}

void CreateAndStartBackupPlanRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string CreateAndStartBackupPlanRequest::getSourceEndpointRegion() const {
  return sourceEndpointRegion_;
}

void CreateAndStartBackupPlanRequest::setSourceEndpointRegion(const std::string &sourceEndpointRegion) {
  sourceEndpointRegion_ = sourceEndpointRegion;
  setParameter(std::string("SourceEndpointRegion"), sourceEndpointRegion);
}

std::string CreateAndStartBackupPlanRequest::getSourceEndpointInstanceID() const {
  return sourceEndpointInstanceID_;
}

void CreateAndStartBackupPlanRequest::setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID) {
  sourceEndpointInstanceID_ = sourceEndpointInstanceID;
  setParameter(std::string("SourceEndpointInstanceID"), sourceEndpointInstanceID);
}

std::string CreateAndStartBackupPlanRequest::getClientToken() const {
  return clientToken_;
}

void CreateAndStartBackupPlanRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateAndStartBackupPlanRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void CreateAndStartBackupPlanRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

std::string CreateAndStartBackupPlanRequest::getInstanceClass() const {
  return instanceClass_;
}

void CreateAndStartBackupPlanRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string CreateAndStartBackupPlanRequest::getSourceEndpointDatabaseName() const {
  return sourceEndpointDatabaseName_;
}

void CreateAndStartBackupPlanRequest::setSourceEndpointDatabaseName(const std::string &sourceEndpointDatabaseName) {
  sourceEndpointDatabaseName_ = sourceEndpointDatabaseName;
  setParameter(std::string("SourceEndpointDatabaseName"), sourceEndpointDatabaseName);
}

int CreateAndStartBackupPlanRequest::getDuplicationInfrequentAccessPeriod() const {
  return duplicationInfrequentAccessPeriod_;
}

void CreateAndStartBackupPlanRequest::setDuplicationInfrequentAccessPeriod(int duplicationInfrequentAccessPeriod) {
  duplicationInfrequentAccessPeriod_ = duplicationInfrequentAccessPeriod;
  setParameter(std::string("DuplicationInfrequentAccessPeriod"), std::to_string(duplicationInfrequentAccessPeriod));
}

std::string CreateAndStartBackupPlanRequest::getInstanceType() const {
  return instanceType_;
}

void CreateAndStartBackupPlanRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

bool CreateAndStartBackupPlanRequest::getEnableBackupLog() const {
  return enableBackupLog_;
}

void CreateAndStartBackupPlanRequest::setEnableBackupLog(bool enableBackupLog) {
  enableBackupLog_ = enableBackupLog;
  setParameter(std::string("EnableBackupLog"), enableBackupLog ? "true" : "false");
}

std::string CreateAndStartBackupPlanRequest::getCrossAliyunId() const {
  return crossAliyunId_;
}

void CreateAndStartBackupPlanRequest::setCrossAliyunId(const std::string &crossAliyunId) {
  crossAliyunId_ = crossAliyunId;
  setParameter(std::string("CrossAliyunId"), crossAliyunId);
}

std::string CreateAndStartBackupPlanRequest::getBackupObjects() const {
  return backupObjects_;
}

void CreateAndStartBackupPlanRequest::setBackupObjects(const std::string &backupObjects) {
  backupObjects_ = backupObjects;
  setParameter(std::string("BackupObjects"), backupObjects);
}

long CreateAndStartBackupPlanRequest::getBackupRateLimit() const {
  return backupRateLimit_;
}

void CreateAndStartBackupPlanRequest::setBackupRateLimit(long backupRateLimit) {
  backupRateLimit_ = backupRateLimit;
  setParameter(std::string("BackupRateLimit"), std::to_string(backupRateLimit));
}

int CreateAndStartBackupPlanRequest::getUsedTime() const {
  return usedTime_;
}

void CreateAndStartBackupPlanRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

int CreateAndStartBackupPlanRequest::getSourceEndpointPort() const {
  return sourceEndpointPort_;
}

void CreateAndStartBackupPlanRequest::setSourceEndpointPort(int sourceEndpointPort) {
  sourceEndpointPort_ = sourceEndpointPort;
  setParameter(std::string("SourceEndpointPort"), std::to_string(sourceEndpointPort));
}

std::string CreateAndStartBackupPlanRequest::getStorageRegion() const {
  return storageRegion_;
}

void CreateAndStartBackupPlanRequest::setStorageRegion(const std::string &storageRegion) {
  storageRegion_ = storageRegion;
  setParameter(std::string("StorageRegion"), storageRegion);
}

std::string CreateAndStartBackupPlanRequest::getSourceEndpointOracleSID() const {
  return sourceEndpointOracleSID_;
}

void CreateAndStartBackupPlanRequest::setSourceEndpointOracleSID(const std::string &sourceEndpointOracleSID) {
  sourceEndpointOracleSID_ = sourceEndpointOracleSID;
  setParameter(std::string("SourceEndpointOracleSID"), sourceEndpointOracleSID);
}

std::string CreateAndStartBackupPlanRequest::getBackupStrategyType() const {
  return backupStrategyType_;
}

void CreateAndStartBackupPlanRequest::setBackupStrategyType(const std::string &backupStrategyType) {
  backupStrategyType_ = backupStrategyType;
  setParameter(std::string("BackupStrategyType"), backupStrategyType);
}

std::string CreateAndStartBackupPlanRequest::getPayType() const {
  return payType_;
}

void CreateAndStartBackupPlanRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

