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

#include <alibabacloud/sas/model/DeleteBackupPolicyMachineRequest.h>

using AlibabaCloud::Sas::Model::DeleteBackupPolicyMachineRequest;

DeleteBackupPolicyMachineRequest::DeleteBackupPolicyMachineRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DeleteBackupPolicyMachine") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBackupPolicyMachineRequest::~DeleteBackupPolicyMachineRequest() {}

long DeleteBackupPolicyMachineRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteBackupPolicyMachineRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteBackupPolicyMachineRequest::getUuid() const {
  return uuid_;
}

void DeleteBackupPolicyMachineRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DeleteBackupPolicyMachineRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteBackupPolicyMachineRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DeleteBackupPolicyMachineRequest::getPolicyId() const {
  return policyId_;
}

void DeleteBackupPolicyMachineRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), std::to_string(policyId));
}

std::vector<std::string> DeleteBackupPolicyMachineRequest::getUuidList() const {
  return uuidList_;
}

void DeleteBackupPolicyMachineRequest::setUuidList(const std::vector<std::string> &uuidList) {
  uuidList_ = uuidList;
}

std::string DeleteBackupPolicyMachineRequest::getPolicyVersion() const {
  return policyVersion_;
}

void DeleteBackupPolicyMachineRequest::setPolicyVersion(const std::string &policyVersion) {
  policyVersion_ = policyVersion;
  setParameter(std::string("PolicyVersion"), policyVersion);
}

