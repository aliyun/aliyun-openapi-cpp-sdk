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

#include <alibabacloud/quickbi-public/model/AddWorksAuthorizationRequest.h>

using AlibabaCloud::Quickbi_public::Model::AddWorksAuthorizationRequest;

AddWorksAuthorizationRequest::AddWorksAuthorizationRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "AddWorksAuthorization") {
  setMethod(HttpRequest::Method::Post);
}

AddWorksAuthorizationRequest::~AddWorksAuthorizationRequest() {}

std::string AddWorksAuthorizationRequest::getAccessPoint() const {
  return accessPoint_;
}

void AddWorksAuthorizationRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string AddWorksAuthorizationRequest::getAuthorizedId() const {
  return authorizedId_;
}

void AddWorksAuthorizationRequest::setAuthorizedId(const std::string &authorizedId) {
  authorizedId_ = authorizedId;
  setParameter(std::string("AuthorizedId"), authorizedId);
}

int AddWorksAuthorizationRequest::getAuthPoints() const {
  return authPoints_;
}

void AddWorksAuthorizationRequest::setAuthPoints(int authPoints) {
  authPoints_ = authPoints;
  setParameter(std::string("AuthPoints"), std::to_string(authPoints));
}

int AddWorksAuthorizationRequest::getAuthorizeScope() const {
  return authorizeScope_;
}

void AddWorksAuthorizationRequest::setAuthorizeScope(int authorizeScope) {
  authorizeScope_ = authorizeScope;
  setParameter(std::string("AuthorizeScope"), std::to_string(authorizeScope));
}

std::string AddWorksAuthorizationRequest::getResourceId() const {
  return resourceId_;
}

void AddWorksAuthorizationRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string AddWorksAuthorizationRequest::getSignType() const {
  return signType_;
}

void AddWorksAuthorizationRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string AddWorksAuthorizationRequest::getResourceType() const {
  return resourceType_;
}

void AddWorksAuthorizationRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string AddWorksAuthorizationRequest::getExpireDay() const {
  return expireDay_;
}

void AddWorksAuthorizationRequest::setExpireDay(const std::string &expireDay) {
  expireDay_ = expireDay;
  setParameter(std::string("ExpireDay"), expireDay);
}

