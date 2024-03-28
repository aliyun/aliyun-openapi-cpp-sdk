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

#include <alibabacloud/devops/model/GetPipelineArtifactUrlRequest.h>

using AlibabaCloud::Devops::Model::GetPipelineArtifactUrlRequest;

GetPipelineArtifactUrlRequest::GetPipelineArtifactUrlRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipeline/getArtifactDownloadUrl"};
  setMethod(HttpRequest::Method::Post);
}

GetPipelineArtifactUrlRequest::~GetPipelineArtifactUrlRequest() {}

std::string GetPipelineArtifactUrlRequest::getOrganizationId() const {
  return organizationId_;
}

void GetPipelineArtifactUrlRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetPipelineArtifactUrlRequest::getFileName() const {
  return fileName_;
}

void GetPipelineArtifactUrlRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("fileName"), fileName);
}

std::string GetPipelineArtifactUrlRequest::getFilePath() const {
  return filePath_;
}

void GetPipelineArtifactUrlRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setParameter(std::string("filePath"), filePath);
}

