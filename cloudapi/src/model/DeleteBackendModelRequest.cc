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

#include <alibabacloud/cloudapi/model/DeleteBackendModelRequest.h>

using AlibabaCloud::CloudAPI::Model::DeleteBackendModelRequest;

DeleteBackendModelRequest::DeleteBackendModelRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DeleteBackendModel") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBackendModelRequest::~DeleteBackendModelRequest() {}

std::string DeleteBackendModelRequest::getStageName() const {
  return stageName_;
}

void DeleteBackendModelRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string DeleteBackendModelRequest::getBackendId() const {
  return backendId_;
}

void DeleteBackendModelRequest::setBackendId(const std::string &backendId) {
  backendId_ = backendId;
  setParameter(std::string("BackendId"), backendId);
}

std::string DeleteBackendModelRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteBackendModelRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteBackendModelRequest::getSecurityToken() const {
  return securityToken_;
}

void DeleteBackendModelRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DeleteBackendModelRequest::getBackendModelId() const {
  return backendModelId_;
}

void DeleteBackendModelRequest::setBackendModelId(const std::string &backendModelId) {
  backendModelId_ = backendModelId;
  setParameter(std::string("BackendModelId"), backendModelId);
}

