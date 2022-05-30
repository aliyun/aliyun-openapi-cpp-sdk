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

#include <alibabacloud/dataworks-public/model/UpdateIDEEventResultRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateIDEEventResultRequest;

UpdateIDEEventResultRequest::UpdateIDEEventResultRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateIDEEventResult") {
  setMethod(HttpRequest::Method::Post);
}

UpdateIDEEventResultRequest::~UpdateIDEEventResultRequest() {}

std::string UpdateIDEEventResultRequest::getCheckResultTip() const {
  return checkResultTip_;
}

void UpdateIDEEventResultRequest::setCheckResultTip(const std::string &checkResultTip) {
  checkResultTip_ = checkResultTip;
  setBodyParameter(std::string("CheckResultTip"), checkResultTip);
}

std::string UpdateIDEEventResultRequest::getCheckResult() const {
  return checkResult_;
}

void UpdateIDEEventResultRequest::setCheckResult(const std::string &checkResult) {
  checkResult_ = checkResult;
  setBodyParameter(std::string("CheckResult"), checkResult);
}

std::string UpdateIDEEventResultRequest::getMessageId() const {
  return messageId_;
}

void UpdateIDEEventResultRequest::setMessageId(const std::string &messageId) {
  messageId_ = messageId;
  setBodyParameter(std::string("MessageId"), messageId);
}

std::string UpdateIDEEventResultRequest::getExtensionCode() const {
  return extensionCode_;
}

void UpdateIDEEventResultRequest::setExtensionCode(const std::string &extensionCode) {
  extensionCode_ = extensionCode;
  setBodyParameter(std::string("ExtensionCode"), extensionCode);
}

