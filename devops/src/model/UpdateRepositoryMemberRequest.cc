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

#include <alibabacloud/devops/model/UpdateRepositoryMemberRequest.h>

using AlibabaCloud::Devops::Model::UpdateRepositoryMemberRequest;

UpdateRepositoryMemberRequest::UpdateRepositoryMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/members/[aliyunPk]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateRepositoryMemberRequest::~UpdateRepositoryMemberRequest() {}

std::string UpdateRepositoryMemberRequest::getAliyunPk() const {
  return aliyunPk_;
}

void UpdateRepositoryMemberRequest::setAliyunPk(const std::string &aliyunPk) {
  aliyunPk_ = aliyunPk;
  setParameter(std::string("aliyunPk"), aliyunPk);
}

std::string UpdateRepositoryMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateRepositoryMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long UpdateRepositoryMemberRequest::getRepositoryId() const {
  return repositoryId_;
}

void UpdateRepositoryMemberRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string UpdateRepositoryMemberRequest::getAccessToken() const {
  return accessToken_;
}

void UpdateRepositoryMemberRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

UpdateRepositoryMemberRequest::body UpdateRepositoryMemberRequest::getBody() const {
  return body_;
}

void UpdateRepositoryMemberRequest::setBody(const UpdateRepositoryMemberRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".accessLevel", std::to_string(body.accessLevel));
  for(int dep1 = 0; dep1 != body.relatedInfos.size(); dep1++) {
    setBodyParameter(std::string("body") + ".relatedInfos." + std::to_string(dep1 + 1) + ".sourceId", std::to_string(body.relatedInfos[dep1].sourceId));
    setBodyParameter(std::string("body") + ".relatedInfos." + std::to_string(dep1 + 1) + ".sourceType", body.relatedInfos[dep1].sourceType);
    setBodyParameter(std::string("body") + ".relatedInfos." + std::to_string(dep1 + 1) + ".relatedId", body.relatedInfos[dep1].relatedId);
  }
  setBodyParameter(std::string("body") + ".memberType", body.memberType);
  setBodyParameter(std::string("body") + ".expireAt", body.expireAt);
  setBodyParameter(std::string("body") + ".relatedId", body.relatedId);
}

