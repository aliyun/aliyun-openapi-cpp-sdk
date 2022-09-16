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

#include <alibabacloud/ecd/model/ModifyOperateVulRequest.h>

using AlibabaCloud::Ecd::Model::ModifyOperateVulRequest;

ModifyOperateVulRequest::ModifyOperateVulRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyOperateVul") {
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

std::vector<ModifyOperateVulRequest::VulInfo> ModifyOperateVulRequest::getVulInfo() const {
  return vulInfo_;
}

void ModifyOperateVulRequest::setVulInfo(const std::vector<ModifyOperateVulRequest::VulInfo> &vulInfo) {
  vulInfo_ = vulInfo;
  for(int dep1 = 0; dep1 != vulInfo.size(); dep1++) {
  auto vulInfoObj = vulInfo.at(dep1);
  std::string vulInfoObjStr = std::string("VulInfo") + "." + std::to_string(dep1 + 1);
    setParameter(vulInfoObjStr + ".Name", vulInfoObj.name);
    setParameter(vulInfoObjStr + ".DesktopId", vulInfoObj.desktopId);
    setParameter(vulInfoObjStr + ".Tag", vulInfoObj.tag);
  }
}

std::string ModifyOperateVulRequest::getRegionId() const {
  return regionId_;
}

void ModifyOperateVulRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyOperateVulRequest::getOperateType() const {
  return operateType_;
}

void ModifyOperateVulRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

