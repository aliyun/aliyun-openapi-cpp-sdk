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

#include <alibabacloud/oceanbasepro/model/CreateDatabaseRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateDatabaseRequest;

CreateDatabaseRequest::CreateDatabaseRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateDatabase") {
  setMethod(HttpRequest::Method::Post);
}

CreateDatabaseRequest::~CreateDatabaseRequest() {}

std::string CreateDatabaseRequest::getClientToken() const {
  return clientToken_;
}

void CreateDatabaseRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDatabaseRequest::getDescription() const {
  return description_;
}

void CreateDatabaseRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateDatabaseRequest::getEncoding() const {
  return encoding_;
}

void CreateDatabaseRequest::setEncoding(const std::string &encoding) {
  encoding_ = encoding;
  setBodyParameter(std::string("Encoding"), encoding);
}

std::string CreateDatabaseRequest::getInstanceId() const {
  return instanceId_;
}

void CreateDatabaseRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateDatabaseRequest::getDatabaseName() const {
  return databaseName_;
}

void CreateDatabaseRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setBodyParameter(std::string("DatabaseName"), databaseName);
}

std::string CreateDatabaseRequest::getTenantId() const {
  return tenantId_;
}

void CreateDatabaseRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string CreateDatabaseRequest::getCollation() const {
  return collation_;
}

void CreateDatabaseRequest::setCollation(const std::string &collation) {
  collation_ = collation;
  setBodyParameter(std::string("Collation"), collation);
}

