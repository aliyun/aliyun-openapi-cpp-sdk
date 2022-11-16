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

#include <alibabacloud/cloudapi/model/ModifyModelRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyModelRequest;

ModifyModelRequest::ModifyModelRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ModifyModel") {
  setMethod(HttpRequest::Method::Post);
}

ModifyModelRequest::~ModifyModelRequest() {}

std::string ModifyModelRequest::getSchema() const {
  return schema_;
}

void ModifyModelRequest::setSchema(const std::string &schema) {
  schema_ = schema;
  setParameter(std::string("Schema"), schema);
}

std::string ModifyModelRequest::getModelName() const {
  return modelName_;
}

void ModifyModelRequest::setModelName(const std::string &modelName) {
  modelName_ = modelName;
  setParameter(std::string("ModelName"), modelName);
}

std::string ModifyModelRequest::getGroupId() const {
  return groupId_;
}

void ModifyModelRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string ModifyModelRequest::getDescription() const {
  return description_;
}

void ModifyModelRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyModelRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyModelRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyModelRequest::getNewModelName() const {
  return newModelName_;
}

void ModifyModelRequest::setNewModelName(const std::string &newModelName) {
  newModelName_ = newModelName;
  setParameter(std::string("NewModelName"), newModelName);
}

std::string ModifyModelRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyModelRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

