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

#include <alibabacloud/sas/model/OperateImageVulRequest.h>

using AlibabaCloud::Sas::Model::OperateImageVulRequest;

OperateImageVulRequest::OperateImageVulRequest()
    : RpcServiceRequest("sas", "2018-12-03", "OperateImageVul") {
  setMethod(HttpRequest::Method::Post);
}

OperateImageVulRequest::~OperateImageVulRequest() {}

std::string OperateImageVulRequest::getType() const {
  return type_;
}

void OperateImageVulRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string OperateImageVulRequest::getSourceIp() const {
  return sourceIp_;
}

void OperateImageVulRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string OperateImageVulRequest::getInfo() const {
  return info_;
}

void OperateImageVulRequest::setInfo(const std::string &info) {
  info_ = info;
  setParameter(std::string("Info"), info);
}

std::string OperateImageVulRequest::getOperateType() const {
  return operateType_;
}

void OperateImageVulRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

