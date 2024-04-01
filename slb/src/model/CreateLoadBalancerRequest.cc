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

#include <alibabacloud/slb/model/CreateLoadBalancerRequest.h>

using AlibabaCloud::Slb::Model::CreateLoadBalancerRequest;

CreateLoadBalancerRequest::CreateLoadBalancerRequest()
    : RpcServiceRequest("slb", "2013-02-21", "CreateLoadBalancer") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerRequest::~CreateLoadBalancerRequest() {}

long CreateLoadBalancerRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateLoadBalancerRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateLoadBalancerRequest::getClientToken() const {
  return clientToken_;
}

void CreateLoadBalancerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateLoadBalancerRequest::getLoadBalancerMode() const {
  return loadBalancerMode_;
}

void CreateLoadBalancerRequest::setLoadBalancerMode(const std::string &loadBalancerMode) {
  loadBalancerMode_ = loadBalancerMode;
  setParameter(std::string("LoadBalancerMode"), loadBalancerMode);
}

std::string CreateLoadBalancerRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateLoadBalancerRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateLoadBalancerRequest::getLoadBalancerName() const {
  return loadBalancerName_;
}

void CreateLoadBalancerRequest::setLoadBalancerName(const std::string &loadBalancerName) {
  loadBalancerName_ = loadBalancerName;
  setParameter(std::string("LoadBalancerName"), loadBalancerName);
}

std::string CreateLoadBalancerRequest::getRegionId() const {
  return regionId_;
}

void CreateLoadBalancerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLoadBalancerRequest::getAddress() const {
  return address_;
}

void CreateLoadBalancerRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string CreateLoadBalancerRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateLoadBalancerRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateLoadBalancerRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateLoadBalancerRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateLoadBalancerRequest::getIsPublicAddress() const {
  return isPublicAddress_;
}

void CreateLoadBalancerRequest::setIsPublicAddress(const std::string &isPublicAddress) {
  isPublicAddress_ = isPublicAddress;
  setParameter(std::string("IsPublicAddress"), isPublicAddress);
}

long CreateLoadBalancerRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLoadBalancerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

