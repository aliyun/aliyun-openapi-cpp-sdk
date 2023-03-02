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

#include <alibabacloud/swas-open/model/ModifyDatabaseInstanceDescriptionRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ModifyDatabaseInstanceDescriptionRequest;

ModifyDatabaseInstanceDescriptionRequest::ModifyDatabaseInstanceDescriptionRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ModifyDatabaseInstanceDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDatabaseInstanceDescriptionRequest::~ModifyDatabaseInstanceDescriptionRequest() {}

std::string ModifyDatabaseInstanceDescriptionRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDatabaseInstanceDescriptionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDatabaseInstanceDescriptionRequest::getDatabaseInstanceId() const {
  return databaseInstanceId_;
}

void ModifyDatabaseInstanceDescriptionRequest::setDatabaseInstanceId(const std::string &databaseInstanceId) {
  databaseInstanceId_ = databaseInstanceId;
  setParameter(std::string("DatabaseInstanceId"), databaseInstanceId);
}

std::string ModifyDatabaseInstanceDescriptionRequest::getRegionId() const {
  return regionId_;
}

void ModifyDatabaseInstanceDescriptionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDatabaseInstanceDescriptionRequest::getDatabaseInstanceDescription() const {
  return databaseInstanceDescription_;
}

void ModifyDatabaseInstanceDescriptionRequest::setDatabaseInstanceDescription(const std::string &databaseInstanceDescription) {
  databaseInstanceDescription_ = databaseInstanceDescription;
  setParameter(std::string("DatabaseInstanceDescription"), databaseInstanceDescription);
}

