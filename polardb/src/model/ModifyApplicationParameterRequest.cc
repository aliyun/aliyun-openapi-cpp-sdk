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

#include <alibabacloud/polardb/model/ModifyApplicationParameterRequest.h>

using AlibabaCloud::Polardb::Model::ModifyApplicationParameterRequest;

ModifyApplicationParameterRequest::ModifyApplicationParameterRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyApplicationParameter") {
  setMethod(HttpRequest::Method::Post);
}

ModifyApplicationParameterRequest::~ModifyApplicationParameterRequest() {}

std::string ModifyApplicationParameterRequest::getParameterTemplateId() const {
  return parameterTemplateId_;
}

void ModifyApplicationParameterRequest::setParameterTemplateId(const std::string &parameterTemplateId) {
  parameterTemplateId_ = parameterTemplateId;
  setParameter(std::string("ParameterTemplateId"), parameterTemplateId);
}

std::string ModifyApplicationParameterRequest::getParameterName() const {
  return parameterName_;
}

void ModifyApplicationParameterRequest::setParameterName(const std::string &parameterName) {
  parameterName_ = parameterName;
  setParameter(std::string("ParameterName"), parameterName);
}

std::string ModifyApplicationParameterRequest::getApplicationId() const {
  return applicationId_;
}

void ModifyApplicationParameterRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string ModifyApplicationParameterRequest::getParameterValue() const {
  return parameterValue_;
}

void ModifyApplicationParameterRequest::setParameterValue(const std::string &parameterValue) {
  parameterValue_ = parameterValue;
  setParameter(std::string("ParameterValue"), parameterValue);
}

std::vector<ModifyApplicationParameterRequest::Parameters> ModifyApplicationParameterRequest::getParameters() const {
  return parameters_;
}

void ModifyApplicationParameterRequest::setParameters(const std::vector<ModifyApplicationParameterRequest::Parameters> &parameters) {
  parameters_ = parameters;
  for(int dep1 = 0; dep1 != parameters.size(); dep1++) {
    setParameter(std::string("Parameters") + "." + std::to_string(dep1 + 1) + ".ParameterValue", parameters[dep1].parameterValue);
    setParameter(std::string("Parameters") + "." + std::to_string(dep1 + 1) + ".ParameterName", parameters[dep1].parameterName);
  }
}

