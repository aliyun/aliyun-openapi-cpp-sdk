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

#include <alibabacloud/oceanbasepro/model/ModifyDatabaseUserRolesRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyDatabaseUserRolesRequest;

ModifyDatabaseUserRolesRequest::ModifyDatabaseUserRolesRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyDatabaseUserRoles") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDatabaseUserRolesRequest::~ModifyDatabaseUserRolesRequest() {}

std::string ModifyDatabaseUserRolesRequest::getUsers() const {
  return users_;
}

void ModifyDatabaseUserRolesRequest::setUsers(const std::string &users) {
  users_ = users;
  setBodyParameter(std::string("Users"), users);
}

std::string ModifyDatabaseUserRolesRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyDatabaseUserRolesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyDatabaseUserRolesRequest::getDatabaseName() const {
  return databaseName_;
}

void ModifyDatabaseUserRolesRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setBodyParameter(std::string("DatabaseName"), databaseName);
}

std::string ModifyDatabaseUserRolesRequest::getTenantId() const {
  return tenantId_;
}

void ModifyDatabaseUserRolesRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

