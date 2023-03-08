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

#include <alibabacloud/adb/model/ModifyClusterConnectionStringRequest.h>

using AlibabaCloud::Adb::Model::ModifyClusterConnectionStringRequest;

ModifyClusterConnectionStringRequest::ModifyClusterConnectionStringRequest()
    : RpcServiceRequest("adb", "2021-12-01", "ModifyClusterConnectionString") {
  setMethod(HttpRequest::Method::Post);
}

ModifyClusterConnectionStringRequest::~ModifyClusterConnectionStringRequest() {}

std::string ModifyClusterConnectionStringRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void ModifyClusterConnectionStringRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

std::string ModifyClusterConnectionStringRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyClusterConnectionStringRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyClusterConnectionStringRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyClusterConnectionStringRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyClusterConnectionStringRequest::getCurrentConnectionString() const {
  return currentConnectionString_;
}

void ModifyClusterConnectionStringRequest::setCurrentConnectionString(const std::string &currentConnectionString) {
  currentConnectionString_ = currentConnectionString;
  setParameter(std::string("CurrentConnectionString"), currentConnectionString);
}

int ModifyClusterConnectionStringRequest::getPort() const {
  return port_;
}

void ModifyClusterConnectionStringRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

