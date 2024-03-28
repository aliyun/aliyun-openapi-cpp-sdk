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

#include <alibabacloud/devops/model/UpdatePushReviewOnOffRequest.h>

using AlibabaCloud::Devops::Model::UpdatePushReviewOnOffRequest;

UpdatePushReviewOnOffRequest::UpdatePushReviewOnOffRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/settings/trunk_mode"};
  setMethod(HttpRequest::Method::Post);
}

UpdatePushReviewOnOffRequest::~UpdatePushReviewOnOffRequest() {}

std::string UpdatePushReviewOnOffRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdatePushReviewOnOffRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long UpdatePushReviewOnOffRequest::getRepositoryId() const {
  return repositoryId_;
}

void UpdatePushReviewOnOffRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

bool UpdatePushReviewOnOffRequest::getTrunkMode() const {
  return trunkMode_;
}

void UpdatePushReviewOnOffRequest::setTrunkMode(bool trunkMode) {
  trunkMode_ = trunkMode;
  setParameter(std::string("trunkMode"), trunkMode ? "true" : "false");
}

