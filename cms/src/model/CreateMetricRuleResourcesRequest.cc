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

#include <alibabacloud/cms/model/CreateMetricRuleResourcesRequest.h>

using AlibabaCloud::Cms::Model::CreateMetricRuleResourcesRequest;

CreateMetricRuleResourcesRequest::CreateMetricRuleResourcesRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateMetricRuleResources") {
  setMethod(HttpRequest::Method::Post);
}

CreateMetricRuleResourcesRequest::~CreateMetricRuleResourcesRequest() {}

std::string CreateMetricRuleResourcesRequest::getResources() const {
  return resources_;
}

void CreateMetricRuleResourcesRequest::setResources(const std::string &resources) {
  resources_ = resources;
  setParameter(std::string("Resources"), resources);
}

std::string CreateMetricRuleResourcesRequest::getRuleId() const {
  return ruleId_;
}

void CreateMetricRuleResourcesRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

std::string CreateMetricRuleResourcesRequest::getOverwrite() const {
  return overwrite_;
}

void CreateMetricRuleResourcesRequest::setOverwrite(const std::string &overwrite) {
  overwrite_ = overwrite;
  setParameter(std::string("Overwrite"), overwrite);
}

