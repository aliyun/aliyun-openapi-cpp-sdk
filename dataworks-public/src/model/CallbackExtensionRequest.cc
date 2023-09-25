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

#include <alibabacloud/dataworks-public/model/CallbackExtensionRequest.h>

using AlibabaCloud::Dataworks_public::Model::CallbackExtensionRequest;

CallbackExtensionRequest::CallbackExtensionRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CallbackExtension") {
  setMethod(HttpRequest::Method::Post);
}

CallbackExtensionRequest::~CallbackExtensionRequest() {}

std::string CallbackExtensionRequest::getCheckResult() const {
  return checkResult_;
}

void CallbackExtensionRequest::setCheckResult(const std::string &checkResult) {
  checkResult_ = checkResult;
  setBodyParameter(std::string("CheckResult"), checkResult);
}

std::string CallbackExtensionRequest::getMessageId() const {
  return messageId_;
}

void CallbackExtensionRequest::setMessageId(const std::string &messageId) {
  messageId_ = messageId;
  setBodyParameter(std::string("MessageId"), messageId);
}

std::string CallbackExtensionRequest::getCheckMessage() const {
  return checkMessage_;
}

void CallbackExtensionRequest::setCheckMessage(const std::string &checkMessage) {
  checkMessage_ = checkMessage;
  setBodyParameter(std::string("CheckMessage"), checkMessage);
}

std::string CallbackExtensionRequest::getExtensionCode() const {
  return extensionCode_;
}

void CallbackExtensionRequest::setExtensionCode(const std::string &extensionCode) {
  extensionCode_ = extensionCode;
  setBodyParameter(std::string("ExtensionCode"), extensionCode);
}

