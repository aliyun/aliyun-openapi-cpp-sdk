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

#include <alibabacloud/arms/model/UpdateEnvServiceMonitorRequest.h>

using AlibabaCloud::ARMS::Model::UpdateEnvServiceMonitorRequest;

UpdateEnvServiceMonitorRequest::UpdateEnvServiceMonitorRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateEnvServiceMonitor") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEnvServiceMonitorRequest::~UpdateEnvServiceMonitorRequest() {}

std::string UpdateEnvServiceMonitorRequest::getServiceMonitorName() const {
  return serviceMonitorName_;
}

void UpdateEnvServiceMonitorRequest::setServiceMonitorName(const std::string &serviceMonitorName) {
  serviceMonitorName_ = serviceMonitorName;
  setParameter(std::string("ServiceMonitorName"), serviceMonitorName);
}

bool UpdateEnvServiceMonitorRequest::getDryRun() const {
  return dryRun_;
}

void UpdateEnvServiceMonitorRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateEnvServiceMonitorRequest::getAliyunLang() const {
  return aliyunLang_;
}

void UpdateEnvServiceMonitorRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string UpdateEnvServiceMonitorRequest::getConfigYaml() const {
  return configYaml_;
}

void UpdateEnvServiceMonitorRequest::setConfigYaml(const std::string &configYaml) {
  configYaml_ = configYaml;
  setBodyParameter(std::string("ConfigYaml"), configYaml);
}

std::string UpdateEnvServiceMonitorRequest::getEnvironmentId() const {
  return environmentId_;
}

void UpdateEnvServiceMonitorRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string UpdateEnvServiceMonitorRequest::getRegionId() const {
  return regionId_;
}

void UpdateEnvServiceMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateEnvServiceMonitorRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateEnvServiceMonitorRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

