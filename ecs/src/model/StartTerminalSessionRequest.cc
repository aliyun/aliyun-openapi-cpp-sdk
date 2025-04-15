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

#include <alibabacloud/ecs/model/StartTerminalSessionRequest.h>

using AlibabaCloud::Ecs::Model::StartTerminalSessionRequest;

StartTerminalSessionRequest::StartTerminalSessionRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "StartTerminalSession") {
  setMethod(HttpRequest::Method::Post);
}

StartTerminalSessionRequest::~StartTerminalSessionRequest() {}

long StartTerminalSessionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StartTerminalSessionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string StartTerminalSessionRequest::getCommandLine() const {
  return commandLine_;
}

void StartTerminalSessionRequest::setCommandLine(const std::string &commandLine) {
  commandLine_ = commandLine;
  setParameter(std::string("CommandLine"), commandLine);
}

std::string StartTerminalSessionRequest::getRegionId() const {
  return regionId_;
}

void StartTerminalSessionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StartTerminalSessionRequest::getTargetServer() const {
  return targetServer_;
}

void StartTerminalSessionRequest::setTargetServer(const std::string &targetServer) {
  targetServer_ = targetServer;
  setParameter(std::string("TargetServer"), targetServer);
}

std::string StartTerminalSessionRequest::getConnectionType() const {
  return connectionType_;
}

void StartTerminalSessionRequest::setConnectionType(const std::string &connectionType) {
  connectionType_ = connectionType;
  setParameter(std::string("ConnectionType"), connectionType);
}

std::string StartTerminalSessionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void StartTerminalSessionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string StartTerminalSessionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void StartTerminalSessionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long StartTerminalSessionRequest::getOwnerId() const {
  return ownerId_;
}

void StartTerminalSessionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> StartTerminalSessionRequest::getInstanceId() const {
  return instanceId_;
}

void StartTerminalSessionRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

int StartTerminalSessionRequest::getPortNumber() const {
  return portNumber_;
}

void StartTerminalSessionRequest::setPortNumber(int portNumber) {
  portNumber_ = portNumber;
  setParameter(std::string("PortNumber"), std::to_string(portNumber));
}

std::string StartTerminalSessionRequest::getUsername() const {
  return username_;
}

void StartTerminalSessionRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

