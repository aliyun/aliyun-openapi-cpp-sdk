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

#include <alibabacloud/arms/model/UpdateEnvironmentRequest.h>

using AlibabaCloud::ARMS::Model::UpdateEnvironmentRequest;

UpdateEnvironmentRequest::UpdateEnvironmentRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateEnvironment") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEnvironmentRequest::~UpdateEnvironmentRequest() {}

std::string UpdateEnvironmentRequest::getAliyunLang() const {
  return aliyunLang_;
}

void UpdateEnvironmentRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string UpdateEnvironmentRequest::getEnvironmentName() const {
  return environmentName_;
}

void UpdateEnvironmentRequest::setEnvironmentName(const std::string &environmentName) {
  environmentName_ = environmentName;
  setParameter(std::string("EnvironmentName"), environmentName);
}

std::string UpdateEnvironmentRequest::getEnvironmentId() const {
  return environmentId_;
}

void UpdateEnvironmentRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string UpdateEnvironmentRequest::getRegionId() const {
  return regionId_;
}

void UpdateEnvironmentRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateEnvironmentRequest::getFeePackage() const {
  return feePackage_;
}

void UpdateEnvironmentRequest::setFeePackage(const std::string &feePackage) {
  feePackage_ = feePackage;
  setParameter(std::string("FeePackage"), feePackage);
}

