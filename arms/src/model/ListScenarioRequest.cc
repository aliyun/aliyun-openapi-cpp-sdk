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

#include <alibabacloud/arms/model/ListScenarioRequest.h>

using AlibabaCloud::ARMS::Model::ListScenarioRequest;

ListScenarioRequest::ListScenarioRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListScenario") {
  setMethod(HttpRequest::Method::Post);
}

ListScenarioRequest::~ListScenarioRequest() {}

std::string ListScenarioRequest::getRegionId() const {
  return regionId_;
}

void ListScenarioRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListScenarioRequest::getScenario() const {
  return scenario_;
}

void ListScenarioRequest::setScenario(const std::string &scenario) {
  scenario_ = scenario;
  setParameter(std::string("Scenario"), scenario);
}

std::string ListScenarioRequest::getAppId() const {
  return appId_;
}

void ListScenarioRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ListScenarioRequest::getName() const {
  return name_;
}

void ListScenarioRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListScenarioRequest::getSign() const {
  return sign_;
}

void ListScenarioRequest::setSign(const std::string &sign) {
  sign_ = sign;
  setParameter(std::string("Sign"), sign);
}

