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

#include <alibabacloud/config/model/RevertAggregateEvaluationResultsRequest.h>

using AlibabaCloud::Config::Model::RevertAggregateEvaluationResultsRequest;

RevertAggregateEvaluationResultsRequest::RevertAggregateEvaluationResultsRequest()
    : RpcServiceRequest("config", "2020-09-07", "RevertAggregateEvaluationResults") {
  setMethod(HttpRequest::Method::Post);
}

RevertAggregateEvaluationResultsRequest::~RevertAggregateEvaluationResultsRequest() {}

std::string RevertAggregateEvaluationResultsRequest::getConfigRuleId() const {
  return configRuleId_;
}

void RevertAggregateEvaluationResultsRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setBodyParameter(std::string("ConfigRuleId"), configRuleId);
}

std::vector<RevertAggregateEvaluationResultsRequest::Resources> RevertAggregateEvaluationResultsRequest::getResources() const {
  return resources_;
}

void RevertAggregateEvaluationResultsRequest::setResources(const std::vector<RevertAggregateEvaluationResultsRequest::Resources> &resources) {
  resources_ = resources;
  for(int dep1 = 0; dep1 != resources.size(); dep1++) {
    setBodyParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".ResourceId", resources[dep1].resourceId);
    setBodyParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".ResourceAccountId", std::to_string(resources[dep1].resourceAccountId));
    setBodyParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".Region", resources[dep1].region);
    setBodyParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".ResourceType", resources[dep1].resourceType);
  }
}

std::string RevertAggregateEvaluationResultsRequest::getAggregatorId() const {
  return aggregatorId_;
}

void RevertAggregateEvaluationResultsRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setBodyParameter(std::string("AggregatorId"), aggregatorId);
}

