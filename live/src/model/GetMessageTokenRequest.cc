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

#include <alibabacloud/live/model/GetMessageTokenRequest.h>

using AlibabaCloud::Live::Model::GetMessageTokenRequest;

GetMessageTokenRequest::GetMessageTokenRequest()
    : RpcServiceRequest("live", "2016-11-01", "GetMessageToken") {
  setMethod(HttpRequest::Method::Post);
}

GetMessageTokenRequest::~GetMessageTokenRequest() {}

std::string GetMessageTokenRequest::getUserId() const {
  return userId_;
}

void GetMessageTokenRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

std::string GetMessageTokenRequest::getDeviceType() const {
  return deviceType_;
}

void GetMessageTokenRequest::setDeviceType(const std::string &deviceType) {
  deviceType_ = deviceType;
  setBodyParameter(std::string("DeviceType"), deviceType);
}

std::string GetMessageTokenRequest::getDeviceId() const {
  return deviceId_;
}

void GetMessageTokenRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setBodyParameter(std::string("DeviceId"), deviceId);
}

std::string GetMessageTokenRequest::getAppId() const {
  return appId_;
}

void GetMessageTokenRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

