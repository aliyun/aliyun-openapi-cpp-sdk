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

#include <alibabacloud/cams/model/UpdateConversationalAutomationRequest.h>

using AlibabaCloud::Cams::Model::UpdateConversationalAutomationRequest;

UpdateConversationalAutomationRequest::UpdateConversationalAutomationRequest()
    : RpcServiceRequest("cams", "2020-06-06", "UpdateConversationalAutomation") {
  setMethod(HttpRequest::Method::Post);
}

UpdateConversationalAutomationRequest::~UpdateConversationalAutomationRequest() {}

long UpdateConversationalAutomationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateConversationalAutomationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateConversationalAutomationRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void UpdateConversationalAutomationRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

bool UpdateConversationalAutomationRequest::getEnableWelcomeMessage() const {
  return enableWelcomeMessage_;
}

void UpdateConversationalAutomationRequest::setEnableWelcomeMessage(bool enableWelcomeMessage) {
  enableWelcomeMessage_ = enableWelcomeMessage;
  setParameter(std::string("EnableWelcomeMessage"), enableWelcomeMessage ? "true" : "false");
}

std::string UpdateConversationalAutomationRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void UpdateConversationalAutomationRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string UpdateConversationalAutomationRequest::getExtendFunction() const {
  return extendFunction_;
}

void UpdateConversationalAutomationRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string UpdateConversationalAutomationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateConversationalAutomationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateConversationalAutomationRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void UpdateConversationalAutomationRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string UpdateConversationalAutomationRequest::getRouteName() const {
  return routeName_;
}

void UpdateConversationalAutomationRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::vector<UpdateConversationalAutomationRequest::Commands> UpdateConversationalAutomationRequest::getCommands() const {
  return commands_;
}

void UpdateConversationalAutomationRequest::setCommands(const std::vector<UpdateConversationalAutomationRequest::Commands> &commands) {
  commands_ = commands;
  for(int dep1 = 0; dep1 != commands.size(); dep1++) {
    setParameter(std::string("Commands") + "." + std::to_string(dep1 + 1) + ".CommandDescription", commands[dep1].commandDescription);
    setParameter(std::string("Commands") + "." + std::to_string(dep1 + 1) + ".CommandName", commands[dep1].commandName);
  }
}

std::vector<UpdateConversationalAutomationRequest::std::string> UpdateConversationalAutomationRequest::getPrompts() const {
  return prompts_;
}

void UpdateConversationalAutomationRequest::setPrompts(const std::vector<UpdateConversationalAutomationRequest::std::string> &prompts) {
  prompts_ = prompts;
  for(int dep1 = 0; dep1 != prompts.size(); dep1++) {
    setParameter(std::string("Prompts") + "." + std::to_string(dep1 + 1), prompts[dep1]);
  }
}

std::string UpdateConversationalAutomationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateConversationalAutomationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long UpdateConversationalAutomationRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateConversationalAutomationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateConversationalAutomationRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void UpdateConversationalAutomationRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string UpdateConversationalAutomationRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void UpdateConversationalAutomationRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

