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

#include <alibabacloud/sas/model/ModifyOperateVulRequest.h>

using AlibabaCloud::Sas::Model::ModifyOperateVulRequest;

ModifyOperateVulRequest::ModifyOperateVulRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyOperateVul") {
  setMethod(HttpRequest::Method::Post);
}

ModifyOperateVulRequest::~ModifyOperateVulRequest() {}

std::string ModifyOperateVulRequest::getReason() const {
  return reason_;
}

void ModifyOperateVulRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setParameter(std::string("Reason"), reason);
}

std::string ModifyOperateVulRequest::getType() const {
  return type_;
}

void ModifyOperateVulRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ModifyOperateVulRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyOperateVulRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyOperateVulRequest::getInfo() const {
  return info_;
}

void ModifyOperateVulRequest::setInfo(const std::string &info) {
  info_ = info;
  setParameter(std::string("Info"), info);
}

std::string ModifyOperateVulRequest::getOperateType() const {
  return operateType_;
}

void ModifyOperateVulRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

