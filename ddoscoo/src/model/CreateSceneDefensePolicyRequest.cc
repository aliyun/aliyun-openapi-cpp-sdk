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

#include <alibabacloud/ddoscoo/model/CreateSceneDefensePolicyRequest.h>

using AlibabaCloud::Ddoscoo::Model::CreateSceneDefensePolicyRequest;

CreateSceneDefensePolicyRequest::CreateSceneDefensePolicyRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "CreateSceneDefensePolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateSceneDefensePolicyRequest::~CreateSceneDefensePolicyRequest() {}

std::string CreateSceneDefensePolicyRequest::get_Template() const {
  return _template_;
}

void CreateSceneDefensePolicyRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

long CreateSceneDefensePolicyRequest::getEndTime() const {
  return endTime_;
}

void CreateSceneDefensePolicyRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long CreateSceneDefensePolicyRequest::getStartTime() const {
  return startTime_;
}

void CreateSceneDefensePolicyRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string CreateSceneDefensePolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateSceneDefensePolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateSceneDefensePolicyRequest::getName() const {
  return name_;
}

void CreateSceneDefensePolicyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

