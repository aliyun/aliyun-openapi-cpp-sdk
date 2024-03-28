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

#include <alibabacloud/devops/model/GetWorkitemRelationsRequest.h>

using AlibabaCloud::Devops::Model::GetWorkitemRelationsRequest;

GetWorkitemRelationsRequest::GetWorkitemRelationsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitems/[workitemId]/getRelations"};
  setMethod(HttpRequest::Method::Get);
}

GetWorkitemRelationsRequest::~GetWorkitemRelationsRequest() {}

std::string GetWorkitemRelationsRequest::getOrganizationId() const {
  return organizationId_;
}

void GetWorkitemRelationsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetWorkitemRelationsRequest::getWorkitemId() const {
  return workitemId_;
}

void GetWorkitemRelationsRequest::setWorkitemId(const std::string &workitemId) {
  workitemId_ = workitemId;
  setParameter(std::string("workitemId"), workitemId);
}

std::string GetWorkitemRelationsRequest::getRelationType() const {
  return relationType_;
}

void GetWorkitemRelationsRequest::setRelationType(const std::string &relationType) {
  relationType_ = relationType;
  setParameter(std::string("relationType"), relationType);
}

