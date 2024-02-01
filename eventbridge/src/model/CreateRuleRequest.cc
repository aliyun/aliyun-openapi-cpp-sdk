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

#include <alibabacloud/eventbridge/model/CreateRuleRequest.h>

using AlibabaCloud::Eventbridge::Model::CreateRuleRequest;

CreateRuleRequest::CreateRuleRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "CreateRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateRuleRequest::~CreateRuleRequest() {}

std::string CreateRuleRequest::getClientToken() const {
  return clientToken_;
}

void CreateRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateRuleRequest::getDescription() const {
  return description_;
}

void CreateRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateRuleRequest::getRuleName() const {
  return ruleName_;
}

void CreateRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string CreateRuleRequest::getEventBusName() const {
  return eventBusName_;
}

void CreateRuleRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

std::string CreateRuleRequest::getTargets() const {
  return targets_;
}

void CreateRuleRequest::setTargets(const std::string &targets) {
  targets_ = targets;
  setParameter(std::string("Targets"), targets);
}

std::vector<CreateRuleRequest::EventTargets> CreateRuleRequest::getEventTargets() const {
  return eventTargets_;
}

void CreateRuleRequest::setEventTargets(const std::vector<CreateRuleRequest::EventTargets> &eventTargets) {
  eventTargets_ = eventTargets;
  for(int dep1 = 0; dep1 != eventTargets.size(); dep1++) {
    setParameter(std::string("EventTargets") + "." + std::to_string(dep1 + 1) + ".Endpoint", eventTargets[dep1].endpoint);
    setParameter(std::string("EventTargets") + "." + std::to_string(dep1 + 1) + ".PushRetryStrategy", eventTargets[dep1].pushRetryStrategy);
    for(int dep2 = 0; dep2 != eventTargets[dep1].paramList.size(); dep2++) {
      setParameter(std::string("EventTargets") + "." + std::to_string(dep1 + 1) + ".ParamList." + std::to_string(dep2 + 1) + ".Template", eventTargets[dep1].paramList[dep2]._template);
      setParameter(std::string("EventTargets") + "." + std::to_string(dep1 + 1) + ".ParamList." + std::to_string(dep2 + 1) + ".ResourceKey", eventTargets[dep1].paramList[dep2].resourceKey);
      setParameter(std::string("EventTargets") + "." + std::to_string(dep1 + 1) + ".ParamList." + std::to_string(dep2 + 1) + ".Form", eventTargets[dep1].paramList[dep2].form);
      setParameter(std::string("EventTargets") + "." + std::to_string(dep1 + 1) + ".ParamList." + std::to_string(dep2 + 1) + ".Value", eventTargets[dep1].paramList[dep2].value);
    }
    setParameter(std::string("EventTargets") + "." + std::to_string(dep1 + 1) + ".Id", eventTargets[dep1].id);
    setParameter(std::string("EventTargets") + "." + std::to_string(dep1 + 1) + ".DeadLetterQueue.Arn", eventTargets[dep1].deadLetterQueue.arn);
    setParameter(std::string("EventTargets") + "." + std::to_string(dep1 + 1) + ".Type", eventTargets[dep1].type);
    setParameter(std::string("EventTargets") + "." + std::to_string(dep1 + 1) + ".ErrorsTolerance", eventTargets[dep1].errorsTolerance);
  }
}

std::string CreateRuleRequest::getFilterPattern() const {
  return filterPattern_;
}

void CreateRuleRequest::setFilterPattern(const std::string &filterPattern) {
  filterPattern_ = filterPattern;
  setParameter(std::string("FilterPattern"), filterPattern);
}

std::string CreateRuleRequest::getStatus() const {
  return status_;
}

void CreateRuleRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

