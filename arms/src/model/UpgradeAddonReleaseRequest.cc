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

#include <alibabacloud/arms/model/UpgradeAddonReleaseRequest.h>

using AlibabaCloud::ARMS::Model::UpgradeAddonReleaseRequest;

UpgradeAddonReleaseRequest::UpgradeAddonReleaseRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpgradeAddonRelease") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeAddonReleaseRequest::~UpgradeAddonReleaseRequest() {}

std::string UpgradeAddonReleaseRequest::getAddonVersion() const {
  return addonVersion_;
}

void UpgradeAddonReleaseRequest::setAddonVersion(const std::string &addonVersion) {
  addonVersion_ = addonVersion;
  setParameter(std::string("AddonVersion"), addonVersion);
}

bool UpgradeAddonReleaseRequest::getDryRun() const {
  return dryRun_;
}

void UpgradeAddonReleaseRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpgradeAddonReleaseRequest::getValues() const {
  return values_;
}

void UpgradeAddonReleaseRequest::setValues(const std::string &values) {
  values_ = values;
  setParameter(std::string("Values"), values);
}

std::string UpgradeAddonReleaseRequest::getReleaseName() const {
  return releaseName_;
}

void UpgradeAddonReleaseRequest::setReleaseName(const std::string &releaseName) {
  releaseName_ = releaseName;
  setParameter(std::string("ReleaseName"), releaseName);
}

std::string UpgradeAddonReleaseRequest::getEnvironmentId() const {
  return environmentId_;
}

void UpgradeAddonReleaseRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string UpgradeAddonReleaseRequest::getRegionId() const {
  return regionId_;
}

void UpgradeAddonReleaseRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

