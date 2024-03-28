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

#include <alibabacloud/devops/model/CreateResourceMemberRequest.h>

using AlibabaCloud::Devops::Model::CreateResourceMemberRequest;

CreateResourceMemberRequest::CreateResourceMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/[resourceType]/[resourceId]/members"};
  setMethod(HttpRequest::Method::Post);
}

CreateResourceMemberRequest::~CreateResourceMemberRequest() {}

long CreateResourceMemberRequest::getResourceId() const {
  return resourceId_;
}

void CreateResourceMemberRequest::setResourceId(long resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("resourceId"), std::to_string(resourceId));
}

std::string CreateResourceMemberRequest::getRoleName() const {
  return roleName_;
}

void CreateResourceMemberRequest::setRoleName(const std::string &roleName) {
  roleName_ = roleName;
  setBodyParameter(std::string("roleName"), roleName);
}

std::string CreateResourceMemberRequest::getResourceType() const {
  return resourceType_;
}

void CreateResourceMemberRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("resourceType"), resourceType);
}

std::string CreateResourceMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateResourceMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string CreateResourceMemberRequest::getAccountId() const {
  return accountId_;
}

void CreateResourceMemberRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("accountId"), accountId);
}

