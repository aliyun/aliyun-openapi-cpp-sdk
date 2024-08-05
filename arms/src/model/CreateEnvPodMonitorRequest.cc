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

#include <alibabacloud/arms/model/CreateEnvPodMonitorRequest.h>

using AlibabaCloud::ARMS::Model::CreateEnvPodMonitorRequest;

CreateEnvPodMonitorRequest::CreateEnvPodMonitorRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateEnvPodMonitor") {
  setMethod(HttpRequest::Method::Post);
}

CreateEnvPodMonitorRequest::~CreateEnvPodMonitorRequest() {}

bool CreateEnvPodMonitorRequest::getDryRun() const {
  return dryRun_;
}

void CreateEnvPodMonitorRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateEnvPodMonitorRequest::getAliyunLang() const {
  return aliyunLang_;
}

void CreateEnvPodMonitorRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string CreateEnvPodMonitorRequest::getConfigYaml() const {
  return configYaml_;
}

void CreateEnvPodMonitorRequest::setConfigYaml(const std::string &configYaml) {
  configYaml_ = configYaml;
  setBodyParameter(std::string("ConfigYaml"), configYaml);
}

std::string CreateEnvPodMonitorRequest::getEnvironmentId() const {
  return environmentId_;
}

void CreateEnvPodMonitorRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string CreateEnvPodMonitorRequest::getRegionId() const {
  return regionId_;
}

void CreateEnvPodMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

