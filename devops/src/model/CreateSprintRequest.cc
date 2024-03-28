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

#include <alibabacloud/devops/model/CreateSprintRequest.h>

using AlibabaCloud::Devops::Model::CreateSprintRequest;

CreateSprintRequest::CreateSprintRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/sprints/create"};
  setMethod(HttpRequest::Method::Post);
}

CreateSprintRequest::~CreateSprintRequest() {}

CreateSprintRequest::body CreateSprintRequest::getBody() const {
  return body_;
}

void CreateSprintRequest::setBody(const CreateSprintRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".endDate", body.endDate);
  for(int dep1 = 0; dep1 != body.staffIds.size(); dep1++) {
    setBodyParameter(std::string("body") + ".staffIds." + std::to_string(dep1 + 1), body.staffIds[dep1]);
  }
  setBodyParameter(std::string("body") + ".name", body.name);
  setBodyParameter(std::string("body") + ".spaceIdentifier", body.spaceIdentifier);
  setBodyParameter(std::string("body") + ".startDate", body.startDate);
}

std::string CreateSprintRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateSprintRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

