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

#include <alibabacloud/dms-enterprise/model/RegisterUserRequest.h>

using AlibabaCloud::Dms_enterprise::Model::RegisterUserRequest;

RegisterUserRequest::RegisterUserRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "RegisterUser") {
  setMethod(HttpRequest::Method::Post);
}

RegisterUserRequest::~RegisterUserRequest() {}

std::string RegisterUserRequest::getRoleNames() const {
  return roleNames_;
}

void RegisterUserRequest::setRoleNames(const std::string &roleNames) {
  roleNames_ = roleNames;
  setParameter(std::string("RoleNames"), roleNames);
}

std::string RegisterUserRequest::getUserNick() const {
  return userNick_;
}

void RegisterUserRequest::setUserNick(const std::string &userNick) {
  userNick_ = userNick;
  setParameter(std::string("UserNick"), userNick);
}

long RegisterUserRequest::getTid() const {
  return tid_;
}

void RegisterUserRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string RegisterUserRequest::getUid() const {
  return uid_;
}

void RegisterUserRequest::setUid(const std::string &uid) {
  uid_ = uid;
  setParameter(std::string("Uid"), uid);
}

std::string RegisterUserRequest::getMobile() const {
  return mobile_;
}

void RegisterUserRequest::setMobile(const std::string &mobile) {
  mobile_ = mobile;
  setParameter(std::string("Mobile"), mobile);
}

