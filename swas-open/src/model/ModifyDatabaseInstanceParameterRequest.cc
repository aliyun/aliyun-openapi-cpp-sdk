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

#include <alibabacloud/swas-open/model/ModifyDatabaseInstanceParameterRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ModifyDatabaseInstanceParameterRequest;

ModifyDatabaseInstanceParameterRequest::ModifyDatabaseInstanceParameterRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ModifyDatabaseInstanceParameter") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDatabaseInstanceParameterRequest::~ModifyDatabaseInstanceParameterRequest() {}

std::string ModifyDatabaseInstanceParameterRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDatabaseInstanceParameterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDatabaseInstanceParameterRequest::getDatabaseInstanceId() const {
  return databaseInstanceId_;
}

void ModifyDatabaseInstanceParameterRequest::setDatabaseInstanceId(const std::string &databaseInstanceId) {
  databaseInstanceId_ = databaseInstanceId;
  setParameter(std::string("DatabaseInstanceId"), databaseInstanceId);
}

std::string ModifyDatabaseInstanceParameterRequest::getRegionId() const {
  return regionId_;
}

void ModifyDatabaseInstanceParameterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyDatabaseInstanceParameterRequest::getForceRestart() const {
  return forceRestart_;
}

void ModifyDatabaseInstanceParameterRequest::setForceRestart(bool forceRestart) {
  forceRestart_ = forceRestart;
  setParameter(std::string("ForceRestart"), forceRestart ? "true" : "false");
}

std::string ModifyDatabaseInstanceParameterRequest::getParameters() const {
  return parameters_;
}

void ModifyDatabaseInstanceParameterRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

