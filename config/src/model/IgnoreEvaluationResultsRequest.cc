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

#include <alibabacloud/config/model/IgnoreEvaluationResultsRequest.h>

using AlibabaCloud::Config::Model::IgnoreEvaluationResultsRequest;

IgnoreEvaluationResultsRequest::IgnoreEvaluationResultsRequest()
    : RpcServiceRequest("config", "2020-09-07", "IgnoreEvaluationResults") {
  setMethod(HttpRequest::Method::Post);
}

IgnoreEvaluationResultsRequest::~IgnoreEvaluationResultsRequest() {}

std::string IgnoreEvaluationResultsRequest::getConfigRuleId() const {
  return configRuleId_;
}

void IgnoreEvaluationResultsRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setBodyParameter(std::string("ConfigRuleId"), configRuleId);
}

std::string IgnoreEvaluationResultsRequest::getReason() const {
  return reason_;
}

void IgnoreEvaluationResultsRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setBodyParameter(std::string("Reason"), reason);
}

std::string IgnoreEvaluationResultsRequest::getIgnoreDate() const {
  return ignoreDate_;
}

void IgnoreEvaluationResultsRequest::setIgnoreDate(const std::string &ignoreDate) {
  ignoreDate_ = ignoreDate;
  setBodyParameter(std::string("IgnoreDate"), ignoreDate);
}

std::vector<IgnoreEvaluationResultsRequest::Resources> IgnoreEvaluationResultsRequest::getResources() const {
  return resources_;
}

void IgnoreEvaluationResultsRequest::setResources(const std::vector<IgnoreEvaluationResultsRequest::Resources> &resources) {
  resources_ = resources;
  for(int dep1 = 0; dep1 != resources.size(); dep1++) {
    setBodyParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".ResourceId", resources[dep1].resourceId);
    setBodyParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".ResourceAccountId", std::to_string(resources[dep1].resourceAccountId));
    setBodyParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".Region", resources[dep1].region);
    setBodyParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".ResourceType", resources[dep1].resourceType);
  }
}

