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

#include <alibabacloud/config/model/EvaluatePreConfigRulesRequest.h>

using AlibabaCloud::Config::Model::EvaluatePreConfigRulesRequest;

EvaluatePreConfigRulesRequest::EvaluatePreConfigRulesRequest()
    : RpcServiceRequest("config", "2020-09-07", "EvaluatePreConfigRules") {
  setMethod(HttpRequest::Method::Post);
}

EvaluatePreConfigRulesRequest::~EvaluatePreConfigRulesRequest() {}

bool EvaluatePreConfigRulesRequest::getEnableManagedRules() const {
  return enableManagedRules_;
}

void EvaluatePreConfigRulesRequest::setEnableManagedRules(bool enableManagedRules) {
  enableManagedRules_ = enableManagedRules;
  setBodyParameter(std::string("EnableManagedRules"), enableManagedRules ? "true" : "false");
}

std::string EvaluatePreConfigRulesRequest::getResourceEvaluateItems() const {
  return resourceEvaluateItems_;
}

void EvaluatePreConfigRulesRequest::setResourceEvaluateItems(const std::string &resourceEvaluateItems) {
  resourceEvaluateItems_ = resourceEvaluateItems;
  setBodyParameter(std::string("ResourceEvaluateItems"), resourceEvaluateItems);
}

std::string EvaluatePreConfigRulesRequest::getResourceTypeFormat() const {
  return resourceTypeFormat_;
}

void EvaluatePreConfigRulesRequest::setResourceTypeFormat(const std::string &resourceTypeFormat) {
  resourceTypeFormat_ = resourceTypeFormat;
  setBodyParameter(std::string("ResourceTypeFormat"), resourceTypeFormat);
}

