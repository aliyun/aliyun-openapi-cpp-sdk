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

#include <alibabacloud/sas/model/ModifyVulTargetRequest.h>

using AlibabaCloud::Sas::Model::ModifyVulTargetRequest;

ModifyVulTargetRequest::ModifyVulTargetRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyVulTarget") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVulTargetRequest::~ModifyVulTargetRequest() {}

std::string ModifyVulTargetRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyVulTargetRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyVulTargetRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void ModifyVulTargetRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string ModifyVulTargetRequest::getTarget() const {
  return target_;
}

void ModifyVulTargetRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

std::string ModifyVulTargetRequest::getConfig() const {
  return config_;
}

void ModifyVulTargetRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

