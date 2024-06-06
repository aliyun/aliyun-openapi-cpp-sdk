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

#include <alibabacloud/csas/model/UpdateClientUserPasswordRequest.h>

using AlibabaCloud::Csas::Model::UpdateClientUserPasswordRequest;

UpdateClientUserPasswordRequest::UpdateClientUserPasswordRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdateClientUserPassword") {
  setMethod(HttpRequest::Method::Post);
}

UpdateClientUserPasswordRequest::~UpdateClientUserPasswordRequest() {}

std::string UpdateClientUserPasswordRequest::getPassword() const {
  return password_;
}

void UpdateClientUserPasswordRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string UpdateClientUserPasswordRequest::getId() const {
  return id_;
}

void UpdateClientUserPasswordRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string UpdateClientUserPasswordRequest::getUsername() const {
  return username_;
}

void UpdateClientUserPasswordRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

