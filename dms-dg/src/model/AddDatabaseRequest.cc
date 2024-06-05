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

#include <alibabacloud/dms-dg/model/AddDatabaseRequest.h>

using AlibabaCloud::Dms_dg::Model::AddDatabaseRequest;

AddDatabaseRequest::AddDatabaseRequest()
    : RpcServiceRequest("dms-dg", "2023-09-14", "AddDatabase") {
  setMethod(HttpRequest::Method::Post);
}

AddDatabaseRequest::~AddDatabaseRequest() {}

std::string AddDatabaseRequest::getClientToken() const {
  return clientToken_;
}

void AddDatabaseRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string AddDatabaseRequest::getRegionId() const {
  return regionId_;
}

void AddDatabaseRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string AddDatabaseRequest::getHost() const {
  return host_;
}

void AddDatabaseRequest::setHost(const std::string &host) {
  host_ = host;
  setBodyParameter(std::string("Host"), host);
}

std::string AddDatabaseRequest::getDbUserName() const {
  return dbUserName_;
}

void AddDatabaseRequest::setDbUserName(const std::string &dbUserName) {
  dbUserName_ = dbUserName;
  setBodyParameter(std::string("DbUserName"), dbUserName);
}

std::string AddDatabaseRequest::getDbDescription() const {
  return dbDescription_;
}

void AddDatabaseRequest::setDbDescription(const std::string &dbDescription) {
  dbDescription_ = dbDescription;
  setBodyParameter(std::string("DbDescription"), dbDescription);
}

std::string AddDatabaseRequest::getGatewayId() const {
  return gatewayId_;
}

void AddDatabaseRequest::setGatewayId(const std::string &gatewayId) {
  gatewayId_ = gatewayId;
  setBodyParameter(std::string("GatewayId"), gatewayId);
}

std::string AddDatabaseRequest::getDbName() const {
  return dbName_;
}

void AddDatabaseRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

int AddDatabaseRequest::getPort() const {
  return port_;
}

void AddDatabaseRequest::setPort(int port) {
  port_ = port;
  setBodyParameter(std::string("Port"), std::to_string(port));
}

std::string AddDatabaseRequest::getDbPassword() const {
  return dbPassword_;
}

void AddDatabaseRequest::setDbPassword(const std::string &dbPassword) {
  dbPassword_ = dbPassword;
  setBodyParameter(std::string("DbPassword"), dbPassword);
}

std::string AddDatabaseRequest::getDbType() const {
  return dbType_;
}

void AddDatabaseRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setBodyParameter(std::string("DbType"), dbType);
}

