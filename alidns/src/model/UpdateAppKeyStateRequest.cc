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

#include <alibabacloud/alidns/model/UpdateAppKeyStateRequest.h>

using AlibabaCloud::Alidns::Model::UpdateAppKeyStateRequest;

UpdateAppKeyStateRequest::UpdateAppKeyStateRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateAppKeyState") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAppKeyStateRequest::~UpdateAppKeyStateRequest() {}

std::string UpdateAppKeyStateRequest::getAppKeyId() const {
  return appKeyId_;
}

void UpdateAppKeyStateRequest::setAppKeyId(const std::string &appKeyId) {
  appKeyId_ = appKeyId;
  setParameter(std::string("AppKeyId"), appKeyId);
}

std::string UpdateAppKeyStateRequest::getState() const {
  return state_;
}

void UpdateAppKeyStateRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string UpdateAppKeyStateRequest::getLang() const {
  return lang_;
}

void UpdateAppKeyStateRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

