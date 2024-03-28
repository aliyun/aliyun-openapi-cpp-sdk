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

#include <alibabacloud/devops/model/CreateServiceConnectionRequest.h>

using AlibabaCloud::Devops::Model::CreateServiceConnectionRequest;

CreateServiceConnectionRequest::CreateServiceConnectionRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/createServiceConnection"};
  setMethod(HttpRequest::Method::Post);
}

CreateServiceConnectionRequest::~CreateServiceConnectionRequest() {}

CreateServiceConnectionRequest::body CreateServiceConnectionRequest::getBody() const {
  return body_;
}

void CreateServiceConnectionRequest::setBody(const CreateServiceConnectionRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".serviceAuthId", std::to_string(body.serviceAuthId));
  setBodyParameter(std::string("body") + ".scope", body.scope);
  setBodyParameter(std::string("body") + ".connectionName", body.connectionName);
  setBodyParameter(std::string("body") + ".connectionType", body.connectionType);
  setBodyParameter(std::string("body") + ".authType", body.authType);
}

std::string CreateServiceConnectionRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateServiceConnectionRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

