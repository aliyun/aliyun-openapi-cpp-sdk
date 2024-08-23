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

#include <alibabacloud/governance/model/CreateAccountFactoryBaselineRequest.h>

using AlibabaCloud::Governance::Model::CreateAccountFactoryBaselineRequest;

CreateAccountFactoryBaselineRequest::CreateAccountFactoryBaselineRequest()
    : RpcServiceRequest("governance", "2021-01-20", "CreateAccountFactoryBaseline") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccountFactoryBaselineRequest::~CreateAccountFactoryBaselineRequest() {}

std::string CreateAccountFactoryBaselineRequest::getDescription() const {
  return description_;
}

void CreateAccountFactoryBaselineRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateAccountFactoryBaselineRequest::getRegionId() const {
  return regionId_;
}

void CreateAccountFactoryBaselineRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateAccountFactoryBaselineRequest::getBaselineName() const {
  return baselineName_;
}

void CreateAccountFactoryBaselineRequest::setBaselineName(const std::string &baselineName) {
  baselineName_ = baselineName;
  setParameter(std::string("BaselineName"), baselineName);
}

std::vector<CreateAccountFactoryBaselineRequest::BaselineItems> CreateAccountFactoryBaselineRequest::getBaselineItems() const {
  return baselineItems_;
}

void CreateAccountFactoryBaselineRequest::setBaselineItems(const std::vector<CreateAccountFactoryBaselineRequest::BaselineItems> &baselineItems) {
  baselineItems_ = baselineItems;
  for(int dep1 = 0; dep1 != baselineItems.size(); dep1++) {
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Name", baselineItems[dep1].name);
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Config", baselineItems[dep1].config);
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Version", baselineItems[dep1].version);
  }
}

