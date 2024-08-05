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

#include <alibabacloud/arms/model/CreateOrUpdateNotificationPolicyRequest.h>

using AlibabaCloud::ARMS::Model::CreateOrUpdateNotificationPolicyRequest;

CreateOrUpdateNotificationPolicyRequest::CreateOrUpdateNotificationPolicyRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateOrUpdateNotificationPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateNotificationPolicyRequest::~CreateOrUpdateNotificationPolicyRequest() {}

long CreateOrUpdateNotificationPolicyRequest::getIntegrationId() const {
  return integrationId_;
}

void CreateOrUpdateNotificationPolicyRequest::setIntegrationId(long integrationId) {
  integrationId_ = integrationId;
  setBodyParameter(std::string("IntegrationId"), std::to_string(integrationId));
}

std::string CreateOrUpdateNotificationPolicyRequest::getAreaCodes() const {
  return areaCodes_;
}

void CreateOrUpdateNotificationPolicyRequest::setAreaCodes(const std::string &areaCodes) {
  areaCodes_ = areaCodes;
  setBodyParameter(std::string("AreaCodes"), areaCodes);
}

std::string CreateOrUpdateNotificationPolicyRequest::getGroupRule() const {
  return groupRule_;
}

void CreateOrUpdateNotificationPolicyRequest::setGroupRule(const std::string &groupRule) {
  groupRule_ = groupRule;
  setBodyParameter(std::string("GroupRule"), groupRule);
}

std::string CreateOrUpdateNotificationPolicyRequest::getRegionId() const {
  return regionId_;
}

void CreateOrUpdateNotificationPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool CreateOrUpdateNotificationPolicyRequest::getRepeat() const {
  return repeat_;
}

void CreateOrUpdateNotificationPolicyRequest::setRepeat(bool repeat) {
  repeat_ = repeat;
  setBodyParameter(std::string("Repeat"), repeat ? "true" : "false");
}

long CreateOrUpdateNotificationPolicyRequest::getId() const {
  return id_;
}

void CreateOrUpdateNotificationPolicyRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

std::string CreateOrUpdateNotificationPolicyRequest::getNotifyRule() const {
  return notifyRule_;
}

void CreateOrUpdateNotificationPolicyRequest::setNotifyRule(const std::string &notifyRule) {
  notifyRule_ = notifyRule;
  setBodyParameter(std::string("NotifyRule"), notifyRule);
}

std::string CreateOrUpdateNotificationPolicyRequest::getState() const {
  return state_;
}

void CreateOrUpdateNotificationPolicyRequest::setState(const std::string &state) {
  state_ = state;
  setBodyParameter(std::string("State"), state);
}

long CreateOrUpdateNotificationPolicyRequest::getRepeatInterval() const {
  return repeatInterval_;
}

void CreateOrUpdateNotificationPolicyRequest::setRepeatInterval(long repeatInterval) {
  repeatInterval_ = repeatInterval;
  setBodyParameter(std::string("RepeatInterval"), std::to_string(repeatInterval));
}

long CreateOrUpdateNotificationPolicyRequest::getEscalationPolicyId() const {
  return escalationPolicyId_;
}

void CreateOrUpdateNotificationPolicyRequest::setEscalationPolicyId(long escalationPolicyId) {
  escalationPolicyId_ = escalationPolicyId;
  setBodyParameter(std::string("EscalationPolicyId"), std::to_string(escalationPolicyId));
}

bool CreateOrUpdateNotificationPolicyRequest::getSendRecoverMessage() const {
  return sendRecoverMessage_;
}

void CreateOrUpdateNotificationPolicyRequest::setSendRecoverMessage(bool sendRecoverMessage) {
  sendRecoverMessage_ = sendRecoverMessage;
  setBodyParameter(std::string("SendRecoverMessage"), sendRecoverMessage ? "true" : "false");
}

std::string CreateOrUpdateNotificationPolicyRequest::getProxyUserId() const {
  return proxyUserId_;
}

void CreateOrUpdateNotificationPolicyRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setBodyParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string CreateOrUpdateNotificationPolicyRequest::getMatchingRules() const {
  return matchingRules_;
}

void CreateOrUpdateNotificationPolicyRequest::setMatchingRules(const std::string &matchingRules) {
  matchingRules_ = matchingRules;
  setBodyParameter(std::string("MatchingRules"), matchingRules);
}

bool CreateOrUpdateNotificationPolicyRequest::getDirectedMode() const {
  return directedMode_;
}

void CreateOrUpdateNotificationPolicyRequest::setDirectedMode(bool directedMode) {
  directedMode_ = directedMode;
  setBodyParameter(std::string("DirectedMode"), directedMode ? "true" : "false");
}

std::string CreateOrUpdateNotificationPolicyRequest::getName() const {
  return name_;
}

void CreateOrUpdateNotificationPolicyRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateOrUpdateNotificationPolicyRequest::getNotifyTemplate() const {
  return notifyTemplate_;
}

void CreateOrUpdateNotificationPolicyRequest::setNotifyTemplate(const std::string &notifyTemplate) {
  notifyTemplate_ = notifyTemplate;
  setBodyParameter(std::string("NotifyTemplate"), notifyTemplate);
}

