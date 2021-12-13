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

#include <alibabacloud/gpdb/model/ModifyDBInstanceConnectionStringRequest.h>

using AlibabaCloud::Gpdb::Model::ModifyDBInstanceConnectionStringRequest;

ModifyDBInstanceConnectionStringRequest::ModifyDBInstanceConnectionStringRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "ModifyDBInstanceConnectionString") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceConnectionStringRequest::~ModifyDBInstanceConnectionStringRequest() {}

std::string ModifyDBInstanceConnectionStringRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void ModifyDBInstanceConnectionStringRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

std::string ModifyDBInstanceConnectionStringRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceConnectionStringRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceConnectionStringRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceConnectionStringRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceConnectionStringRequest::getCurrentConnectionString() const {
  return currentConnectionString_;
}

void ModifyDBInstanceConnectionStringRequest::setCurrentConnectionString(const std::string &currentConnectionString) {
  currentConnectionString_ = currentConnectionString;
  setParameter(std::string("CurrentConnectionString"), currentConnectionString);
}

std::string ModifyDBInstanceConnectionStringRequest::getPort() const {
  return port_;
}

void ModifyDBInstanceConnectionStringRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

