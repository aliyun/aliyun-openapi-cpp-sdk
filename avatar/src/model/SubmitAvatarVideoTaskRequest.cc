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

#include <alibabacloud/avatar/model/SubmitAvatarVideoTaskRequest.h>

using AlibabaCloud::Avatar::Model::SubmitAvatarVideoTaskRequest;

SubmitAvatarVideoTaskRequest::SubmitAvatarVideoTaskRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "SubmitAvatarVideoTask") {
  setMethod(HttpRequest::Method::Post);
}

SubmitAvatarVideoTaskRequest::~SubmitAvatarVideoTaskRequest() {}

std::string SubmitAvatarVideoTaskRequest::getTitle() const {
  return title_;
}

void SubmitAvatarVideoTaskRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitAvatarVideoTaskRequest::getCallbackParams() const {
  return callbackParams_;
}

void SubmitAvatarVideoTaskRequest::setCallbackParams(const std::string &callbackParams) {
  callbackParams_ = callbackParams;
  setParameter(std::string("CallbackParams"), callbackParams);
}

long SubmitAvatarVideoTaskRequest::getTenantId() const {
  return tenantId_;
}

void SubmitAvatarVideoTaskRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string SubmitAvatarVideoTaskRequest::getVideoParams() const {
  return videoParams_;
}

void SubmitAvatarVideoTaskRequest::setVideoParams(const std::string &videoParams) {
  videoParams_ = videoParams;
  setParameter(std::string("VideoParams"), videoParams);
}

SubmitAvatarVideoTaskRequest::App SubmitAvatarVideoTaskRequest::getApp() const {
  return app_;
}

void SubmitAvatarVideoTaskRequest::setApp(const SubmitAvatarVideoTaskRequest::App &app) {
  app_ = app;
  setParameter(std::string("App") + ".AppId", app.appId);
}

std::string SubmitAvatarVideoTaskRequest::getExtParams() const {
  return extParams_;
}

void SubmitAvatarVideoTaskRequest::setExtParams(const std::string &extParams) {
  extParams_ = extParams;
  setParameter(std::string("ExtParams"), extParams);
}

std::string SubmitAvatarVideoTaskRequest::getVideoParams_CLS() const {
  return videoParams_CLS_;
}

void SubmitAvatarVideoTaskRequest::setVideoParams_CLS(const std::string &videoParams_CLS) {
  videoParams_CLS_ = videoParams_CLS;
  setParameter(std::string("VideoParams_CLS"), videoParams_CLS);
}

bool SubmitAvatarVideoTaskRequest::getCallback() const {
  return callback_;
}

void SubmitAvatarVideoTaskRequest::setCallback(bool callback) {
  callback_ = callback;
  setParameter(std::string("Callback"), callback ? "true" : "false");
}

std::string SubmitAvatarVideoTaskRequest::getExtParams_CLS() const {
  return extParams_CLS_;
}

void SubmitAvatarVideoTaskRequest::setExtParams_CLS(const std::string &extParams_CLS) {
  extParams_CLS_ = extParams_CLS;
  setParameter(std::string("ExtParams_CLS"), extParams_CLS);
}

std::string SubmitAvatarVideoTaskRequest::getCallbackParams_CLS() const {
  return callbackParams_CLS_;
}

void SubmitAvatarVideoTaskRequest::setCallbackParams_CLS(const std::string &callbackParams_CLS) {
  callbackParams_CLS_ = callbackParams_CLS;
  setParameter(std::string("CallbackParams_CLS"), callbackParams_CLS);
}

