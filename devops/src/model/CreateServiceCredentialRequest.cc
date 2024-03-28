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

#include <alibabacloud/devops/model/CreateServiceCredentialRequest.h>

using AlibabaCloud::Devops::Model::CreateServiceCredentialRequest;

CreateServiceCredentialRequest::CreateServiceCredentialRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/serviceCredentials"};
  setMethod(HttpRequest::Method::Post);
}

CreateServiceCredentialRequest::~CreateServiceCredentialRequest() {}

CreateServiceCredentialRequest::body CreateServiceCredentialRequest::getBody() const {
  return body_;
}

void CreateServiceCredentialRequest::setBody(const CreateServiceCredentialRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".password", body.password);
  setBodyParameter(std::string("body") + ".scope", body.scope);
  setBodyParameter(std::string("body") + ".name", body.name);
  setBodyParameter(std::string("body") + ".type", body.type);
  setBodyParameter(std::string("body") + ".username", body.username);
}

std::string CreateServiceCredentialRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateServiceCredentialRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

