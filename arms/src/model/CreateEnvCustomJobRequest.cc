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

#include <alibabacloud/arms/model/CreateEnvCustomJobRequest.h>

using AlibabaCloud::ARMS::Model::CreateEnvCustomJobRequest;

CreateEnvCustomJobRequest::CreateEnvCustomJobRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateEnvCustomJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateEnvCustomJobRequest::~CreateEnvCustomJobRequest() {}

std::string CreateEnvCustomJobRequest::getAliyunLang() const {
  return aliyunLang_;
}

void CreateEnvCustomJobRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string CreateEnvCustomJobRequest::getConfigYaml() const {
  return configYaml_;
}

void CreateEnvCustomJobRequest::setConfigYaml(const std::string &configYaml) {
  configYaml_ = configYaml;
  setBodyParameter(std::string("ConfigYaml"), configYaml);
}

std::string CreateEnvCustomJobRequest::getEnvironmentId() const {
  return environmentId_;
}

void CreateEnvCustomJobRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string CreateEnvCustomJobRequest::getRegionId() const {
  return regionId_;
}

void CreateEnvCustomJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateEnvCustomJobRequest::getCustomJobName() const {
  return customJobName_;
}

void CreateEnvCustomJobRequest::setCustomJobName(const std::string &customJobName) {
  customJobName_ = customJobName;
  setParameter(std::string("CustomJobName"), customJobName);
}

