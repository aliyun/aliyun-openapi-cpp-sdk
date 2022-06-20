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

#include <alibabacloud/sas/model/CreateVulAutoRepairConfigRequest.h>

using AlibabaCloud::Sas::Model::CreateVulAutoRepairConfigRequest;

CreateVulAutoRepairConfigRequest::CreateVulAutoRepairConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateVulAutoRepairConfig") {
  setMethod(HttpRequest::Method::Post);
}

CreateVulAutoRepairConfigRequest::~CreateVulAutoRepairConfigRequest() {}

std::string CreateVulAutoRepairConfigRequest::getReason() const {
  return reason_;
}

void CreateVulAutoRepairConfigRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setParameter(std::string("Reason"), reason);
}

std::string CreateVulAutoRepairConfigRequest::getType() const {
  return type_;
}

void CreateVulAutoRepairConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateVulAutoRepairConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateVulAutoRepairConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<CreateVulAutoRepairConfigRequest::VulAutoRepairConfigList> CreateVulAutoRepairConfigRequest::getVulAutoRepairConfigList() const {
  return vulAutoRepairConfigList_;
}

void CreateVulAutoRepairConfigRequest::setVulAutoRepairConfigList(const std::vector<CreateVulAutoRepairConfigRequest::VulAutoRepairConfigList> &vulAutoRepairConfigList) {
  vulAutoRepairConfigList_ = vulAutoRepairConfigList;
  for(int dep1 = 0; dep1 != vulAutoRepairConfigList.size(); dep1++) {
  auto vulAutoRepairConfigListObj = vulAutoRepairConfigList.at(dep1);
  std::string vulAutoRepairConfigListObjStr = std::string("VulAutoRepairConfigList") + "." + std::to_string(dep1 + 1);
    setParameter(vulAutoRepairConfigListObjStr + ".AliasName", vulAutoRepairConfigListObj.aliasName);
    setParameter(vulAutoRepairConfigListObjStr + ".Name", vulAutoRepairConfigListObj.name);
  }
}

