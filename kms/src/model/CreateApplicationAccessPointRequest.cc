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

#include <alibabacloud/kms/model/CreateApplicationAccessPointRequest.h>

using AlibabaCloud::Kms::Model::CreateApplicationAccessPointRequest;

CreateApplicationAccessPointRequest::CreateApplicationAccessPointRequest()
    : RpcServiceRequest("kms", "2016-01-20", "CreateApplicationAccessPoint") {
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationAccessPointRequest::~CreateApplicationAccessPointRequest() {}

std::string CreateApplicationAccessPointRequest::getPolicies() const {
  return policies_;
}

void CreateApplicationAccessPointRequest::setPolicies(const std::string &policies) {
  policies_ = policies;
  setParameter(std::string("Policies"), policies);
}

std::string CreateApplicationAccessPointRequest::getDescription() const {
  return description_;
}

void CreateApplicationAccessPointRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateApplicationAccessPointRequest::getName() const {
  return name_;
}

void CreateApplicationAccessPointRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateApplicationAccessPointRequest::getAuthenticationMethod() const {
  return authenticationMethod_;
}

void CreateApplicationAccessPointRequest::setAuthenticationMethod(const std::string &authenticationMethod) {
  authenticationMethod_ = authenticationMethod;
  setParameter(std::string("AuthenticationMethod"), authenticationMethod);
}

