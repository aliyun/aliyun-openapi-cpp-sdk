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

#include <alibabacloud/dataworks-public/model/UpdateWorkbenchEventResultRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateWorkbenchEventResultRequest;

UpdateWorkbenchEventResultRequest::UpdateWorkbenchEventResultRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateWorkbenchEventResult") {
  setMethod(HttpRequest::Method::Post);
}

UpdateWorkbenchEventResultRequest::~UpdateWorkbenchEventResultRequest() {}

std::string UpdateWorkbenchEventResultRequest::getCheckResult() const {
  return checkResult_;
}

void UpdateWorkbenchEventResultRequest::setCheckResult(const std::string &checkResult) {
  checkResult_ = checkResult;
  setParameter(std::string("CheckResult"), checkResult);
}

std::string UpdateWorkbenchEventResultRequest::getMessageId() const {
  return messageId_;
}

void UpdateWorkbenchEventResultRequest::setMessageId(const std::string &messageId) {
  messageId_ = messageId;
  setParameter(std::string("MessageId"), messageId);
}

std::string UpdateWorkbenchEventResultRequest::getCheckResultTip() const {
  return checkResultTip_;
}

void UpdateWorkbenchEventResultRequest::setCheckResultTip(const std::string &checkResultTip) {
  checkResultTip_ = checkResultTip;
  setParameter(std::string("CheckResultTip"), checkResultTip);
}

std::string UpdateWorkbenchEventResultRequest::getExtensionCode() const {
  return extensionCode_;
}

void UpdateWorkbenchEventResultRequest::setExtensionCode(const std::string &extensionCode) {
  extensionCode_ = extensionCode;
  setParameter(std::string("ExtensionCode"), extensionCode);
}

