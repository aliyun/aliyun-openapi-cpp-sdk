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

#include <alibabacloud/governance/model/UpdateAccountFactoryBaselineRequest.h>

using AlibabaCloud::Governance::Model::UpdateAccountFactoryBaselineRequest;

UpdateAccountFactoryBaselineRequest::UpdateAccountFactoryBaselineRequest()
    : RpcServiceRequest("governance", "2021-01-20", "UpdateAccountFactoryBaseline") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAccountFactoryBaselineRequest::~UpdateAccountFactoryBaselineRequest() {}

std::string UpdateAccountFactoryBaselineRequest::getDescription() const {
  return description_;
}

void UpdateAccountFactoryBaselineRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateAccountFactoryBaselineRequest::getRegionId() const {
  return regionId_;
}

void UpdateAccountFactoryBaselineRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateAccountFactoryBaselineRequest::getBaselineName() const {
  return baselineName_;
}

void UpdateAccountFactoryBaselineRequest::setBaselineName(const std::string &baselineName) {
  baselineName_ = baselineName;
  setParameter(std::string("BaselineName"), baselineName);
}

std::string UpdateAccountFactoryBaselineRequest::getBaselineId() const {
  return baselineId_;
}

void UpdateAccountFactoryBaselineRequest::setBaselineId(const std::string &baselineId) {
  baselineId_ = baselineId;
  setParameter(std::string("BaselineId"), baselineId);
}

std::vector<UpdateAccountFactoryBaselineRequest::BaselineItems> UpdateAccountFactoryBaselineRequest::getBaselineItems() const {
  return baselineItems_;
}

void UpdateAccountFactoryBaselineRequest::setBaselineItems(const std::vector<UpdateAccountFactoryBaselineRequest::BaselineItems> &baselineItems) {
  baselineItems_ = baselineItems;
  for(int dep1 = 0; dep1 != baselineItems.size(); dep1++) {
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Name", baselineItems[dep1].name);
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Config", baselineItems[dep1].config);
    setParameter(std::string("BaselineItems") + "." + std::to_string(dep1 + 1) + ".Version", baselineItems[dep1].version);
  }
}

