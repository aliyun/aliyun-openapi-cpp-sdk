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

#include <alibabacloud/sas/model/ModifyBackupPolicyRequest.h>

using AlibabaCloud::Sas::Model::ModifyBackupPolicyRequest;

ModifyBackupPolicyRequest::ModifyBackupPolicyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBackupPolicyRequest::~ModifyBackupPolicyRequest() {}

long ModifyBackupPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyBackupPolicyRequest::getServerType() const {
  return serverType_;
}

void ModifyBackupPolicyRequest::setServerType(const std::string &serverType) {
  serverType_ = serverType;
  setParameter(std::string("ServerType"), serverType);
}

std::string ModifyBackupPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyBackupPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> ModifyBackupPolicyRequest::getUuidList() const {
  return uuidList_;
}

void ModifyBackupPolicyRequest::setUuidList(const std::vector<std::string> &uuidList) {
  uuidList_ = uuidList;
}

long ModifyBackupPolicyRequest::getId() const {
  return id_;
}

void ModifyBackupPolicyRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string ModifyBackupPolicyRequest::getPolicy() const {
  return policy_;
}

void ModifyBackupPolicyRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

std::string ModifyBackupPolicyRequest::getPolicyVersion() const {
  return policyVersion_;
}

void ModifyBackupPolicyRequest::setPolicyVersion(const std::string &policyVersion) {
  policyVersion_ = policyVersion;
  setParameter(std::string("PolicyVersion"), policyVersion);
}

std::string ModifyBackupPolicyRequest::getPolicyRegionId() const {
  return policyRegionId_;
}

void ModifyBackupPolicyRequest::setPolicyRegionId(const std::string &policyRegionId) {
  policyRegionId_ = policyRegionId;
  setParameter(std::string("PolicyRegionId"), policyRegionId);
}

std::string ModifyBackupPolicyRequest::getName() const {
  return name_;
}

void ModifyBackupPolicyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

