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

#include <alibabacloud/polardbx/model/ModifyDatabaseDescriptionRequest.h>

using AlibabaCloud::Polardbx::Model::ModifyDatabaseDescriptionRequest;

ModifyDatabaseDescriptionRequest::ModifyDatabaseDescriptionRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "ModifyDatabaseDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDatabaseDescriptionRequest::~ModifyDatabaseDescriptionRequest() {}

std::string ModifyDatabaseDescriptionRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void ModifyDatabaseDescriptionRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string ModifyDatabaseDescriptionRequest::getDbName() const {
  return dbName_;
}

void ModifyDatabaseDescriptionRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string ModifyDatabaseDescriptionRequest::getRegionId() const {
  return regionId_;
}

void ModifyDatabaseDescriptionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDatabaseDescriptionRequest::getDbDescription() const {
  return dbDescription_;
}

void ModifyDatabaseDescriptionRequest::setDbDescription(const std::string &dbDescription) {
  dbDescription_ = dbDescription;
  setParameter(std::string("DbDescription"), dbDescription);
}

