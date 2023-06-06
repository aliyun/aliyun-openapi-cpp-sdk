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

#include <alibabacloud/sas/model/ModifyLoginBaseConfigRequest.h>

using AlibabaCloud::Sas::Model::ModifyLoginBaseConfigRequest;

ModifyLoginBaseConfigRequest::ModifyLoginBaseConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyLoginBaseConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLoginBaseConfigRequest::~ModifyLoginBaseConfigRequest() {}

std::string ModifyLoginBaseConfigRequest::getConfigs() const {
  return configs_;
}

void ModifyLoginBaseConfigRequest::setConfigs(const std::string &configs) {
  configs_ = configs;
  setParameter(std::string("Configs"), configs);
}

std::string ModifyLoginBaseConfigRequest::getType() const {
  return type_;
}

void ModifyLoginBaseConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ModifyLoginBaseConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyLoginBaseConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyLoginBaseConfigRequest::getTarget() const {
  return target_;
}

void ModifyLoginBaseConfigRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

std::string ModifyLoginBaseConfigRequest::getConfig() const {
  return config_;
}

void ModifyLoginBaseConfigRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

