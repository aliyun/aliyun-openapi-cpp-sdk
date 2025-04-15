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

#include <alibabacloud/ecs/model/InvokeCommandRequest.h>

using AlibabaCloud::Ecs::Model::InvokeCommandRequest;

InvokeCommandRequest::InvokeCommandRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "InvokeCommand") {
  setMethod(HttpRequest::Method::Post);
}

InvokeCommandRequest::~InvokeCommandRequest() {}

long InvokeCommandRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void InvokeCommandRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string InvokeCommandRequest::getCommandId() const {
  return commandId_;
}

void InvokeCommandRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

std::string InvokeCommandRequest::getFrequency() const {
  return frequency_;
}

void InvokeCommandRequest::setFrequency(const std::string &frequency) {
  frequency_ = frequency;
  setParameter(std::string("Frequency"), frequency);
}

std::string InvokeCommandRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void InvokeCommandRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string InvokeCommandRequest::getRepeatMode() const {
  return repeatMode_;
}

void InvokeCommandRequest::setRepeatMode(const std::string &repeatMode) {
  repeatMode_ = repeatMode;
  setParameter(std::string("RepeatMode"), repeatMode);
}

std::vector<InvokeCommandRequest::Tag> InvokeCommandRequest::getTag() const {
  return tag_;
}

void InvokeCommandRequest::setTag(const std::vector<InvokeCommandRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool InvokeCommandRequest::getTimed() const {
  return timed_;
}

void InvokeCommandRequest::setTimed(bool timed) {
  timed_ = timed;
  setParameter(std::string("Timed"), timed ? "true" : "false");
}

long InvokeCommandRequest::getOwnerId() const {
  return ownerId_;
}

void InvokeCommandRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> InvokeCommandRequest::getInstanceId() const {
  return instanceId_;
}

void InvokeCommandRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::string InvokeCommandRequest::getContainerId() const {
  return containerId_;
}

void InvokeCommandRequest::setContainerId(const std::string &containerId) {
  containerId_ = containerId;
  setParameter(std::string("ContainerId"), containerId);
}

std::map<std::string, std::string> InvokeCommandRequest::getParameters() const {
  return parameters_;
}

void InvokeCommandRequest::setParameters(std::map<std::string, std::string> parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

std::string InvokeCommandRequest::getLauncher() const {
  return launcher_;
}

void InvokeCommandRequest::setLauncher(const std::string &launcher) {
  launcher_ = launcher;
  setParameter(std::string("Launcher"), launcher);
}

std::string InvokeCommandRequest::getContainerName() const {
  return containerName_;
}

void InvokeCommandRequest::setContainerName(const std::string &containerName) {
  containerName_ = containerName;
  setParameter(std::string("ContainerName"), containerName);
}

std::string InvokeCommandRequest::getClientToken() const {
  return clientToken_;
}

void InvokeCommandRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<InvokeCommandRequest::SystemTag> InvokeCommandRequest::getSystemTag() const {
  return systemTag_;
}

void InvokeCommandRequest::setSystemTag(const std::vector<InvokeCommandRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

long InvokeCommandRequest::getTimeout() const {
  return timeout_;
}

void InvokeCommandRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string InvokeCommandRequest::getRegionId() const {
  return regionId_;
}

void InvokeCommandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string InvokeCommandRequest::getWindowsPasswordName() const {
  return windowsPasswordName_;
}

void InvokeCommandRequest::setWindowsPasswordName(const std::string &windowsPasswordName) {
  windowsPasswordName_ = windowsPasswordName;
  setParameter(std::string("WindowsPasswordName"), windowsPasswordName);
}

std::vector<InvokeCommandRequest::ResourceTag> InvokeCommandRequest::getResourceTag() const {
  return resourceTag_;
}

void InvokeCommandRequest::setResourceTag(const std::vector<InvokeCommandRequest::ResourceTag> &resourceTag) {
  resourceTag_ = resourceTag;
  for(int dep1 = 0; dep1 != resourceTag.size(); dep1++) {
  auto resourceTagObj = resourceTag.at(dep1);
  std::string resourceTagObjStr = std::string("ResourceTag") + "." + std::to_string(dep1 + 1);
    setParameter(resourceTagObjStr + ".Key", resourceTagObj.key);
    setParameter(resourceTagObjStr + ".Value", resourceTagObj.value);
  }
}

std::string InvokeCommandRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void InvokeCommandRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string InvokeCommandRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void InvokeCommandRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string InvokeCommandRequest::getTerminationMode() const {
  return terminationMode_;
}

void InvokeCommandRequest::setTerminationMode(const std::string &terminationMode) {
  terminationMode_ = terminationMode;
  setParameter(std::string("TerminationMode"), terminationMode);
}

std::string InvokeCommandRequest::getUsername() const {
  return username_;
}

void InvokeCommandRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

