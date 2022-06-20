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

#include <alibabacloud/sas/model/DeleteBackupPolicyRequest.h>

using AlibabaCloud::Sas::Model::DeleteBackupPolicyRequest;

DeleteBackupPolicyRequest::DeleteBackupPolicyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DeleteBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBackupPolicyRequest::~DeleteBackupPolicyRequest() {}

long DeleteBackupPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteBackupPolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteBackupPolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DeleteBackupPolicyRequest::getId() const {
  return id_;
}

void DeleteBackupPolicyRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string DeleteBackupPolicyRequest::getPolicyVersion() const {
  return policyVersion_;
}

void DeleteBackupPolicyRequest::setPolicyVersion(const std::string &policyVersion) {
  policyVersion_ = policyVersion;
  setParameter(std::string("PolicyVersion"), policyVersion);
}

