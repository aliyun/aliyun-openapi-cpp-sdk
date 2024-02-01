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

#include <alibabacloud/eventbridge/model/UpdateRuleRequest.h>

using AlibabaCloud::Eventbridge::Model::UpdateRuleRequest;

UpdateRuleRequest::UpdateRuleRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "UpdateRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRuleRequest::~UpdateRuleRequest() {}

std::string UpdateRuleRequest::getClientToken() const {
  return clientToken_;
}

void UpdateRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateRuleRequest::getDescription() const {
  return description_;
}

void UpdateRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateRuleRequest::getRuleName() const {
  return ruleName_;
}

void UpdateRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string UpdateRuleRequest::getEventBusName() const {
  return eventBusName_;
}

void UpdateRuleRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

std::string UpdateRuleRequest::getFilterPattern() const {
  return filterPattern_;
}

void UpdateRuleRequest::setFilterPattern(const std::string &filterPattern) {
  filterPattern_ = filterPattern;
  setParameter(std::string("FilterPattern"), filterPattern);
}

std::string UpdateRuleRequest::getStatus() const {
  return status_;
}

void UpdateRuleRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

