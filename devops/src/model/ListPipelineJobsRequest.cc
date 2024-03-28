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

#include <alibabacloud/devops/model/ListPipelineJobsRequest.h>

using AlibabaCloud::Devops::Model::ListPipelineJobsRequest;

ListPipelineJobsRequest::ListPipelineJobsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipeline/[pipelineId]/jobs"};
  setMethod(HttpRequest::Method::Post);
}

ListPipelineJobsRequest::~ListPipelineJobsRequest() {}

std::string ListPipelineJobsRequest::getPipelineId() const {
  return pipelineId_;
}

void ListPipelineJobsRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), pipelineId);
}

std::string ListPipelineJobsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListPipelineJobsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListPipelineJobsRequest::getCategory() const {
  return category_;
}

void ListPipelineJobsRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("category"), category);
}

