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

#include <alibabacloud/dms-dg/model/RetryDatabaseRequest.h>

using AlibabaCloud::Dms_dg::Model::RetryDatabaseRequest;

RetryDatabaseRequest::RetryDatabaseRequest()
    : RpcServiceRequest("dms-dg", "2023-09-14", "RetryDatabase") {
  setMethod(HttpRequest::Method::Post);
}

RetryDatabaseRequest::~RetryDatabaseRequest() {}

std::string RetryDatabaseRequest::getClientToken() const {
  return clientToken_;
}

void RetryDatabaseRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string RetryDatabaseRequest::getRegionId() const {
  return regionId_;
}

void RetryDatabaseRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string RetryDatabaseRequest::getHost() const {
  return host_;
}

void RetryDatabaseRequest::setHost(const std::string &host) {
  host_ = host;
  setBodyParameter(std::string("Host"), host);
}

std::string RetryDatabaseRequest::getDbUserName() const {
  return dbUserName_;
}

void RetryDatabaseRequest::setDbUserName(const std::string &dbUserName) {
  dbUserName_ = dbUserName;
  setBodyParameter(std::string("DbUserName"), dbUserName);
}

std::string RetryDatabaseRequest::getDbDescription() const {
  return dbDescription_;
}

void RetryDatabaseRequest::setDbDescription(const std::string &dbDescription) {
  dbDescription_ = dbDescription;
  setBodyParameter(std::string("DbDescription"), dbDescription);
}

std::string RetryDatabaseRequest::getGatewayId() const {
  return gatewayId_;
}

void RetryDatabaseRequest::setGatewayId(const std::string &gatewayId) {
  gatewayId_ = gatewayId;
  setBodyParameter(std::string("GatewayId"), gatewayId);
}

std::string RetryDatabaseRequest::getDbName() const {
  return dbName_;
}

void RetryDatabaseRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

int RetryDatabaseRequest::getPort() const {
  return port_;
}

void RetryDatabaseRequest::setPort(int port) {
  port_ = port;
  setBodyParameter(std::string("Port"), std::to_string(port));
}

std::string RetryDatabaseRequest::getDbPassword() const {
  return dbPassword_;
}

void RetryDatabaseRequest::setDbPassword(const std::string &dbPassword) {
  dbPassword_ = dbPassword;
  setBodyParameter(std::string("DbPassword"), dbPassword);
}

std::string RetryDatabaseRequest::getDbType() const {
  return dbType_;
}

void RetryDatabaseRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setBodyParameter(std::string("DbType"), dbType);
}

