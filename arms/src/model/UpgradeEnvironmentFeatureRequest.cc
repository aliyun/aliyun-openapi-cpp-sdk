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

#include <alibabacloud/arms/model/UpgradeEnvironmentFeatureRequest.h>

using AlibabaCloud::ARMS::Model::UpgradeEnvironmentFeatureRequest;

UpgradeEnvironmentFeatureRequest::UpgradeEnvironmentFeatureRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpgradeEnvironmentFeature") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeEnvironmentFeatureRequest::~UpgradeEnvironmentFeatureRequest() {}

std::string UpgradeEnvironmentFeatureRequest::getAliyunLang() const {
  return aliyunLang_;
}

void UpgradeEnvironmentFeatureRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string UpgradeEnvironmentFeatureRequest::getValues() const {
  return values_;
}

void UpgradeEnvironmentFeatureRequest::setValues(const std::string &values) {
  values_ = values;
  setParameter(std::string("Values"), values);
}

std::string UpgradeEnvironmentFeatureRequest::getFeatureName() const {
  return featureName_;
}

void UpgradeEnvironmentFeatureRequest::setFeatureName(const std::string &featureName) {
  featureName_ = featureName;
  setParameter(std::string("FeatureName"), featureName);
}

std::string UpgradeEnvironmentFeatureRequest::getEnvironmentId() const {
  return environmentId_;
}

void UpgradeEnvironmentFeatureRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string UpgradeEnvironmentFeatureRequest::getFeatureVersion() const {
  return featureVersion_;
}

void UpgradeEnvironmentFeatureRequest::setFeatureVersion(const std::string &featureVersion) {
  featureVersion_ = featureVersion;
  setParameter(std::string("FeatureVersion"), featureVersion);
}

std::string UpgradeEnvironmentFeatureRequest::getRegionId() const {
  return regionId_;
}

void UpgradeEnvironmentFeatureRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

