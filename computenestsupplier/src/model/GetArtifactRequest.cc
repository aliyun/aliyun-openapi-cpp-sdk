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

#include <alibabacloud/computenestsupplier/model/GetArtifactRequest.h>

using AlibabaCloud::ComputeNestSupplier::Model::GetArtifactRequest;

GetArtifactRequest::GetArtifactRequest()
    : RpcServiceRequest("computenestsupplier", "2021-05-21", "GetArtifact") {
  setMethod(HttpRequest::Method::Post);
}

GetArtifactRequest::~GetArtifactRequest() {}

std::string GetArtifactRequest::getArtifactVersion() const {
  return artifactVersion_;
}

void GetArtifactRequest::setArtifactVersion(const std::string &artifactVersion) {
  artifactVersion_ = artifactVersion;
  setParameter(std::string("ArtifactVersion"), artifactVersion);
}

std::string GetArtifactRequest::getArtifactName() const {
  return artifactName_;
}

void GetArtifactRequest::setArtifactName(const std::string &artifactName) {
  artifactName_ = artifactName;
  setParameter(std::string("ArtifactName"), artifactName);
}

std::string GetArtifactRequest::getArtifactId() const {
  return artifactId_;
}

void GetArtifactRequest::setArtifactId(const std::string &artifactId) {
  artifactId_ = artifactId;
  setParameter(std::string("ArtifactId"), artifactId);
}

