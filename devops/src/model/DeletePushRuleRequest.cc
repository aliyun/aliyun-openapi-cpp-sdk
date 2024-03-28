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

#include <alibabacloud/devops/model/DeletePushRuleRequest.h>

using AlibabaCloud::Devops::Model::DeletePushRuleRequest;

DeletePushRuleRequest::DeletePushRuleRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/[repositoryId]/push_rule/[pushRuleId]"};
  setMethod(HttpRequest::Method::Delete);
}

DeletePushRuleRequest::~DeletePushRuleRequest() {}

std::string DeletePushRuleRequest::getOrganizationId() const {
  return organizationId_;
}

void DeletePushRuleRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long DeletePushRuleRequest::getPushRuleId() const {
  return pushRuleId_;
}

void DeletePushRuleRequest::setPushRuleId(long pushRuleId) {
  pushRuleId_ = pushRuleId;
  setParameter(std::string("pushRuleId"), std::to_string(pushRuleId));
}

long DeletePushRuleRequest::getRepositoryId() const {
  return repositoryId_;
}

void DeletePushRuleRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string DeletePushRuleRequest::getAccessToken() const {
  return accessToken_;
}

void DeletePushRuleRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

