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

#include <alibabacloud/computenestsupplier/model/CreateArtifactRequest.h>

using AlibabaCloud::ComputeNestSupplier::Model::CreateArtifactRequest;

CreateArtifactRequest::CreateArtifactRequest()
    : RpcServiceRequest("computenestsupplier", "2021-05-21", "CreateArtifact") {
  setMethod(HttpRequest::Method::Post);
}

CreateArtifactRequest::~CreateArtifactRequest() {}

std::string CreateArtifactRequest::getDescription() const {
  return description_;
}

void CreateArtifactRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::vector<std::string> CreateArtifactRequest::getSupportRegionIds() const {
  return supportRegionIds_;
}

void CreateArtifactRequest::setSupportRegionIds(const std::vector<std::string> &supportRegionIds) {
  supportRegionIds_ = supportRegionIds;
}

std::string CreateArtifactRequest::getArtifactType() const {
  return artifactType_;
}

void CreateArtifactRequest::setArtifactType(const std::string &artifactType) {
  artifactType_ = artifactType;
  setParameter(std::string("ArtifactType"), artifactType);
}

std::string CreateArtifactRequest::getName() const {
  return name_;
}

void CreateArtifactRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateArtifactRequest::getArtifactId() const {
  return artifactId_;
}

void CreateArtifactRequest::setArtifactId(const std::string &artifactId) {
  artifactId_ = artifactId;
  setParameter(std::string("ArtifactId"), artifactId);
}

std::string CreateArtifactRequest::getArtifactProperty() const {
  return artifactProperty_;
}

void CreateArtifactRequest::setArtifactProperty(const std::string &artifactProperty) {
  artifactProperty_ = artifactProperty;
  setParameter(std::string("ArtifactProperty"), artifactProperty);
}

std::string CreateArtifactRequest::getVersionName() const {
  return versionName_;
}

void CreateArtifactRequest::setVersionName(const std::string &versionName) {
  versionName_ = versionName;
  setParameter(std::string("VersionName"), versionName);
}

