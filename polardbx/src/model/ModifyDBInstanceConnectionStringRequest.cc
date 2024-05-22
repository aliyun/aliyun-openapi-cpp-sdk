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

#include <alibabacloud/polardbx/model/ModifyDBInstanceConnectionStringRequest.h>

using AlibabaCloud::Polardbx::Model::ModifyDBInstanceConnectionStringRequest;

ModifyDBInstanceConnectionStringRequest::ModifyDBInstanceConnectionStringRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "ModifyDBInstanceConnectionString") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceConnectionStringRequest::~ModifyDBInstanceConnectionStringRequest() {}

std::string ModifyDBInstanceConnectionStringRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void ModifyDBInstanceConnectionStringRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string ModifyDBInstanceConnectionStringRequest::getConnectionString() const {
  return connectionString_;
}

void ModifyDBInstanceConnectionStringRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

std::string ModifyDBInstanceConnectionStringRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceConnectionStringRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceConnectionStringRequest::getNewPort() const {
  return newPort_;
}

void ModifyDBInstanceConnectionStringRequest::setNewPort(const std::string &newPort) {
  newPort_ = newPort;
  setParameter(std::string("NewPort"), newPort);
}

std::string ModifyDBInstanceConnectionStringRequest::getNewPrefix() const {
  return newPrefix_;
}

void ModifyDBInstanceConnectionStringRequest::setNewPrefix(const std::string &newPrefix) {
  newPrefix_ = newPrefix;
  setParameter(std::string("NewPrefix"), newPrefix);
}

