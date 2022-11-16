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

#include <alibabacloud/cloudapi/model/CreateBackendModelRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateBackendModelRequest;

CreateBackendModelRequest::CreateBackendModelRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "CreateBackendModel") {
  setMethod(HttpRequest::Method::Post);
}

CreateBackendModelRequest::~CreateBackendModelRequest() {}

std::string CreateBackendModelRequest::getStageName() const {
  return stageName_;
}

void CreateBackendModelRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string CreateBackendModelRequest::getBackendModelData() const {
  return backendModelData_;
}

void CreateBackendModelRequest::setBackendModelData(const std::string &backendModelData) {
  backendModelData_ = backendModelData;
  setParameter(std::string("BackendModelData"), backendModelData);
}

std::string CreateBackendModelRequest::getBackendId() const {
  return backendId_;
}

void CreateBackendModelRequest::setBackendId(const std::string &backendId) {
  backendId_ = backendId;
  setParameter(std::string("BackendId"), backendId);
}

std::string CreateBackendModelRequest::getDescription() const {
  return description_;
}

void CreateBackendModelRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateBackendModelRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateBackendModelRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateBackendModelRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateBackendModelRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateBackendModelRequest::getBackendType() const {
  return backendType_;
}

void CreateBackendModelRequest::setBackendType(const std::string &backendType) {
  backendType_ = backendType;
  setParameter(std::string("BackendType"), backendType);
}

