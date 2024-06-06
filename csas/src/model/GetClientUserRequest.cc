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

#include <alibabacloud/csas/model/GetClientUserRequest.h>

using AlibabaCloud::Csas::Model::GetClientUserRequest;

GetClientUserRequest::GetClientUserRequest()
    : RpcServiceRequest("csas", "2023-01-20", "GetClientUser") {
  setMethod(HttpRequest::Method::Get);
}

GetClientUserRequest::~GetClientUserRequest() {}

std::string GetClientUserRequest::getIdpConfigId() const {
  return idpConfigId_;
}

void GetClientUserRequest::setIdpConfigId(const std::string &idpConfigId) {
  idpConfigId_ = idpConfigId;
  setParameter(std::string("IdpConfigId"), idpConfigId);
}

std::string GetClientUserRequest::getUsername() const {
  return username_;
}

void GetClientUserRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

