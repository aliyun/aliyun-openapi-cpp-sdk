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

#include <alibabacloud/cloudapi/model/ModifyBackendRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyBackendRequest;

ModifyBackendRequest::ModifyBackendRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ModifyBackend") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBackendRequest::~ModifyBackendRequest() {}

std::string ModifyBackendRequest::getBackendId() const {
  return backendId_;
}

void ModifyBackendRequest::setBackendId(const std::string &backendId) {
  backendId_ = backendId;
  setParameter(std::string("BackendId"), backendId);
}

std::string ModifyBackendRequest::getDescription() const {
  return description_;
}

void ModifyBackendRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyBackendRequest::getBackendName() const {
  return backendName_;
}

void ModifyBackendRequest::setBackendName(const std::string &backendName) {
  backendName_ = backendName;
  setParameter(std::string("BackendName"), backendName);
}

std::string ModifyBackendRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyBackendRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyBackendRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyBackendRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyBackendRequest::getBackendType() const {
  return backendType_;
}

void ModifyBackendRequest::setBackendType(const std::string &backendType) {
  backendType_ = backendType;
  setParameter(std::string("BackendType"), backendType);
}

