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

#include <alibabacloud/devops/model/UpdatePipelineBaseInfoRequest.h>

using AlibabaCloud::Devops::Model::UpdatePipelineBaseInfoRequest;

UpdatePipelineBaseInfoRequest::UpdatePipelineBaseInfoRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipelines/[pipelineId]/baseInfo"};
  setMethod(HttpRequest::Method::Put);
}

UpdatePipelineBaseInfoRequest::~UpdatePipelineBaseInfoRequest() {}

std::string UpdatePipelineBaseInfoRequest::getPipelineName() const {
  return pipelineName_;
}

void UpdatePipelineBaseInfoRequest::setPipelineName(const std::string &pipelineName) {
  pipelineName_ = pipelineName;
  setParameter(std::string("pipelineName"), pipelineName);
}

long UpdatePipelineBaseInfoRequest::getEnvId() const {
  return envId_;
}

void UpdatePipelineBaseInfoRequest::setEnvId(long envId) {
  envId_ = envId;
  setParameter(std::string("envId"), std::to_string(envId));
}

std::string UpdatePipelineBaseInfoRequest::getPipelineId() const {
  return pipelineId_;
}

void UpdatePipelineBaseInfoRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), pipelineId);
}

std::string UpdatePipelineBaseInfoRequest::getTagList() const {
  return tagList_;
}

void UpdatePipelineBaseInfoRequest::setTagList(const std::string &tagList) {
  tagList_ = tagList;
  setParameter(std::string("tagList"), tagList);
}

std::string UpdatePipelineBaseInfoRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdatePipelineBaseInfoRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

