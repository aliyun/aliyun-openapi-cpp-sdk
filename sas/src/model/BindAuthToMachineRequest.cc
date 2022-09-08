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

#include <alibabacloud/sas/model/BindAuthToMachineRequest.h>

using AlibabaCloud::Sas::Model::BindAuthToMachineRequest;

BindAuthToMachineRequest::BindAuthToMachineRequest()
    : RpcServiceRequest("sas", "2018-12-03", "BindAuthToMachine") {
  setMethod(HttpRequest::Method::Post);
}

BindAuthToMachineRequest::~BindAuthToMachineRequest() {}

std::string BindAuthToMachineRequest::getCriteria() const {
  return criteria_;
}

void BindAuthToMachineRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

bool BindAuthToMachineRequest::getBindAll() const {
  return bindAll_;
}

void BindAuthToMachineRequest::setBindAll(bool bindAll) {
  bindAll_ = bindAll;
  setParameter(std::string("BindAll"), bindAll ? "true" : "false");
}

std::vector<std::string> BindAuthToMachineRequest::getBind() const {
  return bind_;
}

void BindAuthToMachineRequest::setBind(const std::vector<std::string> &bind) {
  bind_ = bind;
}

std::string BindAuthToMachineRequest::getSourceIp() const {
  return sourceIp_;
}

void BindAuthToMachineRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int BindAuthToMachineRequest::getAuthVersion() const {
  return authVersion_;
}

void BindAuthToMachineRequest::setAuthVersion(int authVersion) {
  authVersion_ = authVersion;
  setParameter(std::string("AuthVersion"), std::to_string(authVersion));
}

std::string BindAuthToMachineRequest::getLogicalExp() const {
  return logicalExp_;
}

void BindAuthToMachineRequest::setLogicalExp(const std::string &logicalExp) {
  logicalExp_ = logicalExp;
  setParameter(std::string("LogicalExp"), logicalExp);
}

int BindAuthToMachineRequest::getAutoBind() const {
  return autoBind_;
}

void BindAuthToMachineRequest::setAutoBind(int autoBind) {
  autoBind_ = autoBind;
  setParameter(std::string("AutoBind"), std::to_string(autoBind));
}

std::vector<std::string> BindAuthToMachineRequest::getUnBind() const {
  return unBind_;
}

void BindAuthToMachineRequest::setUnBind(const std::vector<std::string> &unBind) {
  unBind_ = unBind;
}

