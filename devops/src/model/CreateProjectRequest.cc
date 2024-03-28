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

#include <alibabacloud/devops/model/CreateProjectRequest.h>

using AlibabaCloud::Devops::Model::CreateProjectRequest;

CreateProjectRequest::CreateProjectRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/projects/createProject"};
  setMethod(HttpRequest::Method::Post);
}

CreateProjectRequest::~CreateProjectRequest() {}

CreateProjectRequest::body CreateProjectRequest::getBody() const {
  return body_;
}

void CreateProjectRequest::setBody(const CreateProjectRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".templateIdentifier", body.templateIdentifier);
  setBodyParameter(std::string("body") + ".scope", body.scope);
  setBodyParameter(std::string("body") + ".name", body.name);
  setBodyParameter(std::string("body") + ".customCode", body.customCode);
}

std::string CreateProjectRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateProjectRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

