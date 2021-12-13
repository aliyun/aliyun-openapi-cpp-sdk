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

#include <alibabacloud/gpdb/model/ModifyParametersRequest.h>

using AlibabaCloud::Gpdb::Model::ModifyParametersRequest;

ModifyParametersRequest::ModifyParametersRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "ModifyParameters") {
  setMethod(HttpRequest::Method::Post);
}

ModifyParametersRequest::~ModifyParametersRequest() {}

bool ModifyParametersRequest::getForceRestartInstance() const {
  return forceRestartInstance_;
}

void ModifyParametersRequest::setForceRestartInstance(bool forceRestartInstance) {
  forceRestartInstance_ = forceRestartInstance;
  setParameter(std::string("ForceRestartInstance"), forceRestartInstance ? "true" : "false");
}

std::string ModifyParametersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyParametersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyParametersRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyParametersRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyParametersRequest::getParameters() const {
  return parameters_;
}

void ModifyParametersRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

