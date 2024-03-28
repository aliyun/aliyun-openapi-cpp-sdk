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

#include <alibabacloud/devops/model/TriggerRepositoryMirrorSyncRequest.h>

using AlibabaCloud::Devops::Model::TriggerRepositoryMirrorSyncRequest;

TriggerRepositoryMirrorSyncRequest::TriggerRepositoryMirrorSyncRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/mirror"};
  setMethod(HttpRequest::Method::Post);
}

TriggerRepositoryMirrorSyncRequest::~TriggerRepositoryMirrorSyncRequest() {}

std::string TriggerRepositoryMirrorSyncRequest::getOrganizationId() const {
  return organizationId_;
}

void TriggerRepositoryMirrorSyncRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long TriggerRepositoryMirrorSyncRequest::getRepositoryId() const {
  return repositoryId_;
}

void TriggerRepositoryMirrorSyncRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string TriggerRepositoryMirrorSyncRequest::getAccessToken() const {
  return accessToken_;
}

void TriggerRepositoryMirrorSyncRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string TriggerRepositoryMirrorSyncRequest::getAccount() const {
  return account_;
}

void TriggerRepositoryMirrorSyncRequest::setAccount(const std::string &account) {
  account_ = account;
  setParameter(std::string("account"), account);
}

std::string TriggerRepositoryMirrorSyncRequest::getToken() const {
  return token_;
}

void TriggerRepositoryMirrorSyncRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("token"), token);
}

