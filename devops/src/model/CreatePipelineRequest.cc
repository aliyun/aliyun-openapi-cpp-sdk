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

#include <alibabacloud/devops/model/CreatePipelineRequest.h>

using AlibabaCloud::Devops::Model::CreatePipelineRequest;

CreatePipelineRequest::CreatePipelineRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipelines"};
  setMethod(HttpRequest::Method::Post);
}

CreatePipelineRequest::~CreatePipelineRequest() {}

std::string CreatePipelineRequest::getContent() const {
  return content_;
}

void CreatePipelineRequest::setContent(const std::string &content) {
  content_ = content;
  setBodyParameter(std::string("content"), content);
}

std::string CreatePipelineRequest::getOrganizationId() const {
  return organizationId_;
}

void CreatePipelineRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreatePipelineRequest::getName() const {
  return name_;
}

void CreatePipelineRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("name"), name);
}

