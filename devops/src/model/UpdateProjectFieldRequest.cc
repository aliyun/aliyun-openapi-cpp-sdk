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

#include <alibabacloud/devops/model/UpdateProjectFieldRequest.h>

using AlibabaCloud::Devops::Model::UpdateProjectFieldRequest;

UpdateProjectFieldRequest::UpdateProjectFieldRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/project/[identifier]"};
  setMethod(HttpRequest::Method::Post);
}

UpdateProjectFieldRequest::~UpdateProjectFieldRequest() {}

std::string UpdateProjectFieldRequest::getIdentifier() const {
  return identifier_;
}

void UpdateProjectFieldRequest::setIdentifier(const std::string &identifier) {
  identifier_ = identifier;
  setParameter(std::string("identifier"), identifier);
}

UpdateProjectFieldRequest::body UpdateProjectFieldRequest::getBody() const {
  return body_;
}

void UpdateProjectFieldRequest::setBody(const UpdateProjectFieldRequest::body &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.updateBasicFieldRequestList.size(); dep1++) {
    setBodyParameter(std::string("body") + ".updateBasicFieldRequestList." + std::to_string(dep1 + 1) + ".propertyKey", body.updateBasicFieldRequestList[dep1].propertyKey);
    setBodyParameter(std::string("body") + ".updateBasicFieldRequestList." + std::to_string(dep1 + 1) + ".propertyValue", body.updateBasicFieldRequestList[dep1].propertyValue);
  }
  setBodyParameter(std::string("body") + ".statusIdentifier", body.statusIdentifier);
  for(int dep1 = 0; dep1 != body.updateForOpenApiList.size(); dep1++) {
    setBodyParameter(std::string("body") + ".updateForOpenApiList." + std::to_string(dep1 + 1) + ".fieldIdentifier", body.updateForOpenApiList[dep1].fieldIdentifier);
    setBodyParameter(std::string("body") + ".updateForOpenApiList." + std::to_string(dep1 + 1) + ".value", body.updateForOpenApiList[dep1].value);
  }
}

std::string UpdateProjectFieldRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateProjectFieldRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

