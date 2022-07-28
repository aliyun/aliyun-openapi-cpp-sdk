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

#include <alibabacloud/dbs/model/CreateBackupPlanRequest.h>

using AlibabaCloud::Dbs::Model::CreateBackupPlanRequest;

CreateBackupPlanRequest::CreateBackupPlanRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "CreateBackupPlan") {
  setMethod(HttpRequest::Method::Post);
}

CreateBackupPlanRequest::~CreateBackupPlanRequest() {}

std::string CreateBackupPlanRequest::getDatabaseType() const {
  return databaseType_;
}

void CreateBackupPlanRequest::setDatabaseType(const std::string &databaseType) {
  databaseType_ = databaseType;
  setParameter(std::string("DatabaseType"), databaseType);
}

std::string CreateBackupPlanRequest::getClientToken() const {
  return clientToken_;
}

void CreateBackupPlanRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateBackupPlanRequest::getInstanceClass() const {
  return instanceClass_;
}

void CreateBackupPlanRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string CreateBackupPlanRequest::getStorageType() const {
  return storageType_;
}

void CreateBackupPlanRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string CreateBackupPlanRequest::getDatabaseRegion() const {
  return databaseRegion_;
}

void CreateBackupPlanRequest::setDatabaseRegion(const std::string &databaseRegion) {
  databaseRegion_ = databaseRegion;
  setParameter(std::string("DatabaseRegion"), databaseRegion);
}

std::string CreateBackupPlanRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateBackupPlanRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateBackupPlanRequest::getInstanceType() const {
  return instanceType_;
}

void CreateBackupPlanRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateBackupPlanRequest::getPeriod() const {
  return period_;
}

void CreateBackupPlanRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateBackupPlanRequest::getFromApp() const {
  return fromApp_;
}

void CreateBackupPlanRequest::setFromApp(const std::string &fromApp) {
  fromApp_ = fromApp;
  setParameter(std::string("FromApp"), fromApp);
}

std::string CreateBackupPlanRequest::getOwnerId() const {
  return ownerId_;
}

void CreateBackupPlanRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

int CreateBackupPlanRequest::getUsedTime() const {
  return usedTime_;
}

void CreateBackupPlanRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

std::string CreateBackupPlanRequest::getBackupMethod() const {
  return backupMethod_;
}

void CreateBackupPlanRequest::setBackupMethod(const std::string &backupMethod) {
  backupMethod_ = backupMethod;
  setParameter(std::string("BackupMethod"), backupMethod);
}

std::string CreateBackupPlanRequest::getStorageRegion() const {
  return storageRegion_;
}

void CreateBackupPlanRequest::setStorageRegion(const std::string &storageRegion) {
  storageRegion_ = storageRegion;
  setParameter(std::string("StorageRegion"), storageRegion);
}

std::string CreateBackupPlanRequest::getRegion() const {
  return region_;
}

void CreateBackupPlanRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string CreateBackupPlanRequest::getPayType() const {
  return payType_;
}

void CreateBackupPlanRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

