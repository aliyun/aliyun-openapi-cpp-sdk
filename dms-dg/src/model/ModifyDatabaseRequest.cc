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

#include <alibabacloud/dms-dg/model/ModifyDatabaseRequest.h>

using AlibabaCloud::Dms_dg::Model::ModifyDatabaseRequest;

ModifyDatabaseRequest::ModifyDatabaseRequest()
    : RpcServiceRequest("dms-dg", "2023-09-14", "ModifyDatabase") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDatabaseRequest::~ModifyDatabaseRequest() {}

std::string ModifyDatabaseRequest::getHost() const {
  return host_;
}

void ModifyDatabaseRequest::setHost(const std::string &host) {
  host_ = host;
  setBodyParameter(std::string("Host"), host);
}

std::string ModifyDatabaseRequest::getDbUserName() const {
  return dbUserName_;
}

void ModifyDatabaseRequest::setDbUserName(const std::string &dbUserName) {
  dbUserName_ = dbUserName;
  setBodyParameter(std::string("DbUserName"), dbUserName);
}

std::string ModifyDatabaseRequest::getDbDescription() const {
  return dbDescription_;
}

void ModifyDatabaseRequest::setDbDescription(const std::string &dbDescription) {
  dbDescription_ = dbDescription;
  setBodyParameter(std::string("DbDescription"), dbDescription);
}

std::string ModifyDatabaseRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyDatabaseRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyDatabaseRequest::getDbName() const {
  return dbName_;
}

void ModifyDatabaseRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

int ModifyDatabaseRequest::getPort() const {
  return port_;
}

void ModifyDatabaseRequest::setPort(int port) {
  port_ = port;
  setBodyParameter(std::string("Port"), std::to_string(port));
}

std::string ModifyDatabaseRequest::getDbPassword() const {
  return dbPassword_;
}

void ModifyDatabaseRequest::setDbPassword(const std::string &dbPassword) {
  dbPassword_ = dbPassword;
  setBodyParameter(std::string("DbPassword"), dbPassword);
}

std::string ModifyDatabaseRequest::getDbType() const {
  return dbType_;
}

void ModifyDatabaseRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setBodyParameter(std::string("DbType"), dbType);
}

