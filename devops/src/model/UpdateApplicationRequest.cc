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

#include <alibabacloud/devops/model/UpdateApplicationRequest.h>

using AlibabaCloud::Devops::Model::UpdateApplicationRequest;

UpdateApplicationRequest::UpdateApplicationRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/appstack/apps/[appName]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateApplicationRequest::~UpdateApplicationRequest() {}

std::string UpdateApplicationRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateApplicationRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string UpdateApplicationRequest::getAppName() const {
  return appName_;
}

void UpdateApplicationRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("appName"), appName);
}

UpdateApplicationRequest::body UpdateApplicationRequest::getBody() const {
  return body_;
}

void UpdateApplicationRequest::setBody(const UpdateApplicationRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".ownerAccountId", body.ownerAccountId);
}

