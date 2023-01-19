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

#include <alibabacloud/sas/model/ModifyUniBackupPolicyRequest.h>

using AlibabaCloud::Sas::Model::ModifyUniBackupPolicyRequest;

ModifyUniBackupPolicyRequest::ModifyUniBackupPolicyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyUniBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyUniBackupPolicyRequest::~ModifyUniBackupPolicyRequest() {}

long ModifyUniBackupPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyUniBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyUniBackupPolicyRequest::getPolicyStatus() const {
  return policyStatus_;
}

void ModifyUniBackupPolicyRequest::setPolicyStatus(const std::string &policyStatus) {
  policyStatus_ = policyStatus;
  setParameter(std::string("PolicyStatus"), policyStatus);
}

long ModifyUniBackupPolicyRequest::getSpeedLimiter() const {
  return speedLimiter_;
}

void ModifyUniBackupPolicyRequest::setSpeedLimiter(long speedLimiter) {
  speedLimiter_ = speedLimiter;
  setParameter(std::string("SpeedLimiter"), std::to_string(speedLimiter));
}

std::string ModifyUniBackupPolicyRequest::getIncPlan() const {
  return incPlan_;
}

void ModifyUniBackupPolicyRequest::setIncPlan(const std::string &incPlan) {
  incPlan_ = incPlan;
  setParameter(std::string("IncPlan"), incPlan);
}

std::string ModifyUniBackupPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyUniBackupPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long ModifyUniBackupPolicyRequest::getPolicyId() const {
  return policyId_;
}

void ModifyUniBackupPolicyRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), std::to_string(policyId));
}

std::string ModifyUniBackupPolicyRequest::getAccountName() const {
  return accountName_;
}

void ModifyUniBackupPolicyRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string ModifyUniBackupPolicyRequest::getFullPlan() const {
  return fullPlan_;
}

void ModifyUniBackupPolicyRequest::setFullPlan(const std::string &fullPlan) {
  fullPlan_ = fullPlan;
  setParameter(std::string("FullPlan"), fullPlan);
}

int ModifyUniBackupPolicyRequest::getRetention() const {
  return retention_;
}

void ModifyUniBackupPolicyRequest::setRetention(int retention) {
  retention_ = retention;
  setParameter(std::string("Retention"), std::to_string(retention));
}

std::string ModifyUniBackupPolicyRequest::getAccountPassword() const {
  return accountPassword_;
}

void ModifyUniBackupPolicyRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string ModifyUniBackupPolicyRequest::getPolicyName() const {
  return policyName_;
}

void ModifyUniBackupPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

