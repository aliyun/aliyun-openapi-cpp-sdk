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

#include <alibabacloud/vpc/model/AssociateEipAddressRequest.h>

using AlibabaCloud::Vpc::Model::AssociateEipAddressRequest;

AssociateEipAddressRequest::AssociateEipAddressRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AssociateEipAddress") {
  setMethod(HttpRequest::Method::Post);
}

AssociateEipAddressRequest::~AssociateEipAddressRequest() {}

long AssociateEipAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociateEipAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssociateEipAddressRequest::getClientToken() const {
  return clientToken_;
}

void AssociateEipAddressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AssociateEipAddressRequest::getAllocationId() const {
  return allocationId_;
}

void AssociateEipAddressRequest::setAllocationId(const std::string &allocationId) {
  allocationId_ = allocationId;
  setParameter(std::string("AllocationId"), allocationId);
}

std::string AssociateEipAddressRequest::getMode() const {
  return mode_;
}

void AssociateEipAddressRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string AssociateEipAddressRequest::getRegionId() const {
  return regionId_;
}

void AssociateEipAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AssociateEipAddressRequest::getInstanceRegionId() const {
  return instanceRegionId_;
}

void AssociateEipAddressRequest::setInstanceRegionId(const std::string &instanceRegionId) {
  instanceRegionId_ = instanceRegionId;
  setParameter(std::string("InstanceRegionId"), instanceRegionId);
}

std::string AssociateEipAddressRequest::getInstanceType() const {
  return instanceType_;
}

void AssociateEipAddressRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

bool AssociateEipAddressRequest::getDryRun() const {
  return dryRun_;
}

void AssociateEipAddressRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AssociateEipAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssociateEipAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AssociateEipAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssociateEipAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssociateEipAddressRequest::getOwnerId() const {
  return ownerId_;
}

void AssociateEipAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AssociateEipAddressRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void AssociateEipAddressRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string AssociateEipAddressRequest::getInstanceId() const {
  return instanceId_;
}

void AssociateEipAddressRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AssociateEipAddressRequest::getVpcId() const {
  return vpcId_;
}

void AssociateEipAddressRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

