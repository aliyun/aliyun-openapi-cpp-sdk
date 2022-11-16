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

#include <alibabacloud/cloudapi/model/ModifyBackendModelRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyBackendModelRequest;

ModifyBackendModelRequest::ModifyBackendModelRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ModifyBackendModel") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBackendModelRequest::~ModifyBackendModelRequest() {}

std::string ModifyBackendModelRequest::getStageName() const {
  return stageName_;
}

void ModifyBackendModelRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string ModifyBackendModelRequest::getBackendModelData() const {
  return backendModelData_;
}

void ModifyBackendModelRequest::setBackendModelData(const std::string &backendModelData) {
  backendModelData_ = backendModelData;
  setParameter(std::string("BackendModelData"), backendModelData);
}

std::string ModifyBackendModelRequest::getBackendId() const {
  return backendId_;
}

void ModifyBackendModelRequest::setBackendId(const std::string &backendId) {
  backendId_ = backendId;
  setParameter(std::string("BackendId"), backendId);
}

std::string ModifyBackendModelRequest::getDescription() const {
  return description_;
}

void ModifyBackendModelRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyBackendModelRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyBackendModelRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyBackendModelRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyBackendModelRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyBackendModelRequest::getBackendType() const {
  return backendType_;
}

void ModifyBackendModelRequest::setBackendType(const std::string &backendType) {
  backendType_ = backendType;
  setParameter(std::string("BackendType"), backendType);
}

std::string ModifyBackendModelRequest::getBackendModelId() const {
  return backendModelId_;
}

void ModifyBackendModelRequest::setBackendModelId(const std::string &backendModelId) {
  backendModelId_ = backendModelId;
  setParameter(std::string("BackendModelId"), backendModelId);
}

