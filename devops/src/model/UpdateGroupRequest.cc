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

#include <alibabacloud/devops/model/UpdateGroupRequest.h>

using AlibabaCloud::Devops::Model::UpdateGroupRequest;

UpdateGroupRequest::UpdateGroupRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/groups/modify"};
  setMethod(HttpRequest::Method::Put);
}

UpdateGroupRequest::~UpdateGroupRequest() {}

std::string UpdateGroupRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateGroupRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string UpdateGroupRequest::getAccessToken() const {
  return accessToken_;
}

void UpdateGroupRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

UpdateGroupRequest::body UpdateGroupRequest::getBody() const {
  return body_;
}

void UpdateGroupRequest::setBody(const UpdateGroupRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".path", body.path);
  setBodyParameter(std::string("body") + ".avatarUrl", body.avatarUrl);
  setBodyParameter(std::string("body") + ".name", body.name);
  setBodyParameter(std::string("body") + ".description", body.description);
  setBodyParameter(std::string("body") + ".visibilityLevel", std::to_string(body.visibilityLevel));
  setBodyParameter(std::string("body") + ".pathWithNamespace", body.pathWithNamespace);
}

