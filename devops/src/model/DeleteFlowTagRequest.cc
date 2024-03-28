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

#include <alibabacloud/devops/model/DeleteFlowTagRequest.h>

using AlibabaCloud::Devops::Model::DeleteFlowTagRequest;

DeleteFlowTagRequest::DeleteFlowTagRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/flow/tags/[id]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteFlowTagRequest::~DeleteFlowTagRequest() {}

std::string DeleteFlowTagRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteFlowTagRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string DeleteFlowTagRequest::getId() const {
  return id_;
}

void DeleteFlowTagRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("id"), id);
}

