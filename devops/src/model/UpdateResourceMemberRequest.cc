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

#include <alibabacloud/devops/model/UpdateResourceMemberRequest.h>

using AlibabaCloud::Devops::Model::UpdateResourceMemberRequest;

UpdateResourceMemberRequest::UpdateResourceMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/[resourceType]/[resourceId]/members/[accountId]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateResourceMemberRequest::~UpdateResourceMemberRequest() {}

long UpdateResourceMemberRequest::getResourceId() const {
  return resourceId_;
}

void UpdateResourceMemberRequest::setResourceId(long resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("resourceId"), std::to_string(resourceId));
}

std::string UpdateResourceMemberRequest::getRoleName() const {
  return roleName_;
}

void UpdateResourceMemberRequest::setRoleName(const std::string &roleName) {
  roleName_ = roleName;
  setBodyParameter(std::string("roleName"), roleName);
}

std::string UpdateResourceMemberRequest::getResourceType() const {
  return resourceType_;
}

void UpdateResourceMemberRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("resourceType"), resourceType);
}

std::string UpdateResourceMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateResourceMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string UpdateResourceMemberRequest::getAccountId() const {
  return accountId_;
}

void UpdateResourceMemberRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("accountId"), accountId);
}

