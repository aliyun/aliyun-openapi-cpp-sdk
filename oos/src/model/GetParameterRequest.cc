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

#include <alibabacloud/oos/model/GetParameterRequest.h>

using AlibabaCloud::Oos::Model::GetParameterRequest;

GetParameterRequest::GetParameterRequest()
    : RpcServiceRequest("oos", "2019-06-01", "GetParameter") {
  setMethod(HttpRequest::Method::Post);
}

GetParameterRequest::~GetParameterRequest() {}

std::string GetParameterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void GetParameterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int GetParameterRequest::getParameterVersion() const {
  return parameterVersion_;
}

void GetParameterRequest::setParameterVersion(int parameterVersion) {
  parameterVersion_ = parameterVersion;
  setParameter(std::string("ParameterVersion"), std::to_string(parameterVersion));
}

std::string GetParameterRequest::getRegionId() const {
  return regionId_;
}

void GetParameterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetParameterRequest::getName() const {
  return name_;
}

void GetParameterRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

