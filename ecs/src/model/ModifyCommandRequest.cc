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

#include <alibabacloud/ecs/model/ModifyCommandRequest.h>

using AlibabaCloud::Ecs::Model::ModifyCommandRequest;

ModifyCommandRequest::ModifyCommandRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyCommand") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCommandRequest::~ModifyCommandRequest() {}

long ModifyCommandRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCommandRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCommandRequest::getWorkingDir() const {
  return workingDir_;
}

void ModifyCommandRequest::setWorkingDir(const std::string &workingDir) {
  workingDir_ = workingDir;
  setParameter(std::string("WorkingDir"), workingDir);
}

std::string ModifyCommandRequest::getDescription() const {
  return description_;
}

void ModifyCommandRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyCommandRequest::getCommandId() const {
  return commandId_;
}

void ModifyCommandRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

std::string ModifyCommandRequest::getCommandContent() const {
  return commandContent_;
}

void ModifyCommandRequest::setCommandContent(const std::string &commandContent) {
  commandContent_ = commandContent;
  setParameter(std::string("CommandContent"), commandContent);
}

long ModifyCommandRequest::getTimeout() const {
  return timeout_;
}

void ModifyCommandRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string ModifyCommandRequest::getRegionId() const {
  return regionId_;
}

void ModifyCommandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCommandRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCommandRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyCommandRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyCommandRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyCommandRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCommandRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyCommandRequest::getName() const {
  return name_;
}

void ModifyCommandRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ModifyCommandRequest::getLauncher() const {
  return launcher_;
}

void ModifyCommandRequest::setLauncher(const std::string &launcher) {
  launcher_ = launcher;
  setParameter(std::string("Launcher"), launcher);
}

