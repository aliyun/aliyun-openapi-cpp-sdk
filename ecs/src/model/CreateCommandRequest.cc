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

#include <alibabacloud/ecs/model/CreateCommandRequest.h>

using AlibabaCloud::Ecs::Model::CreateCommandRequest;

CreateCommandRequest::CreateCommandRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateCommand") {
  setMethod(HttpRequest::Method::Post);
}

CreateCommandRequest::~CreateCommandRequest() {}

long CreateCommandRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCommandRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<CreateCommandRequest::SystemTag> CreateCommandRequest::getSystemTag() const {
  return systemTag_;
}

void CreateCommandRequest::setSystemTag(const std::vector<CreateCommandRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

std::string CreateCommandRequest::getWorkingDir() const {
  return workingDir_;
}

void CreateCommandRequest::setWorkingDir(const std::string &workingDir) {
  workingDir_ = workingDir;
  setParameter(std::string("WorkingDir"), workingDir);
}

std::string CreateCommandRequest::getDescription() const {
  return description_;
}

void CreateCommandRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateCommandRequest::getType() const {
  return type_;
}

void CreateCommandRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateCommandRequest::getCommandContent() const {
  return commandContent_;
}

void CreateCommandRequest::setCommandContent(const std::string &commandContent) {
  commandContent_ = commandContent;
  setParameter(std::string("CommandContent"), commandContent);
}

long CreateCommandRequest::getTimeout() const {
  return timeout_;
}

void CreateCommandRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string CreateCommandRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateCommandRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateCommandRequest::getRegionId() const {
  return regionId_;
}

void CreateCommandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCommandRequest::getContentEncoding() const {
  return contentEncoding_;
}

void CreateCommandRequest::setContentEncoding(const std::string &contentEncoding) {
  contentEncoding_ = contentEncoding;
  setParameter(std::string("ContentEncoding"), contentEncoding);
}

std::vector<CreateCommandRequest::Tag> CreateCommandRequest::getTag() const {
  return tag_;
}

void CreateCommandRequest::setTag(const std::vector<CreateCommandRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateCommandRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCommandRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCommandRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCommandRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateCommandRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCommandRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCommandRequest::getName() const {
  return name_;
}

void CreateCommandRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

bool CreateCommandRequest::getEnableParameter() const {
  return enableParameter_;
}

void CreateCommandRequest::setEnableParameter(bool enableParameter) {
  enableParameter_ = enableParameter;
  setParameter(std::string("EnableParameter"), enableParameter ? "true" : "false");
}

std::string CreateCommandRequest::getLauncher() const {
  return launcher_;
}

void CreateCommandRequest::setLauncher(const std::string &launcher) {
  launcher_ = launcher;
  setParameter(std::string("Launcher"), launcher);
}

