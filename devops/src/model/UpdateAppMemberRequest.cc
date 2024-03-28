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

#include <alibabacloud/devops/model/UpdateAppMemberRequest.h>

using AlibabaCloud::Devops::Model::UpdateAppMemberRequest;

UpdateAppMemberRequest::UpdateAppMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/appstack/apps/[appName]/members"};
  setMethod(HttpRequest::Method::Put);
}

UpdateAppMemberRequest::~UpdateAppMemberRequest() {}

std::string UpdateAppMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateAppMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string UpdateAppMemberRequest::getAppName() const {
  return appName_;
}

void UpdateAppMemberRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("appName"), appName);
}

UpdateAppMemberRequest::body UpdateAppMemberRequest::getBody() const {
  return body_;
}

void UpdateAppMemberRequest::setBody(const UpdateAppMemberRequest::body &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.roleNames.size(); dep1++) {
    setBodyParameter(std::string("body") + ".roleNames." + std::to_string(dep1 + 1), body.roleNames[dep1]);
  }
  setBodyParameter(std::string("body") + ".player.id", body.player.id);
  setBodyParameter(std::string("body") + ".player.type", body.player.type);
}

