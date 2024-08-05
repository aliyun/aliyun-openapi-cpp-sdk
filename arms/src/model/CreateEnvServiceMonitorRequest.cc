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

#include <alibabacloud/arms/model/CreateEnvServiceMonitorRequest.h>

using AlibabaCloud::ARMS::Model::CreateEnvServiceMonitorRequest;

CreateEnvServiceMonitorRequest::CreateEnvServiceMonitorRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateEnvServiceMonitor") {
  setMethod(HttpRequest::Method::Post);
}

CreateEnvServiceMonitorRequest::~CreateEnvServiceMonitorRequest() {}

bool CreateEnvServiceMonitorRequest::getDryRun() const {
  return dryRun_;
}

void CreateEnvServiceMonitorRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateEnvServiceMonitorRequest::getAliyunLang() const {
  return aliyunLang_;
}

void CreateEnvServiceMonitorRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string CreateEnvServiceMonitorRequest::getConfigYaml() const {
  return configYaml_;
}

void CreateEnvServiceMonitorRequest::setConfigYaml(const std::string &configYaml) {
  configYaml_ = configYaml;
  setBodyParameter(std::string("ConfigYaml"), configYaml);
}

std::string CreateEnvServiceMonitorRequest::getEnvironmentId() const {
  return environmentId_;
}

void CreateEnvServiceMonitorRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string CreateEnvServiceMonitorRequest::getRegionId() const {
  return regionId_;
}

void CreateEnvServiceMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

