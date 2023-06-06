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

#include <alibabacloud/sas/model/ModifyClientConfSetupRequest.h>

using AlibabaCloud::Sas::Model::ModifyClientConfSetupRequest;

ModifyClientConfSetupRequest::ModifyClientConfSetupRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyClientConfSetup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyClientConfSetupRequest::~ModifyClientConfSetupRequest() {}

std::string ModifyClientConfSetupRequest::getStrategyConfig() const {
  return strategyConfig_;
}

void ModifyClientConfSetupRequest::setStrategyConfig(const std::string &strategyConfig) {
  strategyConfig_ = strategyConfig;
  setParameter(std::string("StrategyConfig"), strategyConfig);
}

std::string ModifyClientConfSetupRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyClientConfSetupRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyClientConfSetupRequest::getStrategyTag() const {
  return strategyTag_;
}

void ModifyClientConfSetupRequest::setStrategyTag(const std::string &strategyTag) {
  strategyTag_ = strategyTag;
  setParameter(std::string("StrategyTag"), strategyTag);
}

std::string ModifyClientConfSetupRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void ModifyClientConfSetupRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string ModifyClientConfSetupRequest::getStrategyTagValue() const {
  return strategyTagValue_;
}

void ModifyClientConfSetupRequest::setStrategyTagValue(const std::string &strategyTagValue) {
  strategyTagValue_ = strategyTagValue;
  setParameter(std::string("StrategyTagValue"), strategyTagValue);
}

