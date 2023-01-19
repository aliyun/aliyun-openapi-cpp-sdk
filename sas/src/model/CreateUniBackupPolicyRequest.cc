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

#include <alibabacloud/sas/model/CreateUniBackupPolicyRequest.h>

using AlibabaCloud::Sas::Model::CreateUniBackupPolicyRequest;

CreateUniBackupPolicyRequest::CreateUniBackupPolicyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateUniBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateUniBackupPolicyRequest::~CreateUniBackupPolicyRequest() {}

std::string CreateUniBackupPolicyRequest::getDatabaseType() const {
  return databaseType_;
}

void CreateUniBackupPolicyRequest::setDatabaseType(const std::string &databaseType) {
  databaseType_ = databaseType;
  setParameter(std::string("DatabaseType"), databaseType);
}

long CreateUniBackupPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateUniBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long CreateUniBackupPolicyRequest::getSpeedLimiter() const {
  return speedLimiter_;
}

void CreateUniBackupPolicyRequest::setSpeedLimiter(long speedLimiter) {
  speedLimiter_ = speedLimiter;
  setParameter(std::string("SpeedLimiter"), std::to_string(speedLimiter));
}

std::string CreateUniBackupPolicyRequest::getIncPlan() const {
  return incPlan_;
}

void CreateUniBackupPolicyRequest::setIncPlan(const std::string &incPlan) {
  incPlan_ = incPlan;
  setParameter(std::string("IncPlan"), incPlan);
}

std::string CreateUniBackupPolicyRequest::getUuid() const {
  return uuid_;
}

void CreateUniBackupPolicyRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string CreateUniBackupPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateUniBackupPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateUniBackupPolicyRequest::getAccountName() const {
  return accountName_;
}

void CreateUniBackupPolicyRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateUniBackupPolicyRequest::getDatabaseAddByUser() const {
  return databaseAddByUser_;
}

void CreateUniBackupPolicyRequest::setDatabaseAddByUser(const std::string &databaseAddByUser) {
  databaseAddByUser_ = databaseAddByUser;
  setParameter(std::string("DatabaseAddByUser"), databaseAddByUser);
}

std::string CreateUniBackupPolicyRequest::getFullPlan() const {
  return fullPlan_;
}

void CreateUniBackupPolicyRequest::setFullPlan(const std::string &fullPlan) {
  fullPlan_ = fullPlan;
  setParameter(std::string("FullPlan"), fullPlan);
}

int CreateUniBackupPolicyRequest::getRetention() const {
  return retention_;
}

void CreateUniBackupPolicyRequest::setRetention(int retention) {
  retention_ = retention;
  setParameter(std::string("Retention"), std::to_string(retention));
}

std::string CreateUniBackupPolicyRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateUniBackupPolicyRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string CreateUniBackupPolicyRequest::getInstanceId() const {
  return instanceId_;
}

void CreateUniBackupPolicyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateUniBackupPolicyRequest::getPolicyName() const {
  return policyName_;
}

void CreateUniBackupPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

std::string CreateUniBackupPolicyRequest::getUniRegionId() const {
  return uniRegionId_;
}

void CreateUniBackupPolicyRequest::setUniRegionId(const std::string &uniRegionId) {
  uniRegionId_ = uniRegionId;
  setParameter(std::string("UniRegionId"), uniRegionId);
}

