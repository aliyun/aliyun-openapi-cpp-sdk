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

#include <alibabacloud/cloud-siem/model/PostAutomateResponseConfigRequest.h>

using AlibabaCloud::Cloud_siem::Model::PostAutomateResponseConfigRequest;

PostAutomateResponseConfigRequest::PostAutomateResponseConfigRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "PostAutomateResponseConfig") {
  setMethod(HttpRequest::Method::Post);
}

PostAutomateResponseConfigRequest::~PostAutomateResponseConfigRequest() {}

std::string PostAutomateResponseConfigRequest::getActionType() const {
  return actionType_;
}

void PostAutomateResponseConfigRequest::setActionType(const std::string &actionType) {
  actionType_ = actionType;
  setBodyParameter(std::string("ActionType"), actionType);
}

long PostAutomateResponseConfigRequest::getRoleFor() const {
  return roleFor_;
}

void PostAutomateResponseConfigRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string PostAutomateResponseConfigRequest::getRuleName() const {
  return ruleName_;
}

void PostAutomateResponseConfigRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setBodyParameter(std::string("RuleName"), ruleName);
}

std::string PostAutomateResponseConfigRequest::getExecutionCondition() const {
  return executionCondition_;
}

void PostAutomateResponseConfigRequest::setExecutionCondition(const std::string &executionCondition) {
  executionCondition_ = executionCondition;
  setBodyParameter(std::string("ExecutionCondition"), executionCondition);
}

std::string PostAutomateResponseConfigRequest::getActionConfig() const {
  return actionConfig_;
}

void PostAutomateResponseConfigRequest::setActionConfig(const std::string &actionConfig) {
  actionConfig_ = actionConfig;
  setBodyParameter(std::string("ActionConfig"), actionConfig);
}

long PostAutomateResponseConfigRequest::getSubUserId() const {
  return subUserId_;
}

void PostAutomateResponseConfigRequest::setSubUserId(long subUserId) {
  subUserId_ = subUserId;
  setBodyParameter(std::string("SubUserId"), std::to_string(subUserId));
}

std::string PostAutomateResponseConfigRequest::getRegionId() const {
  return regionId_;
}

void PostAutomateResponseConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string PostAutomateResponseConfigRequest::getAutoResponseType() const {
  return autoResponseType_;
}

void PostAutomateResponseConfigRequest::setAutoResponseType(const std::string &autoResponseType) {
  autoResponseType_ = autoResponseType;
  setBodyParameter(std::string("AutoResponseType"), autoResponseType);
}

int PostAutomateResponseConfigRequest::getRoleType() const {
  return roleType_;
}

void PostAutomateResponseConfigRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

long PostAutomateResponseConfigRequest::getId() const {
  return id_;
}

void PostAutomateResponseConfigRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

