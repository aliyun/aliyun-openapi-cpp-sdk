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

#include <alibabacloud/arms/model/DeleteAddonReleaseRequest.h>

using AlibabaCloud::ARMS::Model::DeleteAddonReleaseRequest;

DeleteAddonReleaseRequest::DeleteAddonReleaseRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeleteAddonRelease") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAddonReleaseRequest::~DeleteAddonReleaseRequest() {}

std::string DeleteAddonReleaseRequest::getReleaseName() const {
  return releaseName_;
}

void DeleteAddonReleaseRequest::setReleaseName(const std::string &releaseName) {
  releaseName_ = releaseName;
  setParameter(std::string("ReleaseName"), releaseName);
}

std::string DeleteAddonReleaseRequest::getEnvironmentId() const {
  return environmentId_;
}

void DeleteAddonReleaseRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string DeleteAddonReleaseRequest::getRegionId() const {
  return regionId_;
}

void DeleteAddonReleaseRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteAddonReleaseRequest::getAddonName() const {
  return addonName_;
}

void DeleteAddonReleaseRequest::setAddonName(const std::string &addonName) {
  addonName_ = addonName;
  setParameter(std::string("AddonName"), addonName);
}

bool DeleteAddonReleaseRequest::getForce() const {
  return force_;
}

void DeleteAddonReleaseRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

