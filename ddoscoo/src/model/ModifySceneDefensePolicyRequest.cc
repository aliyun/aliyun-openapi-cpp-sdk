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

#include <alibabacloud/ddoscoo/model/ModifySceneDefensePolicyRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifySceneDefensePolicyRequest;

ModifySceneDefensePolicyRequest::ModifySceneDefensePolicyRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifySceneDefensePolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifySceneDefensePolicyRequest::~ModifySceneDefensePolicyRequest() {}

std::string ModifySceneDefensePolicyRequest::get_Template() const {
  return _template_;
}

void ModifySceneDefensePolicyRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

long ModifySceneDefensePolicyRequest::getStartTime() const {
  return startTime_;
}

void ModifySceneDefensePolicyRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ModifySceneDefensePolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifySceneDefensePolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifySceneDefensePolicyRequest::getPolicyId() const {
  return policyId_;
}

void ModifySceneDefensePolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

long ModifySceneDefensePolicyRequest::getEndTime() const {
  return endTime_;
}

void ModifySceneDefensePolicyRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ModifySceneDefensePolicyRequest::getName() const {
  return name_;
}

void ModifySceneDefensePolicyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

