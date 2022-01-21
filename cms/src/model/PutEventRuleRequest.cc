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

#include <alibabacloud/cms/model/PutEventRuleRequest.h>

using AlibabaCloud::Cms::Model::PutEventRuleRequest;

PutEventRuleRequest::PutEventRuleRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutEventRule") {
  setMethod(HttpRequest::Method::Post);
}

PutEventRuleRequest::~PutEventRuleRequest() {}

std::string PutEventRuleRequest::getDescription() const {
  return description_;
}

void PutEventRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string PutEventRuleRequest::getRuleName() const {
  return ruleName_;
}

void PutEventRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

long PutEventRuleRequest::getSilenceTime() const {
  return silenceTime_;
}

void PutEventRuleRequest::setSilenceTime(long silenceTime) {
  silenceTime_ = silenceTime;
  setParameter(std::string("SilenceTime"), std::to_string(silenceTime));
}

std::string PutEventRuleRequest::getState() const {
  return state_;
}

void PutEventRuleRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string PutEventRuleRequest::getGroupId() const {
  return groupId_;
}

void PutEventRuleRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::vector<PutEventRuleRequest::EventPattern> PutEventRuleRequest::getEventPattern() const {
  return eventPattern_;
}

void PutEventRuleRequest::setEventPattern(const std::vector<PutEventRuleRequest::EventPattern> &eventPattern) {
  eventPattern_ = eventPattern;
  for(int dep1 = 0; dep1 != eventPattern.size(); dep1++) {
  auto eventPatternObj = eventPattern.at(dep1);
  std::string eventPatternObjStr = std::string("EventPattern") + "." + std::to_string(dep1 + 1);
    setParameter(eventPatternObjStr + ".KeywordFilter.Relation", eventPatternObj.keywordFilter.relation);
    setParameter(eventPatternObjStr + ".Product", eventPatternObj.product);
    setParameter(eventPatternObjStr + ".CustomFilters", eventPatternObj.customFilters);
    setParameter(eventPatternObjStr + ".SQLFilter", eventPatternObj.sQLFilter);
  }
}

std::string PutEventRuleRequest::getEventType() const {
  return eventType_;
}

void PutEventRuleRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

