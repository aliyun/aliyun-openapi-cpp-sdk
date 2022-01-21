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

#include <alibabacloud/dms-enterprise/model/CreateProxyRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateProxyRequest;

CreateProxyRequest::CreateProxyRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateProxy") {
  setMethod(HttpRequest::Method::Post);
}

CreateProxyRequest::~CreateProxyRequest() {}

long CreateProxyRequest::getTid() const {
  return tid_;
}

void CreateProxyRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string CreateProxyRequest::getPassword() const {
  return password_;
}

void CreateProxyRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

long CreateProxyRequest::getInstanceId() const {
  return instanceId_;
}

void CreateProxyRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

std::string CreateProxyRequest::getUsername() const {
  return username_;
}

void CreateProxyRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

