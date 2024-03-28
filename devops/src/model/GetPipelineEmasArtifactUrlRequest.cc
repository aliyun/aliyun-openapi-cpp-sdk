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

#include <alibabacloud/devops/model/GetPipelineEmasArtifactUrlRequest.h>

using AlibabaCloud::Devops::Model::GetPipelineEmasArtifactUrlRequest;

GetPipelineEmasArtifactUrlRequest::GetPipelineEmasArtifactUrlRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipeline/[pipelineId]/pipelineRun/[pipelineRunId]/emas/artifact/[emasJobInstanceId]/[md5]"};
  setMethod(HttpRequest::Method::Post);
}

GetPipelineEmasArtifactUrlRequest::~GetPipelineEmasArtifactUrlRequest() {}

long GetPipelineEmasArtifactUrlRequest::getServiceConnectionId() const {
  return serviceConnectionId_;
}

void GetPipelineEmasArtifactUrlRequest::setServiceConnectionId(long serviceConnectionId) {
  serviceConnectionId_ = serviceConnectionId;
  setParameter(std::string("serviceConnectionId"), std::to_string(serviceConnectionId));
}

std::string GetPipelineEmasArtifactUrlRequest::getEmasJobInstanceId() const {
  return emasJobInstanceId_;
}

void GetPipelineEmasArtifactUrlRequest::setEmasJobInstanceId(const std::string &emasJobInstanceId) {
  emasJobInstanceId_ = emasJobInstanceId;
  setParameter(std::string("emasJobInstanceId"), emasJobInstanceId);
}

long GetPipelineEmasArtifactUrlRequest::getPipelineId() const {
  return pipelineId_;
}

void GetPipelineEmasArtifactUrlRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), std::to_string(pipelineId));
}

std::string GetPipelineEmasArtifactUrlRequest::getOrganizationId() const {
  return organizationId_;
}

void GetPipelineEmasArtifactUrlRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long GetPipelineEmasArtifactUrlRequest::getPipelineRunId() const {
  return pipelineRunId_;
}

void GetPipelineEmasArtifactUrlRequest::setPipelineRunId(long pipelineRunId) {
  pipelineRunId_ = pipelineRunId;
  setParameter(std::string("pipelineRunId"), std::to_string(pipelineRunId));
}

std::string GetPipelineEmasArtifactUrlRequest::getMd5() const {
  return md5_;
}

void GetPipelineEmasArtifactUrlRequest::setMd5(const std::string &md5) {
  md5_ = md5;
  setParameter(std::string("md5"), md5);
}

