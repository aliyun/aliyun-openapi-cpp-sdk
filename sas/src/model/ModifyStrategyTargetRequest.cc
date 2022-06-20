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

#include <alibabacloud/sas/model/ModifyStrategyTargetRequest.h>

using AlibabaCloud::Sas::Model::ModifyStrategyTargetRequest;

ModifyStrategyTargetRequest::ModifyStrategyTargetRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyStrategyTarget") {
  setMethod(HttpRequest::Method::Post);
}

ModifyStrategyTargetRequest::~ModifyStrategyTargetRequest() {}

std::string ModifyStrategyTargetRequest::getType() const {
  return type_;
}

void ModifyStrategyTargetRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ModifyStrategyTargetRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyStrategyTargetRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyStrategyTargetRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void ModifyStrategyTargetRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string ModifyStrategyTargetRequest::getTarget() const {
  return target_;
}

void ModifyStrategyTargetRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

std::string ModifyStrategyTargetRequest::getConfig() const {
  return config_;
}

void ModifyStrategyTargetRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

