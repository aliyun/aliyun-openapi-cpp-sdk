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

#include <alibabacloud/ecd/model/OperateVulsRequest.h>

using AlibabaCloud::Ecd::Model::OperateVulsRequest;

OperateVulsRequest::OperateVulsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "OperateVuls") {
  setMethod(HttpRequest::Method::Post);
}

OperateVulsRequest::~OperateVulsRequest() {}

std::string OperateVulsRequest::getReason() const {
  return reason_;
}

void OperateVulsRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setParameter(std::string("Reason"), reason);
}

int OperateVulsRequest::getPrecondition() const {
  return precondition_;
}

void OperateVulsRequest::setPrecondition(int precondition) {
  precondition_ = precondition;
  setParameter(std::string("Precondition"), std::to_string(precondition));
}

std::string OperateVulsRequest::getType() const {
  return type_;
}

void OperateVulsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::vector<std::string> OperateVulsRequest::getVulName() const {
  return vulName_;
}

void OperateVulsRequest::setVulName(const std::vector<std::string> &vulName) {
  vulName_ = vulName;
}

std::string OperateVulsRequest::getRegionId() const {
  return regionId_;
}

void OperateVulsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string OperateVulsRequest::getOperateType() const {
  return operateType_;
}

void OperateVulsRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

std::vector<std::string> OperateVulsRequest::getDesktopId() const {
  return desktopId_;
}

void OperateVulsRequest::setDesktopId(const std::vector<std::string> &desktopId) {
  desktopId_ = desktopId;
}

