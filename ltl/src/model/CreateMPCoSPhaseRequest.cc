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

#include <alibabacloud/ltl/model/CreateMPCoSPhaseRequest.h>

using AlibabaCloud::Ltl::Model::CreateMPCoSPhaseRequest;

CreateMPCoSPhaseRequest::CreateMPCoSPhaseRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "CreateMPCoSPhase") {
  setMethod(HttpRequest::Method::Post);
}

CreateMPCoSPhaseRequest::~CreateMPCoSPhaseRequest() {}

std::string CreateMPCoSPhaseRequest::getName() const {
  return name_;
}

void CreateMPCoSPhaseRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateMPCoSPhaseRequest::getPhaseGroupId() const {
  return phaseGroupId_;
}

void CreateMPCoSPhaseRequest::setPhaseGroupId(const std::string &phaseGroupId) {
  phaseGroupId_ = phaseGroupId;
  setParameter(std::string("PhaseGroupId"), phaseGroupId);
}

std::string CreateMPCoSPhaseRequest::getApiVersion() const {
  return apiVersion_;
}

void CreateMPCoSPhaseRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string CreateMPCoSPhaseRequest::getRemark() const {
  return remark_;
}

void CreateMPCoSPhaseRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string CreateMPCoSPhaseRequest::getBizChainId() const {
  return bizChainId_;
}

void CreateMPCoSPhaseRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

