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

#include <alibabacloud/cloudapi/model/CreateApiGroupRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateApiGroupRequest;

CreateApiGroupRequest::CreateApiGroupRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "CreateApiGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateApiGroupRequest::~CreateApiGroupRequest() {}

std::string CreateApiGroupRequest::getBasePath() const {
  return basePath_;
}

void CreateApiGroupRequest::setBasePath(const std::string &basePath) {
  basePath_ = basePath;
  setParameter(std::string("BasePath"), basePath);
}

std::string CreateApiGroupRequest::getDescription() const {
  return description_;
}

void CreateApiGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateApiGroupRequest::getSource() const {
  return source_;
}

void CreateApiGroupRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string CreateApiGroupRequest::getGroupName() const {
  return groupName_;
}

void CreateApiGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string CreateApiGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateApiGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateApiGroupRequest::getResourceOwnerToken() const {
  return resourceOwnerToken_;
}

void CreateApiGroupRequest::setResourceOwnerToken(const std::string &resourceOwnerToken) {
  resourceOwnerToken_ = resourceOwnerToken;
  setParameter(std::string("ResourceOwnerToken"), resourceOwnerToken);
}

std::string CreateApiGroupRequest::getInstanceId() const {
  return instanceId_;
}

void CreateApiGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateApiGroupRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateApiGroupRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::vector<CreateApiGroupRequest::Tag> CreateApiGroupRequest::getTag() const {
  return tag_;
}

void CreateApiGroupRequest::setTag(const std::vector<CreateApiGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

