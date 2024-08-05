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

#include <alibabacloud/arms/model/UpdateEnvPodMonitorRequest.h>

using AlibabaCloud::ARMS::Model::UpdateEnvPodMonitorRequest;

UpdateEnvPodMonitorRequest::UpdateEnvPodMonitorRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateEnvPodMonitor") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEnvPodMonitorRequest::~UpdateEnvPodMonitorRequest() {}

bool UpdateEnvPodMonitorRequest::getDryRun() const {
  return dryRun_;
}

void UpdateEnvPodMonitorRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateEnvPodMonitorRequest::getAliyunLang() const {
  return aliyunLang_;
}

void UpdateEnvPodMonitorRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string UpdateEnvPodMonitorRequest::getConfigYaml() const {
  return configYaml_;
}

void UpdateEnvPodMonitorRequest::setConfigYaml(const std::string &configYaml) {
  configYaml_ = configYaml;
  setBodyParameter(std::string("ConfigYaml"), configYaml);
}

std::string UpdateEnvPodMonitorRequest::getPodMonitorName() const {
  return podMonitorName_;
}

void UpdateEnvPodMonitorRequest::setPodMonitorName(const std::string &podMonitorName) {
  podMonitorName_ = podMonitorName;
  setParameter(std::string("PodMonitorName"), podMonitorName);
}

std::string UpdateEnvPodMonitorRequest::getEnvironmentId() const {
  return environmentId_;
}

void UpdateEnvPodMonitorRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string UpdateEnvPodMonitorRequest::getRegionId() const {
  return regionId_;
}

void UpdateEnvPodMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateEnvPodMonitorRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateEnvPodMonitorRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

