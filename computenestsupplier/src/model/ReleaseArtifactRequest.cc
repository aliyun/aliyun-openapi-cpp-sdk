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

#include <alibabacloud/computenestsupplier/model/ReleaseArtifactRequest.h>

using AlibabaCloud::ComputeNestSupplier::Model::ReleaseArtifactRequest;

ReleaseArtifactRequest::ReleaseArtifactRequest()
    : RpcServiceRequest("computenestsupplier", "2021-05-21", "ReleaseArtifact") {
  setMethod(HttpRequest::Method::Post);
}

ReleaseArtifactRequest::~ReleaseArtifactRequest() {}

std::string ReleaseArtifactRequest::getArtifactId() const {
  return artifactId_;
}

void ReleaseArtifactRequest::setArtifactId(const std::string &artifactId) {
  artifactId_ = artifactId;
  setParameter(std::string("ArtifactId"), artifactId);
}

