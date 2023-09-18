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

#include <alibabacloud/avatar/model/Render3dAvatarRequest.h>

using AlibabaCloud::Avatar::Model::Render3dAvatarRequest;

Render3dAvatarRequest::Render3dAvatarRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "Render3dAvatar") {
  setMethod(HttpRequest::Method::Post);
}

Render3dAvatarRequest::~Render3dAvatarRequest() {}

std::string Render3dAvatarRequest::getCode() const {
  return code_;
}

void Render3dAvatarRequest::setCode(const std::string &code) {
  code_ = code;
  setParameter(std::string("Code"), code);
}

std::string Render3dAvatarRequest::getAppId() const {
  return appId_;
}

void Render3dAvatarRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

long Render3dAvatarRequest::getTenantId() const {
  return tenantId_;
}

void Render3dAvatarRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

