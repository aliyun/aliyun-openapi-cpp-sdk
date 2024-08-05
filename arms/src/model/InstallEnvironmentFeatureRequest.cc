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

#include <alibabacloud/arms/model/InstallEnvironmentFeatureRequest.h>

using AlibabaCloud::ARMS::Model::InstallEnvironmentFeatureRequest;

InstallEnvironmentFeatureRequest::InstallEnvironmentFeatureRequest()
    : RpcServiceRequest("arms", "2019-08-08", "InstallEnvironmentFeature") {
  setMethod(HttpRequest::Method::Post);
}

InstallEnvironmentFeatureRequest::~InstallEnvironmentFeatureRequest() {}

std::string InstallEnvironmentFeatureRequest::getAliyunLang() const {
  return aliyunLang_;
}

void InstallEnvironmentFeatureRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string InstallEnvironmentFeatureRequest::getFeatureName() const {
  return featureName_;
}

void InstallEnvironmentFeatureRequest::setFeatureName(const std::string &featureName) {
  featureName_ = featureName;
  setParameter(std::string("FeatureName"), featureName);
}

std::string InstallEnvironmentFeatureRequest::getEnvironmentId() const {
  return environmentId_;
}

void InstallEnvironmentFeatureRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string InstallEnvironmentFeatureRequest::getFeatureVersion() const {
  return featureVersion_;
}

void InstallEnvironmentFeatureRequest::setFeatureVersion(const std::string &featureVersion) {
  featureVersion_ = featureVersion;
  setParameter(std::string("FeatureVersion"), featureVersion);
}

std::string InstallEnvironmentFeatureRequest::getRegionId() const {
  return regionId_;
}

void InstallEnvironmentFeatureRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string InstallEnvironmentFeatureRequest::getRegion() const {
  return region_;
}

void InstallEnvironmentFeatureRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string InstallEnvironmentFeatureRequest::getConfig() const {
  return config_;
}

void InstallEnvironmentFeatureRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

