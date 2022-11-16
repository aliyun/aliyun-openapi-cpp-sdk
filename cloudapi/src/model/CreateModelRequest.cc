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

#include <alibabacloud/cloudapi/model/CreateModelRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateModelRequest;

CreateModelRequest::CreateModelRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "CreateModel") {
  setMethod(HttpRequest::Method::Post);
}

CreateModelRequest::~CreateModelRequest() {}

std::string CreateModelRequest::getSchema() const {
  return schema_;
}

void CreateModelRequest::setSchema(const std::string &schema) {
  schema_ = schema;
  setParameter(std::string("Schema"), schema);
}

std::string CreateModelRequest::getModelName() const {
  return modelName_;
}

void CreateModelRequest::setModelName(const std::string &modelName) {
  modelName_ = modelName;
  setParameter(std::string("ModelName"), modelName);
}

std::string CreateModelRequest::getGroupId() const {
  return groupId_;
}

void CreateModelRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string CreateModelRequest::getDescription() const {
  return description_;
}

void CreateModelRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateModelRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateModelRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateModelRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateModelRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

