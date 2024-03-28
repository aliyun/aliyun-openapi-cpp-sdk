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

#include <alibabacloud/devops/model/DeleteRepositoryMemberRequest.h>

using AlibabaCloud::Devops::Model::DeleteRepositoryMemberRequest;

DeleteRepositoryMemberRequest::DeleteRepositoryMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/members/delete/[aliyunPk]"};
  setMethod(HttpRequest::Method::Post);
}

DeleteRepositoryMemberRequest::~DeleteRepositoryMemberRequest() {}

std::string DeleteRepositoryMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteRepositoryMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string DeleteRepositoryMemberRequest::getAliyunPk() const {
  return aliyunPk_;
}

void DeleteRepositoryMemberRequest::setAliyunPk(const std::string &aliyunPk) {
  aliyunPk_ = aliyunPk;
  setParameter(std::string("aliyunPk"), aliyunPk);
}

long DeleteRepositoryMemberRequest::getRepositoryId() const {
  return repositoryId_;
}

void DeleteRepositoryMemberRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string DeleteRepositoryMemberRequest::getAccessToken() const {
  return accessToken_;
}

void DeleteRepositoryMemberRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

DeleteRepositoryMemberRequest::body DeleteRepositoryMemberRequest::getBody() const {
  return body_;
}

void DeleteRepositoryMemberRequest::setBody(const DeleteRepositoryMemberRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".memberType", body.memberType);
}

