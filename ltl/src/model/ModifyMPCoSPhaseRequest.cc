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

#include <alibabacloud/ltl/model/ModifyMPCoSPhaseRequest.h>

using AlibabaCloud::Ltl::Model::ModifyMPCoSPhaseRequest;

ModifyMPCoSPhaseRequest::ModifyMPCoSPhaseRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "ModifyMPCoSPhase") {
  setMethod(HttpRequest::Method::Post);
}

ModifyMPCoSPhaseRequest::~ModifyMPCoSPhaseRequest() {}

std::string ModifyMPCoSPhaseRequest::getName() const {
  return name_;
}

void ModifyMPCoSPhaseRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ModifyMPCoSPhaseRequest::getPhaseId() const {
  return phaseId_;
}

void ModifyMPCoSPhaseRequest::setPhaseId(const std::string &phaseId) {
  phaseId_ = phaseId;
  setParameter(std::string("PhaseId"), phaseId);
}

std::string ModifyMPCoSPhaseRequest::getApiVersion() const {
  return apiVersion_;
}

void ModifyMPCoSPhaseRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string ModifyMPCoSPhaseRequest::getRemark() const {
  return remark_;
}

void ModifyMPCoSPhaseRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ModifyMPCoSPhaseRequest::getBizChainId() const {
  return bizChainId_;
}

void ModifyMPCoSPhaseRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

