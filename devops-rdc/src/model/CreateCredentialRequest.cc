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

#include <alibabacloud/devops-rdc/model/CreateCredentialRequest.h>

using AlibabaCloud::Devops_rdc::Model::CreateCredentialRequest;

CreateCredentialRequest::CreateCredentialRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "CreateCredential") {
  setMethod(HttpRequest::Method::Post);
}

CreateCredentialRequest::~CreateCredentialRequest() {}

std::string CreateCredentialRequest::getType() const {
  return type_;
}

void CreateCredentialRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string CreateCredentialRequest::getUserPk() const {
  return userPk_;
}

void CreateCredentialRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string CreateCredentialRequest::getOrgId() const {
  return orgId_;
}

void CreateCredentialRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

std::string CreateCredentialRequest::getPassword() const {
  return password_;
}

void CreateCredentialRequest::setPassword(const std::string &password) {
  password_ = password;
  setBodyParameter(std::string("Password"), password);
}

std::string CreateCredentialRequest::getName() const {
  return name_;
}

void CreateCredentialRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateCredentialRequest::getUserName() const {
  return userName_;
}

void CreateCredentialRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

