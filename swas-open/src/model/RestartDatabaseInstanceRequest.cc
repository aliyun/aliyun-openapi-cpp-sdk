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

#include <alibabacloud/swas-open/model/RestartDatabaseInstanceRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::RestartDatabaseInstanceRequest;

RestartDatabaseInstanceRequest::RestartDatabaseInstanceRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "RestartDatabaseInstance") {
  setMethod(HttpRequest::Method::Post);
}

RestartDatabaseInstanceRequest::~RestartDatabaseInstanceRequest() {}

std::string RestartDatabaseInstanceRequest::getClientToken() const {
  return clientToken_;
}

void RestartDatabaseInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RestartDatabaseInstanceRequest::getDatabaseInstanceId() const {
  return databaseInstanceId_;
}

void RestartDatabaseInstanceRequest::setDatabaseInstanceId(const std::string &databaseInstanceId) {
  databaseInstanceId_ = databaseInstanceId;
  setParameter(std::string("DatabaseInstanceId"), databaseInstanceId);
}

std::string RestartDatabaseInstanceRequest::getRegionId() const {
  return regionId_;
}

void RestartDatabaseInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

