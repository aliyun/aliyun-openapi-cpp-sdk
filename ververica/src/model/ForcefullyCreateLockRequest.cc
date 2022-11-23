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

#include <alibabacloud/ververica/model/ForcefullyCreateLockRequest.h>

using AlibabaCloud::Ververica::Model::ForcefullyCreateLockRequest;

ForcefullyCreateLockRequest::ForcefullyCreateLockRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/api/v1/namespaces/[namespace]/locks"};
  setMethod(HttpRequest::Method::Post);
}

ForcefullyCreateLockRequest::~ForcefullyCreateLockRequest() {}

std::string ForcefullyCreateLockRequest::getWorkspace() const {
  return workspace_;
}

void ForcefullyCreateLockRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string ForcefullyCreateLockRequest::getResourceId() const {
  return resourceId_;
}

void ForcefullyCreateLockRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("resourceId"), resourceId);
}

std::string ForcefullyCreateLockRequest::get_Namespace() const {
  return _namespace_;
}

void ForcefullyCreateLockRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

std::string ForcefullyCreateLockRequest::getResourceType() const {
  return resourceType_;
}

void ForcefullyCreateLockRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("resourceType"), resourceType);
}

