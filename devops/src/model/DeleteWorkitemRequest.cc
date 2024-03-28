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

#include <alibabacloud/devops/model/DeleteWorkitemRequest.h>

using AlibabaCloud::Devops::Model::DeleteWorkitemRequest;

DeleteWorkitemRequest::DeleteWorkitemRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitem/delete"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteWorkitemRequest::~DeleteWorkitemRequest() {}

std::string DeleteWorkitemRequest::getIdentifier() const {
  return identifier_;
}

void DeleteWorkitemRequest::setIdentifier(const std::string &identifier) {
  identifier_ = identifier;
  setParameter(std::string("identifier"), identifier);
}

std::string DeleteWorkitemRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteWorkitemRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

