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

#include <alibabacloud/oceanbasepro/model/CreateRdsPostgreSQLDataSourceRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateRdsPostgreSQLDataSourceRequest;

CreateRdsPostgreSQLDataSourceRequest::CreateRdsPostgreSQLDataSourceRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateRdsPostgreSQLDataSource") {
  setMethod(HttpRequest::Method::Post);
}

CreateRdsPostgreSQLDataSourceRequest::~CreateRdsPostgreSQLDataSourceRequest() {}

std::string CreateRdsPostgreSQLDataSourceRequest::getDescription() const {
  return description_;
}

void CreateRdsPostgreSQLDataSourceRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateRdsPostgreSQLDataSourceRequest::getPassword() const {
  return password_;
}

void CreateRdsPostgreSQLDataSourceRequest::setPassword(const std::string &password) {
  password_ = password;
  setBodyParameter(std::string("Password"), password);
}

std::string CreateRdsPostgreSQLDataSourceRequest::getInstanceId() const {
  return instanceId_;
}

void CreateRdsPostgreSQLDataSourceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateRdsPostgreSQLDataSourceRequest::getDatabaseName() const {
  return databaseName_;
}

void CreateRdsPostgreSQLDataSourceRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setBodyParameter(std::string("DatabaseName"), databaseName);
}

std::string CreateRdsPostgreSQLDataSourceRequest::getName() const {
  return name_;
}

void CreateRdsPostgreSQLDataSourceRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateRdsPostgreSQLDataSourceRequest::getUserName() const {
  return userName_;
}

void CreateRdsPostgreSQLDataSourceRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

