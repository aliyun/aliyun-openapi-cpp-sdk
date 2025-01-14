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

#include <alibabacloud/csas/model/CreateApprovalProcessRequest.h>

using AlibabaCloud::Csas::Model::CreateApprovalProcessRequest;

CreateApprovalProcessRequest::CreateApprovalProcessRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreateApprovalProcess") {
  setMethod(HttpRequest::Method::Post);
}

CreateApprovalProcessRequest::~CreateApprovalProcessRequest() {}

std::vector<CreateApprovalProcessRequest::std::vector<std::string>> CreateApprovalProcessRequest::getProcessNodes() const {
  return processNodes_;
}

void CreateApprovalProcessRequest::setProcessNodes(const std::vector<CreateApprovalProcessRequest::std::vector<std::string>> &processNodes) {
  processNodes_ = processNodes;
  for(int dep1 = 0; dep1 != processNodes.size(); dep1++) {
    for(int dep2 = 0; dep2 != processNodes[dep1].size(); dep2++) {
      setBodyParameter(std::string("ProcessNodes") + "." + std::to_string(dep1 + 1) + "." + std::to_string(dep2 + 1), processNodes[dep1][dep2]);
    }
  }
}

CreateApprovalProcessRequest::MatchSchemas CreateApprovalProcessRequest::getMatchSchemas() const {
  return matchSchemas_;
}

void CreateApprovalProcessRequest::setMatchSchemas(const CreateApprovalProcessRequest::MatchSchemas &matchSchemas) {
  matchSchemas_ = matchSchemas;
  setBodyParameter(std::string("MatchSchemas") + ".DomainBlacklistSchemaId", matchSchemas.domainBlacklistSchemaId);
  setBodyParameter(std::string("MatchSchemas") + ".SoftwareBlockSchemaId", matchSchemas.softwareBlockSchemaId);
  setBodyParameter(std::string("MatchSchemas") + ".PeripheralBlockSchemaId", matchSchemas.peripheralBlockSchemaId);
  setBodyParameter(std::string("MatchSchemas") + ".DeviceRegistrationSchemaId", matchSchemas.deviceRegistrationSchemaId);
  setBodyParameter(std::string("MatchSchemas") + ".DlpSendSchemaId", matchSchemas.dlpSendSchemaId);
  setBodyParameter(std::string("MatchSchemas") + ".DomainWhitelistSchemaId", matchSchemas.domainWhitelistSchemaId);
  setBodyParameter(std::string("MatchSchemas") + ".AppUninstallSchemaId", matchSchemas.appUninstallSchemaId);
}

std::string CreateApprovalProcessRequest::getProcessName() const {
  return processName_;
}

void CreateApprovalProcessRequest::setProcessName(const std::string &processName) {
  processName_ = processName;
  setBodyParameter(std::string("ProcessName"), processName);
}

std::string CreateApprovalProcessRequest::getDescription() const {
  return description_;
}

void CreateApprovalProcessRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateApprovalProcessRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateApprovalProcessRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

