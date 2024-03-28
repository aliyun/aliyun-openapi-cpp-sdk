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

#include <alibabacloud/devops/model/GetProjectMemberRequest.h>

using AlibabaCloud::Devops::Model::GetProjectMemberRequest;

GetProjectMemberRequest::GetProjectMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/members/get/[aliyunPk]"};
  setMethod(HttpRequest::Method::Get);
}

GetProjectMemberRequest::~GetProjectMemberRequest() {}

std::string GetProjectMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void GetProjectMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetProjectMemberRequest::getAliyunPk() const {
  return aliyunPk_;
}

void GetProjectMemberRequest::setAliyunPk(const std::string &aliyunPk) {
  aliyunPk_ = aliyunPk;
  setParameter(std::string("aliyunPk"), aliyunPk);
}

long GetProjectMemberRequest::getRepositoryId() const {
  return repositoryId_;
}

void GetProjectMemberRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string GetProjectMemberRequest::getAccessToken() const {
  return accessToken_;
}

void GetProjectMemberRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

