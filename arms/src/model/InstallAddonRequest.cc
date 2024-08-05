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

#include <alibabacloud/arms/model/InstallAddonRequest.h>

using AlibabaCloud::ARMS::Model::InstallAddonRequest;

InstallAddonRequest::InstallAddonRequest()
    : RpcServiceRequest("arms", "2019-08-08", "InstallAddon") {
  setMethod(HttpRequest::Method::Post);
}

InstallAddonRequest::~InstallAddonRequest() {}

std::string InstallAddonRequest::getAddonVersion() const {
  return addonVersion_;
}

void InstallAddonRequest::setAddonVersion(const std::string &addonVersion) {
  addonVersion_ = addonVersion;
  setParameter(std::string("AddonVersion"), addonVersion);
}

bool InstallAddonRequest::getDryRun() const {
  return dryRun_;
}

void InstallAddonRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string InstallAddonRequest::getAliyunLang() const {
  return aliyunLang_;
}

void InstallAddonRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string InstallAddonRequest::getValues() const {
  return values_;
}

void InstallAddonRequest::setValues(const std::string &values) {
  values_ = values;
  setParameter(std::string("Values"), values);
}

std::string InstallAddonRequest::getReleaseName() const {
  return releaseName_;
}

void InstallAddonRequest::setReleaseName(const std::string &releaseName) {
  releaseName_ = releaseName;
  setParameter(std::string("ReleaseName"), releaseName);
}

std::string InstallAddonRequest::getEnvironmentId() const {
  return environmentId_;
}

void InstallAddonRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string InstallAddonRequest::getRegionId() const {
  return regionId_;
}

void InstallAddonRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string InstallAddonRequest::getName() const {
  return name_;
}

void InstallAddonRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

