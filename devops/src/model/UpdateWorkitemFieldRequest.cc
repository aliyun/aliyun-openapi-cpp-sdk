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

#include <alibabacloud/devops/model/UpdateWorkitemFieldRequest.h>

using AlibabaCloud::Devops::Model::UpdateWorkitemFieldRequest;

UpdateWorkitemFieldRequest::UpdateWorkitemFieldRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitems/updateWorkitemField"};
  setMethod(HttpRequest::Method::Post);
}

UpdateWorkitemFieldRequest::~UpdateWorkitemFieldRequest() {}

UpdateWorkitemFieldRequest::body UpdateWorkitemFieldRequest::getBody() const {
  return body_;
}

void UpdateWorkitemFieldRequest::setBody(const UpdateWorkitemFieldRequest::body &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.updateWorkitemPropertyRequest.size(); dep1++) {
    setBodyParameter(std::string("body") + ".updateWorkitemPropertyRequest." + std::to_string(dep1 + 1) + ".fieldIdentifier", body.updateWorkitemPropertyRequest[dep1].fieldIdentifier);
    setBodyParameter(std::string("body") + ".updateWorkitemPropertyRequest." + std::to_string(dep1 + 1) + ".fieldValue", body.updateWorkitemPropertyRequest[dep1].fieldValue);
  }
  setBodyParameter(std::string("body") + ".workitemIdentifier", body.workitemIdentifier);
}

std::string UpdateWorkitemFieldRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateWorkitemFieldRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

