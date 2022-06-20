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

#include <alibabacloud/sas/model/OperateVulsRequest.h>

using AlibabaCloud::Sas::Model::OperateVulsRequest;

OperateVulsRequest::OperateVulsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "OperateVuls") {
  setMethod(HttpRequest::Method::Post);
}

OperateVulsRequest::~OperateVulsRequest() {}

std::string OperateVulsRequest::getType() const {
  return type_;
}

void OperateVulsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::vector<std::string> OperateVulsRequest::getVulNames() const {
  return vulNames_;
}

void OperateVulsRequest::setVulNames(const std::vector<std::string> &vulNames) {
  vulNames_ = vulNames;
}

std::string OperateVulsRequest::getSourceIp() const {
  return sourceIp_;
}

void OperateVulsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string OperateVulsRequest::getOperateType() const {
  return operateType_;
}

void OperateVulsRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

std::vector<std::string> OperateVulsRequest::getUuids() const {
  return uuids_;
}

void OperateVulsRequest::setUuids(const std::vector<std::string> &uuids) {
  uuids_ = uuids;
}

