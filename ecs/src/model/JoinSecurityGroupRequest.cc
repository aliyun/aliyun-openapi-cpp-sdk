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

#include <alibabacloud/ecs/model/JoinSecurityGroupRequest.h>

using AlibabaCloud::Ecs::Model::JoinSecurityGroupRequest;

JoinSecurityGroupRequest::JoinSecurityGroupRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "JoinSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

JoinSecurityGroupRequest::~JoinSecurityGroupRequest() {}

long JoinSecurityGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void JoinSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string JoinSecurityGroupRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void JoinSecurityGroupRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string JoinSecurityGroupRequest::getRegionId() const {
  return regionId_;
}

void JoinSecurityGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string JoinSecurityGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void JoinSecurityGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string JoinSecurityGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void JoinSecurityGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long JoinSecurityGroupRequest::getOwnerId() const {
  return ownerId_;
}

void JoinSecurityGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string JoinSecurityGroupRequest::getInstanceId() const {
  return instanceId_;
}

void JoinSecurityGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string JoinSecurityGroupRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void JoinSecurityGroupRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

