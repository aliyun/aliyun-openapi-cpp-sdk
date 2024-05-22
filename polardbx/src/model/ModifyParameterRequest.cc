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

#include <alibabacloud/polardbx/model/ModifyParameterRequest.h>

using AlibabaCloud::Polardbx::Model::ModifyParameterRequest;

ModifyParameterRequest::ModifyParameterRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "ModifyParameter") {
  setMethod(HttpRequest::Method::Post);
}

ModifyParameterRequest::~ModifyParameterRequest() {}

std::string ModifyParameterRequest::getClientToken() const {
  return clientToken_;
}

void ModifyParameterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyParameterRequest::getRegionId() const {
  return regionId_;
}

void ModifyParameterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyParameterRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyParameterRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyParameterRequest::getParamLevel() const {
  return paramLevel_;
}

void ModifyParameterRequest::setParamLevel(const std::string &paramLevel) {
  paramLevel_ = paramLevel;
  setParameter(std::string("ParamLevel"), paramLevel);
}

std::string ModifyParameterRequest::getParameters() const {
  return parameters_;
}

void ModifyParameterRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

