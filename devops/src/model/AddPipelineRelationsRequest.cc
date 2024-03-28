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

#include <alibabacloud/devops/model/AddPipelineRelationsRequest.h>

using AlibabaCloud::Devops::Model::AddPipelineRelationsRequest;

AddPipelineRelationsRequest::AddPipelineRelationsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/[pipelineId]/pipelineRelations"};
  setMethod(HttpRequest::Method::Post);
}

AddPipelineRelationsRequest::~AddPipelineRelationsRequest() {}

std::string AddPipelineRelationsRequest::getRelObjectType() const {
  return relObjectType_;
}

void AddPipelineRelationsRequest::setRelObjectType(const std::string &relObjectType) {
  relObjectType_ = relObjectType;
  setParameter(std::string("relObjectType"), relObjectType);
}

std::string AddPipelineRelationsRequest::getRelObjectIds() const {
  return relObjectIds_;
}

void AddPipelineRelationsRequest::setRelObjectIds(const std::string &relObjectIds) {
  relObjectIds_ = relObjectIds;
  setParameter(std::string("relObjectIds"), relObjectIds);
}

long AddPipelineRelationsRequest::getPipelineId() const {
  return pipelineId_;
}

void AddPipelineRelationsRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), std::to_string(pipelineId));
}

std::string AddPipelineRelationsRequest::getOrganizationId() const {
  return organizationId_;
}

void AddPipelineRelationsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

