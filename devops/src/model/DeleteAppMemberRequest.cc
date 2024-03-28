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

#include <alibabacloud/devops/model/DeleteAppMemberRequest.h>

using AlibabaCloud::Devops::Model::DeleteAppMemberRequest;

DeleteAppMemberRequest::DeleteAppMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/appstack/apps/[appName]/members"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteAppMemberRequest::~DeleteAppMemberRequest() {}

std::string DeleteAppMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteAppMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string DeleteAppMemberRequest::getAppName() const {
  return appName_;
}

void DeleteAppMemberRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("appName"), appName);
}

std::string DeleteAppMemberRequest::getSubjectType() const {
  return subjectType_;
}

void DeleteAppMemberRequest::setSubjectType(const std::string &subjectType) {
  subjectType_ = subjectType;
  setParameter(std::string("subjectType"), subjectType);
}

std::string DeleteAppMemberRequest::getSubjectId() const {
  return subjectId_;
}

void DeleteAppMemberRequest::setSubjectId(const std::string &subjectId) {
  subjectId_ = subjectId;
  setParameter(std::string("subjectId"), subjectId);
}

