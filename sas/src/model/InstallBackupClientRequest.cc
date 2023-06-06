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

#include <alibabacloud/sas/model/InstallBackupClientRequest.h>

using AlibabaCloud::Sas::Model::InstallBackupClientRequest;

InstallBackupClientRequest::InstallBackupClientRequest()
    : RpcServiceRequest("sas", "2018-12-03", "InstallBackupClient") {
  setMethod(HttpRequest::Method::Post);
}

InstallBackupClientRequest::~InstallBackupClientRequest() {}

long InstallBackupClientRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void InstallBackupClientRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string InstallBackupClientRequest::getUuid() const {
  return uuid_;
}

void InstallBackupClientRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string InstallBackupClientRequest::getSourceIp() const {
  return sourceIp_;
}

void InstallBackupClientRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> InstallBackupClientRequest::getUuidList() const {
  return uuidList_;
}

void InstallBackupClientRequest::setUuidList(const std::vector<std::string> &uuidList) {
  uuidList_ = uuidList;
}

std::string InstallBackupClientRequest::getPolicyVersion() const {
  return policyVersion_;
}

void InstallBackupClientRequest::setPolicyVersion(const std::string &policyVersion) {
  policyVersion_ = policyVersion;
  setParameter(std::string("PolicyVersion"), policyVersion);
}

