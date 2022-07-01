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

#include <alibabacloud/ddoscoo/model/ConfigLayer4RulePolicyRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigLayer4RulePolicyRequest;

ConfigLayer4RulePolicyRequest::ConfigLayer4RulePolicyRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ConfigLayer4RulePolicy") {
  setMethod(HttpRequest::Method::Post);
}

ConfigLayer4RulePolicyRequest::~ConfigLayer4RulePolicyRequest() {}

std::string ConfigLayer4RulePolicyRequest::getListeners() const {
  return listeners_;
}

void ConfigLayer4RulePolicyRequest::setListeners(const std::string &listeners) {
  listeners_ = listeners;
  setParameter(std::string("Listeners"), listeners);
}

std::string ConfigLayer4RulePolicyRequest::getSourceIp() const {
  return sourceIp_;
}

void ConfigLayer4RulePolicyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

