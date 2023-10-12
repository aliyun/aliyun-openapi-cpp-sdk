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

#include <alibabacloud/oceanbasepro/model/ModifyDatabaseDescriptionRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyDatabaseDescriptionRequest;

ModifyDatabaseDescriptionRequest::ModifyDatabaseDescriptionRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyDatabaseDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDatabaseDescriptionRequest::~ModifyDatabaseDescriptionRequest() {}

std::string ModifyDatabaseDescriptionRequest::getDescription() const {
  return description_;
}

void ModifyDatabaseDescriptionRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string ModifyDatabaseDescriptionRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyDatabaseDescriptionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyDatabaseDescriptionRequest::getDatabaseName() const {
  return databaseName_;
}

void ModifyDatabaseDescriptionRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setBodyParameter(std::string("DatabaseName"), databaseName);
}

std::string ModifyDatabaseDescriptionRequest::getTenantId() const {
  return tenantId_;
}

void ModifyDatabaseDescriptionRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

