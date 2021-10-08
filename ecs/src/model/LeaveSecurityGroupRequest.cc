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

#include <alibabacloud/ecs/model/LeaveSecurityGroupRequest.h>

using AlibabaCloud::Ecs::Model::LeaveSecurityGroupRequest;

LeaveSecurityGroupRequest::LeaveSecurityGroupRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "LeaveSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

LeaveSecurityGroupRequest::~LeaveSecurityGroupRequest() {}

long LeaveSecurityGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void LeaveSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string LeaveSecurityGroupRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void LeaveSecurityGroupRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string LeaveSecurityGroupRequest::getRegionId() const {
  return regionId_;
}

void LeaveSecurityGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string LeaveSecurityGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void LeaveSecurityGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string LeaveSecurityGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void LeaveSecurityGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long LeaveSecurityGroupRequest::getOwnerId() const {
  return ownerId_;
}

void LeaveSecurityGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string LeaveSecurityGroupRequest::getInstanceId() const {
  return instanceId_;
}

void LeaveSecurityGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string LeaveSecurityGroupRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void LeaveSecurityGroupRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

