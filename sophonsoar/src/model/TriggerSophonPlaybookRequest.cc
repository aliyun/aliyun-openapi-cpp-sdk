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

#include <alibabacloud/sophonsoar/model/TriggerSophonPlaybookRequest.h>

using AlibabaCloud::Sophonsoar::Model::TriggerSophonPlaybookRequest;

TriggerSophonPlaybookRequest::TriggerSophonPlaybookRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "TriggerSophonPlaybook") {
  setMethod(HttpRequest::Method::Post);
}

TriggerSophonPlaybookRequest::~TriggerSophonPlaybookRequest() {}

std::string TriggerSophonPlaybookRequest::getRoleFor() const {
  return roleFor_;
}

void TriggerSophonPlaybookRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string TriggerSophonPlaybookRequest::getInputParams() const {
  return inputParams_;
}

void TriggerSophonPlaybookRequest::setInputParams(const std::string &inputParams) {
  inputParams_ = inputParams;
  setParameter(std::string("InputParams"), inputParams);
}

std::string TriggerSophonPlaybookRequest::getCommandName() const {
  return commandName_;
}

void TriggerSophonPlaybookRequest::setCommandName(const std::string &commandName) {
  commandName_ = commandName;
  setParameter(std::string("CommandName"), commandName);
}

std::string TriggerSophonPlaybookRequest::getSophonTaskId() const {
  return sophonTaskId_;
}

void TriggerSophonPlaybookRequest::setSophonTaskId(const std::string &sophonTaskId) {
  sophonTaskId_ = sophonTaskId;
  setParameter(std::string("SophonTaskId"), sophonTaskId);
}

std::string TriggerSophonPlaybookRequest::getTriggerType() const {
  return triggerType_;
}

void TriggerSophonPlaybookRequest::setTriggerType(const std::string &triggerType) {
  triggerType_ = triggerType;
  setParameter(std::string("TriggerType"), triggerType);
}

std::string TriggerSophonPlaybookRequest::getUuid() const {
  return uuid_;
}

void TriggerSophonPlaybookRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string TriggerSophonPlaybookRequest::getTriggerSource() const {
  return triggerSource_;
}

void TriggerSophonPlaybookRequest::setTriggerSource(const std::string &triggerSource) {
  triggerSource_ = triggerSource;
  setParameter(std::string("TriggerSource"), triggerSource);
}

std::string TriggerSophonPlaybookRequest::getRoleType() const {
  return roleType_;
}

void TriggerSophonPlaybookRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string TriggerSophonPlaybookRequest::getLang() const {
  return lang_;
}

void TriggerSophonPlaybookRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

