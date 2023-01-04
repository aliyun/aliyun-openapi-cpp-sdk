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

#include <alibabacloud/computenestsupplier/model/UpdateArtifactRequest.h>

using AlibabaCloud::ComputeNestSupplier::Model::UpdateArtifactRequest;

UpdateArtifactRequest::UpdateArtifactRequest()
    : RpcServiceRequest("computenestsupplier", "2021-05-21", "UpdateArtifact") {
  setMethod(HttpRequest::Method::Post);
}

UpdateArtifactRequest::~UpdateArtifactRequest() {}

std::string UpdateArtifactRequest::getDescription() const {
  return description_;
}

void UpdateArtifactRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::vector<std::string> UpdateArtifactRequest::getSupportRegionIds() const {
  return supportRegionIds_;
}

void UpdateArtifactRequest::setSupportRegionIds(const std::vector<std::string> &supportRegionIds) {
  supportRegionIds_ = supportRegionIds;
}

std::string UpdateArtifactRequest::getArtifactId() const {
  return artifactId_;
}

void UpdateArtifactRequest::setArtifactId(const std::string &artifactId) {
  artifactId_ = artifactId;
  setParameter(std::string("ArtifactId"), artifactId);
}

std::string UpdateArtifactRequest::getArtifactProperty() const {
  return artifactProperty_;
}

void UpdateArtifactRequest::setArtifactProperty(const std::string &artifactProperty) {
  artifactProperty_ = artifactProperty;
  setParameter(std::string("ArtifactProperty"), artifactProperty);
}

std::string UpdateArtifactRequest::getVersionName() const {
  return versionName_;
}

void UpdateArtifactRequest::setVersionName(const std::string &versionName) {
  versionName_ = versionName;
  setParameter(std::string("VersionName"), versionName);
}

