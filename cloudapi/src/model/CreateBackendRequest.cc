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

#include <alibabacloud/cloudapi/model/CreateBackendRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateBackendRequest;

CreateBackendRequest::CreateBackendRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "CreateBackend") {
  setMethod(HttpRequest::Method::Post);
}

CreateBackendRequest::~CreateBackendRequest() {}

std::string CreateBackendRequest::getDescription() const {
  return description_;
}

void CreateBackendRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateBackendRequest::getBackendName() const {
  return backendName_;
}

void CreateBackendRequest::setBackendName(const std::string &backendName) {
  backendName_ = backendName;
  setParameter(std::string("BackendName"), backendName);
}

std::string CreateBackendRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateBackendRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool CreateBackendRequest::getCreateEventBridgeServiceLinkedRole() const {
  return createEventBridgeServiceLinkedRole_;
}

void CreateBackendRequest::setCreateEventBridgeServiceLinkedRole(bool createEventBridgeServiceLinkedRole) {
  createEventBridgeServiceLinkedRole_ = createEventBridgeServiceLinkedRole;
  setParameter(std::string("CreateEventBridgeServiceLinkedRole"), createEventBridgeServiceLinkedRole ? "true" : "false");
}

std::string CreateBackendRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateBackendRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateBackendRequest::getBackendType() const {
  return backendType_;
}

void CreateBackendRequest::setBackendType(const std::string &backendType) {
  backendType_ = backendType;
  setParameter(std::string("BackendType"), backendType);
}

