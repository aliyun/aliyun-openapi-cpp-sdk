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

#include <alibabacloud/ddoscoo/model/ConfigLayer4RuleBakModeRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigLayer4RuleBakModeRequest;

ConfigLayer4RuleBakModeRequest::ConfigLayer4RuleBakModeRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ConfigLayer4RuleBakMode") {
  setMethod(HttpRequest::Method::Post);
}

ConfigLayer4RuleBakModeRequest::~ConfigLayer4RuleBakModeRequest() {}

std::string ConfigLayer4RuleBakModeRequest::getBakMode() const {
  return bakMode_;
}

void ConfigLayer4RuleBakModeRequest::setBakMode(const std::string &bakMode) {
  bakMode_ = bakMode;
  setParameter(std::string("BakMode"), bakMode);
}

std::string ConfigLayer4RuleBakModeRequest::getSourceIp() const {
  return sourceIp_;
}

void ConfigLayer4RuleBakModeRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ConfigLayer4RuleBakModeRequest::getListeners() const {
  return listeners_;
}

void ConfigLayer4RuleBakModeRequest::setListeners(const std::string &listeners) {
  listeners_ = listeners;
  setParameter(std::string("Listeners"), listeners);
}

