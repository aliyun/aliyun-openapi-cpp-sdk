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

#include <alibabacloud/ltl/model/ModifyMPCoSPhaseGroupRequest.h>

using AlibabaCloud::Ltl::Model::ModifyMPCoSPhaseGroupRequest;

ModifyMPCoSPhaseGroupRequest::ModifyMPCoSPhaseGroupRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ModifyMPCoSPhaseGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyMPCoSPhaseGroupRequest::~ModifyMPCoSPhaseGroupRequest() {}

std::string ModifyMPCoSPhaseGroupRequest::getName() const {
  return name_;
}

void ModifyMPCoSPhaseGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ModifyMPCoSPhaseGroupRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void ModifyMPCoSPhaseGroupRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::string ModifyMPCoSPhaseGroupRequest::getApiVersion() const {
  return apiVersion_;
}

void ModifyMPCoSPhaseGroupRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string ModifyMPCoSPhaseGroupRequest::getRemark() const {
  return remark_;
}

void ModifyMPCoSPhaseGroupRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ModifyMPCoSPhaseGroupRequest::getBizChainId() const {
  return bizChainId_;
}

void ModifyMPCoSPhaseGroupRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

