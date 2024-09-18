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

#include <alibabacloud/quickbi-public/model/ModifyCopilotEmbedConfigRequest.h>

using AlibabaCloud::Quickbi_public::Model::ModifyCopilotEmbedConfigRequest;

ModifyCopilotEmbedConfigRequest::ModifyCopilotEmbedConfigRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ModifyCopilotEmbedConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCopilotEmbedConfigRequest::~ModifyCopilotEmbedConfigRequest() {}

std::string ModifyCopilotEmbedConfigRequest::getCopilotId() const {
  return copilotId_;
}

void ModifyCopilotEmbedConfigRequest::setCopilotId(const std::string &copilotId) {
  copilotId_ = copilotId;
  setParameter(std::string("CopilotId"), copilotId);
}

std::string ModifyCopilotEmbedConfigRequest::getAccessPoint() const {
  return accessPoint_;
}

void ModifyCopilotEmbedConfigRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string ModifyCopilotEmbedConfigRequest::getDataRange() const {
  return dataRange_;
}

void ModifyCopilotEmbedConfigRequest::setDataRange(const std::string &dataRange) {
  dataRange_ = dataRange;
  setParameter(std::string("DataRange"), dataRange);
}

std::string ModifyCopilotEmbedConfigRequest::getModuleName() const {
  return moduleName_;
}

void ModifyCopilotEmbedConfigRequest::setModuleName(const std::string &moduleName) {
  moduleName_ = moduleName;
  setParameter(std::string("ModuleName"), moduleName);
}

std::string ModifyCopilotEmbedConfigRequest::getSignType() const {
  return signType_;
}

void ModifyCopilotEmbedConfigRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string ModifyCopilotEmbedConfigRequest::getAgentName() const {
  return agentName_;
}

void ModifyCopilotEmbedConfigRequest::setAgentName(const std::string &agentName) {
  agentName_ = agentName;
  setParameter(std::string("AgentName"), agentName);
}

