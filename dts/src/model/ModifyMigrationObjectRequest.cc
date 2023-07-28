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

#include <alibabacloud/dts/model/ModifyMigrationObjectRequest.h>

using AlibabaCloud::Dts::Model::ModifyMigrationObjectRequest;

ModifyMigrationObjectRequest::ModifyMigrationObjectRequest()
    : RpcServiceRequest("dts", "2017-06-01", "ModifyMigrationObject") {
  setMethod(HttpRequest::Method::Post);
}

ModifyMigrationObjectRequest::~ModifyMigrationObjectRequest() {}

std::string ModifyMigrationObjectRequest::getMigrationObject() const {
  return migrationObject_;
}

void ModifyMigrationObjectRequest::setMigrationObject(const std::string &migrationObject) {
  migrationObject_ = migrationObject;
  setParameter(std::string("MigrationObject"), migrationObject);
}

std::string ModifyMigrationObjectRequest::getClientToken() const {
  return clientToken_;
}

void ModifyMigrationObjectRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyMigrationObjectRequest::getMigrationJobId() const {
  return migrationJobId_;
}

void ModifyMigrationObjectRequest::setMigrationJobId(const std::string &migrationJobId) {
  migrationJobId_ = migrationJobId;
  setParameter(std::string("MigrationJobId"), migrationJobId);
}

