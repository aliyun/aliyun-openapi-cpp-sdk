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

#include <alibabacloud/avatar/model/DuplexDecisionRequest.h>

using AlibabaCloud::Avatar::Model::DuplexDecisionRequest;

DuplexDecisionRequest::DuplexDecisionRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "DuplexDecision") {
  setMethod(HttpRequest::Method::Post);
}

DuplexDecisionRequest::~DuplexDecisionRequest() {}

int DuplexDecisionRequest::getInterruptType() const {
  return interruptType_;
}

void DuplexDecisionRequest::setInterruptType(int interruptType) {
  interruptType_ = interruptType;
  setParameter(std::string("InterruptType"), std::to_string(interruptType));
}

std::vector<DuplexDecisionRequest::std::string> DuplexDecisionRequest::getCustomKeywords() const {
  return customKeywords_;
}

void DuplexDecisionRequest::setCustomKeywords(const std::vector<DuplexDecisionRequest::std::string> &customKeywords) {
  customKeywords_ = customKeywords;
  for(int dep1 = 0; dep1 != customKeywords.size(); dep1++) {
    setParameter(std::string("CustomKeywords") + "." + std::to_string(dep1 + 1), customKeywords[dep1]);
  }
}

std::string DuplexDecisionRequest::getSessionId() const {
  return sessionId_;
}

void DuplexDecisionRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

std::string DuplexDecisionRequest::getDialogStatus() const {
  return dialogStatus_;
}

void DuplexDecisionRequest::setDialogStatus(const std::string &dialogStatus) {
  dialogStatus_ = dialogStatus;
  setParameter(std::string("DialogStatus"), dialogStatus);
}

DuplexDecisionRequest::DialogContext DuplexDecisionRequest::getDialogContext() const {
  return dialogContext_;
}

void DuplexDecisionRequest::setDialogContext(const DuplexDecisionRequest::DialogContext &dialogContext) {
  dialogContext_ = dialogContext;
  for(int dep1 = 0; dep1 != dialogContext.histories.size(); dep1++) {
    setParameter(std::string("DialogContext") + ".Histories." + std::to_string(dep1 + 1) + ".Robot", dialogContext.histories[dep1].robot);
    setParameter(std::string("DialogContext") + ".Histories." + std::to_string(dep1 + 1) + ".User", dialogContext.histories[dep1].user);
  }
  setParameter(std::string("DialogContext") + ".CurUtteranceIdx", std::to_string(dialogContext.curUtteranceIdx));
}

int DuplexDecisionRequest::getCallTime() const {
  return callTime_;
}

void DuplexDecisionRequest::setCallTime(int callTime) {
  callTime_ = callTime;
  setParameter(std::string("CallTime"), std::to_string(callTime));
}

std::string DuplexDecisionRequest::getAppId() const {
  return appId_;
}

void DuplexDecisionRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

long DuplexDecisionRequest::getTenantId() const {
  return tenantId_;
}

void DuplexDecisionRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string DuplexDecisionRequest::getText() const {
  return text_;
}

void DuplexDecisionRequest::setText(const std::string &text) {
  text_ = text;
  setParameter(std::string("Text"), text);
}

std::string DuplexDecisionRequest::getBizRequestId() const {
  return bizRequestId_;
}

void DuplexDecisionRequest::setBizRequestId(const std::string &bizRequestId) {
  bizRequestId_ = bizRequestId;
  setParameter(std::string("BizRequestId"), bizRequestId);
}

