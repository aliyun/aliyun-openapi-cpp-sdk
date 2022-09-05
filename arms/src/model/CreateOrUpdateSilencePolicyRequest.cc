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

#include <alibabacloud/arms/model/CreateOrUpdateSilencePolicyRequest.h>

using AlibabaCloud::ARMS::Model::CreateOrUpdateSilencePolicyRequest;

CreateOrUpdateSilencePolicyRequest::CreateOrUpdateSilencePolicyRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateOrUpdateSilencePolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateSilencePolicyRequest::~CreateOrUpdateSilencePolicyRequest() {}

std::string CreateOrUpdateSilencePolicyRequest::getRegionId() const {
  return regionId_;
}

void CreateOrUpdateSilencePolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateOrUpdateSilencePolicyRequest::getName() const {
  return name_;
}

void CreateOrUpdateSilencePolicyRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

long CreateOrUpdateSilencePolicyRequest::getId() const {
  return id_;
}

void CreateOrUpdateSilencePolicyRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

std::string CreateOrUpdateSilencePolicyRequest::getMatchingRules() const {
  return matchingRules_;
}

void CreateOrUpdateSilencePolicyRequest::setMatchingRules(const std::string &matchingRules) {
  matchingRules_ = matchingRules;
  setBodyParameter(std::string("MatchingRules"), matchingRules);
}

