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

#include <alibabacloud/ccc/model/StartPrivacyCallRequest.h>

using AlibabaCloud::CCC::Model::StartPrivacyCallRequest;

StartPrivacyCallRequest::StartPrivacyCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "StartPrivacyCall") {
  setMethod(HttpRequest::Method::Post);
}

StartPrivacyCallRequest::~StartPrivacyCallRequest() {}

std::string StartPrivacyCallRequest::getCallee() const {
  return callee_;
}

void StartPrivacyCallRequest::setCallee(const std::string &callee) {
  callee_ = callee;
  setParameter(std::string("Callee"), callee);
}

std::string StartPrivacyCallRequest::getCaller() const {
  return caller_;
}

void StartPrivacyCallRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

std::string StartPrivacyCallRequest::getInstanceId() const {
  return instanceId_;
}

void StartPrivacyCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string StartPrivacyCallRequest::getAppId() const {
  return appId_;
}

void StartPrivacyCallRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

