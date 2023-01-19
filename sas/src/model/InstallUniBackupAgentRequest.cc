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

#include <alibabacloud/sas/model/InstallUniBackupAgentRequest.h>

using AlibabaCloud::Sas::Model::InstallUniBackupAgentRequest;

InstallUniBackupAgentRequest::InstallUniBackupAgentRequest()
    : RpcServiceRequest("sas", "2018-12-03", "InstallUniBackupAgent") {
  setMethod(HttpRequest::Method::Post);
}

InstallUniBackupAgentRequest::~InstallUniBackupAgentRequest() {}

long InstallUniBackupAgentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void InstallUniBackupAgentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string InstallUniBackupAgentRequest::getSourceIp() const {
  return sourceIp_;
}

void InstallUniBackupAgentRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long InstallUniBackupAgentRequest::getPolicyId() const {
  return policyId_;
}

void InstallUniBackupAgentRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), std::to_string(policyId));
}

