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

#include <alibabacloud/sas/model/ModifyVulTargetConfigRequest.h>

using AlibabaCloud::Sas::Model::ModifyVulTargetConfigRequest;

ModifyVulTargetConfigRequest::ModifyVulTargetConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyVulTargetConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVulTargetConfigRequest::~ModifyVulTargetConfigRequest() {}

std::string ModifyVulTargetConfigRequest::getType() const {
  return type_;
}

void ModifyVulTargetConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ModifyVulTargetConfigRequest::getUuid() const {
  return uuid_;
}

void ModifyVulTargetConfigRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string ModifyVulTargetConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyVulTargetConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyVulTargetConfigRequest::getConfig() const {
  return config_;
}

void ModifyVulTargetConfigRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

