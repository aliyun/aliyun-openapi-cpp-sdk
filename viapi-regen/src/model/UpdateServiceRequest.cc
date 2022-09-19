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

#include <alibabacloud/viapi-regen/model/UpdateServiceRequest.h>

using AlibabaCloud::Viapi_regen::Model::UpdateServiceRequest;

UpdateServiceRequest::UpdateServiceRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "UpdateService") {
  setMethod(HttpRequest::Method::Post);
}

UpdateServiceRequest::~UpdateServiceRequest() {}

std::string UpdateServiceRequest::getDescription() const {
  return description_;
}

void UpdateServiceRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

long UpdateServiceRequest::getId() const {
  return id_;
}

void UpdateServiceRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

std::string UpdateServiceRequest::getAuthorizationType() const {
  return authorizationType_;
}

void UpdateServiceRequest::setAuthorizationType(const std::string &authorizationType) {
  authorizationType_ = authorizationType;
  setBodyParameter(std::string("AuthorizationType"), authorizationType);
}

std::string UpdateServiceRequest::getName() const {
  return name_;
}

void UpdateServiceRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string UpdateServiceRequest::getAuthorizedAccount() const {
  return authorizedAccount_;
}

void UpdateServiceRequest::setAuthorizedAccount(const std::string &authorizedAccount) {
  authorizedAccount_ = authorizedAccount;
  setBodyParameter(std::string("AuthorizedAccount"), authorizedAccount);
}

