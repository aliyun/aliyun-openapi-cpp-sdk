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

#include <alibabacloud/cloudapi/model/DeleteModelRequest.h>

using AlibabaCloud::CloudAPI::Model::DeleteModelRequest;

DeleteModelRequest::DeleteModelRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DeleteModel") {
  setMethod(HttpRequest::Method::Post);
}

DeleteModelRequest::~DeleteModelRequest() {}

std::string DeleteModelRequest::getModelName() const {
  return modelName_;
}

void DeleteModelRequest::setModelName(const std::string &modelName) {
  modelName_ = modelName;
  setParameter(std::string("ModelName"), modelName);
}

std::string DeleteModelRequest::getGroupId() const {
  return groupId_;
}

void DeleteModelRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DeleteModelRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteModelRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteModelRequest::getSecurityToken() const {
  return securityToken_;
}

void DeleteModelRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

