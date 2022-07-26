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

#include <alibabacloud/oos/model/GetSecretParameterRequest.h>

using AlibabaCloud::Oos::Model::GetSecretParameterRequest;

GetSecretParameterRequest::GetSecretParameterRequest()
    : RpcServiceRequest("oos", "2019-06-01", "GetSecretParameter") {
  setMethod(HttpRequest::Method::Post);
}

GetSecretParameterRequest::~GetSecretParameterRequest() {}

bool GetSecretParameterRequest::getWithDecryption() const {
  return withDecryption_;
}

void GetSecretParameterRequest::setWithDecryption(bool withDecryption) {
  withDecryption_ = withDecryption;
  setParameter(std::string("WithDecryption"), withDecryption ? "true" : "false");
}

int GetSecretParameterRequest::getParameterVersion() const {
  return parameterVersion_;
}

void GetSecretParameterRequest::setParameterVersion(int parameterVersion) {
  parameterVersion_ = parameterVersion;
  setParameter(std::string("ParameterVersion"), std::to_string(parameterVersion));
}

std::string GetSecretParameterRequest::getRegionId() const {
  return regionId_;
}

void GetSecretParameterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetSecretParameterRequest::getName() const {
  return name_;
}

void GetSecretParameterRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

