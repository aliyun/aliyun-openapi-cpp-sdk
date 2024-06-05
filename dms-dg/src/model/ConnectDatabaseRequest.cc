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

#include <alibabacloud/dms-dg/model/ConnectDatabaseRequest.h>

using AlibabaCloud::Dms_dg::Model::ConnectDatabaseRequest;

ConnectDatabaseRequest::ConnectDatabaseRequest()
    : RpcServiceRequest("dms-dg", "2023-09-14", "ConnectDatabase") {
  setMethod(HttpRequest::Method::Post);
}

ConnectDatabaseRequest::~ConnectDatabaseRequest() {}

std::string ConnectDatabaseRequest::getDbName() const {
  return dbName_;
}

void ConnectDatabaseRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

int ConnectDatabaseRequest::getPort() const {
  return port_;
}

void ConnectDatabaseRequest::setPort(int port) {
  port_ = port;
  setBodyParameter(std::string("Port"), std::to_string(port));
}

std::string ConnectDatabaseRequest::getDbPassword() const {
  return dbPassword_;
}

void ConnectDatabaseRequest::setDbPassword(const std::string &dbPassword) {
  dbPassword_ = dbPassword;
  setBodyParameter(std::string("DbPassword"), dbPassword);
}

std::string ConnectDatabaseRequest::getHost() const {
  return host_;
}

void ConnectDatabaseRequest::setHost(const std::string &host) {
  host_ = host;
  setBodyParameter(std::string("Host"), host);
}

std::string ConnectDatabaseRequest::getDbType() const {
  return dbType_;
}

void ConnectDatabaseRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setBodyParameter(std::string("DbType"), dbType);
}

std::string ConnectDatabaseRequest::getDbUserName() const {
  return dbUserName_;
}

void ConnectDatabaseRequest::setDbUserName(const std::string &dbUserName) {
  dbUserName_ = dbUserName;
  setBodyParameter(std::string("DbUserName"), dbUserName);
}

std::string ConnectDatabaseRequest::getGatewayId() const {
  return gatewayId_;
}

void ConnectDatabaseRequest::setGatewayId(const std::string &gatewayId) {
  gatewayId_ = gatewayId;
  setBodyParameter(std::string("GatewayId"), gatewayId);
}

