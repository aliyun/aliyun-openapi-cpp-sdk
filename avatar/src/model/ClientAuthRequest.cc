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

#include <alibabacloud/avatar/model/ClientAuthRequest.h>

using AlibabaCloud::Avatar::Model::ClientAuthRequest;

ClientAuthRequest::ClientAuthRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "ClientAuth") {
  setMethod(HttpRequest::Method::Post);
}

ClientAuthRequest::~ClientAuthRequest() {}

std::string ClientAuthRequest::getDeviceId() const {
  return deviceId_;
}

void ClientAuthRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string ClientAuthRequest::getDeviceType() const {
  return deviceType_;
}

void ClientAuthRequest::setDeviceType(const std::string &deviceType) {
  deviceType_ = deviceType;
  setParameter(std::string("DeviceType"), deviceType);
}

std::string ClientAuthRequest::getLicense() const {
  return license_;
}

void ClientAuthRequest::setLicense(const std::string &license) {
  license_ = license;
  setParameter(std::string("License"), license);
}

std::string ClientAuthRequest::getAppId() const {
  return appId_;
}

void ClientAuthRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

long ClientAuthRequest::getTenantId() const {
  return tenantId_;
}

void ClientAuthRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string ClientAuthRequest::getDeviceInfo() const {
  return deviceInfo_;
}

void ClientAuthRequest::setDeviceInfo(const std::string &deviceInfo) {
  deviceInfo_ = deviceInfo;
  setParameter(std::string("DeviceInfo"), deviceInfo);
}

