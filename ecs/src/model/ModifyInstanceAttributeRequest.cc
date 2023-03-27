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

#include <alibabacloud/ecs/model/ModifyInstanceAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceAttributeRequest;

ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAttributeRequest::~ModifyInstanceAttributeRequest() {}

long ModifyInstanceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool ModifyInstanceAttributeRequest::getRecyclable() const {
  return recyclable_;
}

void ModifyInstanceAttributeRequest::setRecyclable(bool recyclable) {
  recyclable_ = recyclable;
  setParameter(std::string("Recyclable"), recyclable ? "true" : "false");
}

int ModifyInstanceAttributeRequest::getNetworkInterfaceQueueNumber() const {
  return networkInterfaceQueueNumber_;
}

void ModifyInstanceAttributeRequest::setNetworkInterfaceQueueNumber(int networkInterfaceQueueNumber) {
  networkInterfaceQueueNumber_ = networkInterfaceQueueNumber;
  setParameter(std::string("NetworkInterfaceQueueNumber"), std::to_string(networkInterfaceQueueNumber));
}

std::string ModifyInstanceAttributeRequest::getDescription() const {
  return description_;
}

void ModifyInstanceAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool ModifyInstanceAttributeRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void ModifyInstanceAttributeRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string ModifyInstanceAttributeRequest::getUserData() const {
  return userData_;
}

void ModifyInstanceAttributeRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string ModifyInstanceAttributeRequest::getPassword() const {
  return password_;
}

void ModifyInstanceAttributeRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ModifyInstanceAttributeRequest::getHostName() const {
  return hostName_;
}

void ModifyInstanceAttributeRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

bool ModifyInstanceAttributeRequest::getEnableJumboFrame() const {
  return enableJumboFrame_;
}

void ModifyInstanceAttributeRequest::setEnableJumboFrame(bool enableJumboFrame) {
  enableJumboFrame_ = enableJumboFrame;
  setParameter(std::string("EnableJumboFrame"), enableJumboFrame ? "true" : "false");
}

std::string ModifyInstanceAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyInstanceAttributeRequest::getCreditSpecification() const {
  return creditSpecification_;
}

void ModifyInstanceAttributeRequest::setCreditSpecification(const std::string &creditSpecification) {
  creditSpecification_ = creditSpecification;
  setParameter(std::string("CreditSpecification"), creditSpecification);
}

long ModifyInstanceAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> ModifyInstanceAttributeRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void ModifyInstanceAttributeRequest::setSecurityGroupIds(const std::vector<std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
}

std::string ModifyInstanceAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceAttributeRequest::getInstanceName() const {
  return instanceName_;
}

void ModifyInstanceAttributeRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

ModifyInstanceAttributeRequest::RemoteConnectionOptions ModifyInstanceAttributeRequest::getRemoteConnectionOptions() const {
  return remoteConnectionOptions_;
}

void ModifyInstanceAttributeRequest::setRemoteConnectionOptions(const ModifyInstanceAttributeRequest::RemoteConnectionOptions &remoteConnectionOptions) {
  remoteConnectionOptions_ = remoteConnectionOptions;
  setParameter(std::string("RemoteConnectionOptions") + ".Password", remoteConnectionOptions.password);
  setParameter(std::string("RemoteConnectionOptions") + ".Type", remoteConnectionOptions.type);
}

