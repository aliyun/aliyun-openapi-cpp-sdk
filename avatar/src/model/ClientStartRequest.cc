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

#include <alibabacloud/avatar/model/ClientStartRequest.h>

using AlibabaCloud::Avatar::Model::ClientStartRequest;

ClientStartRequest::ClientStartRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "ClientStart") {
  setMethod(HttpRequest::Method::Post);
}

ClientStartRequest::~ClientStartRequest() {}

std::string ClientStartRequest::getAppId() const {
  return appId_;
}

void ClientStartRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

long ClientStartRequest::getTenantId() const {
  return tenantId_;
}

void ClientStartRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

