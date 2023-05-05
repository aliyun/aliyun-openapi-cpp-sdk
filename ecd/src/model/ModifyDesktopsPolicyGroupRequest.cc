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

#include <alibabacloud/ecd/model/ModifyDesktopsPolicyGroupRequest.h>

using AlibabaCloud::Ecd::Model::ModifyDesktopsPolicyGroupRequest;

ModifyDesktopsPolicyGroupRequest::ModifyDesktopsPolicyGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyDesktopsPolicyGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDesktopsPolicyGroupRequest::~ModifyDesktopsPolicyGroupRequest() {}

bool ModifyDesktopsPolicyGroupRequest::getPreCheck() const {
  return preCheck_;
}

void ModifyDesktopsPolicyGroupRequest::setPreCheck(bool preCheck) {
  preCheck_ = preCheck;
  setParameter(std::string("PreCheck"), preCheck ? "true" : "false");
}

std::vector<std::string> ModifyDesktopsPolicyGroupRequest::getPolicyGroupIds() const {
  return policyGroupIds_;
}

void ModifyDesktopsPolicyGroupRequest::setPolicyGroupIds(const std::vector<std::string> &policyGroupIds) {
  policyGroupIds_ = policyGroupIds;
}

std::string ModifyDesktopsPolicyGroupRequest::getRegionId() const {
  return regionId_;
}

void ModifyDesktopsPolicyGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ModifyDesktopsPolicyGroupRequest::getDesktopId() const {
  return desktopId_;
}

void ModifyDesktopsPolicyGroupRequest::setDesktopId(const std::vector<std::string> &desktopId) {
  desktopId_ = desktopId;
}

std::string ModifyDesktopsPolicyGroupRequest::getPolicyGroupId() const {
  return policyGroupId_;
}

void ModifyDesktopsPolicyGroupRequest::setPolicyGroupId(const std::string &policyGroupId) {
  policyGroupId_ = policyGroupId;
  setParameter(std::string("PolicyGroupId"), policyGroupId);
}

