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

#include <alibabacloud/oceanbasepro/model/ModifyParametersRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyParametersRequest;

ModifyParametersRequest::ModifyParametersRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyParameters") {
  setMethod(HttpRequest::Method::Post);
}

ModifyParametersRequest::~ModifyParametersRequest() {}

std::string ModifyParametersRequest::getDimensionValue() const {
  return dimensionValue_;
}

void ModifyParametersRequest::setDimensionValue(const std::string &dimensionValue) {
  dimensionValue_ = dimensionValue;
  setBodyParameter(std::string("DimensionValue"), dimensionValue);
}

std::string ModifyParametersRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyParametersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyParametersRequest::getDimension() const {
  return dimension_;
}

void ModifyParametersRequest::setDimension(const std::string &dimension) {
  dimension_ = dimension;
  setBodyParameter(std::string("Dimension"), dimension);
}

std::string ModifyParametersRequest::getParameters() const {
  return parameters_;
}

void ModifyParametersRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setBodyParameter(std::string("Parameters"), parameters);
}

