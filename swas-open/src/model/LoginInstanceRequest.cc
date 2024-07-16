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

#include <alibabacloud/swas-open/model/LoginInstanceRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::LoginInstanceRequest;

LoginInstanceRequest::LoginInstanceRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "LoginInstance") {
  setMethod(HttpRequest::Method::Post);
}

LoginInstanceRequest::~LoginInstanceRequest() {}

std::string LoginInstanceRequest::getPassword() const {
  return password_;
}

void LoginInstanceRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string LoginInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void LoginInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string LoginInstanceRequest::getRegionId() const {
  return regionId_;
}

void LoginInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int LoginInstanceRequest::getPort() const {
  return port_;
}

void LoginInstanceRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string LoginInstanceRequest::getUsername() const {
  return username_;
}

void LoginInstanceRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

