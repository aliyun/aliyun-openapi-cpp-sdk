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

#include <alibabacloud/devops/model/UpdateMergeRequestPersonnelRequest.h>

using AlibabaCloud::Devops::Model::UpdateMergeRequestPersonnelRequest;

UpdateMergeRequestPersonnelRequest::UpdateMergeRequestPersonnelRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/[repositoryId]/merge_requests/[localId]/person/[personType]"};
  setMethod(HttpRequest::Method::Post);
}

UpdateMergeRequestPersonnelRequest::~UpdateMergeRequestPersonnelRequest() {}

std::string UpdateMergeRequestPersonnelRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateMergeRequestPersonnelRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long UpdateMergeRequestPersonnelRequest::getRepositoryId() const {
  return repositoryId_;
}

void UpdateMergeRequestPersonnelRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string UpdateMergeRequestPersonnelRequest::getAccessToken() const {
  return accessToken_;
}

void UpdateMergeRequestPersonnelRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

UpdateMergeRequestPersonnelRequest::body UpdateMergeRequestPersonnelRequest::getBody() const {
  return body_;
}

void UpdateMergeRequestPersonnelRequest::setBody(const UpdateMergeRequestPersonnelRequest::body &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.newUserIdList.size(); dep1++) {
    setBodyParameter(std::string("body") + ".newUserIdList." + std::to_string(dep1 + 1), body.newUserIdList[dep1]);
  }
}

long UpdateMergeRequestPersonnelRequest::getLocalId() const {
  return localId_;
}

void UpdateMergeRequestPersonnelRequest::setLocalId(long localId) {
  localId_ = localId;
  setParameter(std::string("localId"), std::to_string(localId));
}

std::string UpdateMergeRequestPersonnelRequest::getPersonType() const {
  return personType_;
}

void UpdateMergeRequestPersonnelRequest::setPersonType(const std::string &personType) {
  personType_ = personType;
  setParameter(std::string("personType"), personType);
}

