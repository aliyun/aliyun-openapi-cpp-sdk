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

#include <alibabacloud/slb/model/ModifyLoadBalancerInstanceChargeTypeRequest.h>

using AlibabaCloud::Slb::Model::ModifyLoadBalancerInstanceChargeTypeRequest;

ModifyLoadBalancerInstanceChargeTypeRequest::ModifyLoadBalancerInstanceChargeTypeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "ModifyLoadBalancerInstanceChargeType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLoadBalancerInstanceChargeTypeRequest::~ModifyLoadBalancerInstanceChargeTypeRequest() {}

long ModifyLoadBalancerInstanceChargeTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyLoadBalancerInstanceChargeTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyLoadBalancerInstanceChargeTypeRequest::getRegionId() const {
  return regionId_;
}

void ModifyLoadBalancerInstanceChargeTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyLoadBalancerInstanceChargeTypeRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void ModifyLoadBalancerInstanceChargeTypeRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string ModifyLoadBalancerInstanceChargeTypeRequest::getLoadBalancerSpec() const {
  return loadBalancerSpec_;
}

void ModifyLoadBalancerInstanceChargeTypeRequest::setLoadBalancerSpec(const std::string &loadBalancerSpec) {
  loadBalancerSpec_ = loadBalancerSpec;
  setParameter(std::string("LoadBalancerSpec"), loadBalancerSpec);
}

std::string ModifyLoadBalancerInstanceChargeTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyLoadBalancerInstanceChargeTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int ModifyLoadBalancerInstanceChargeTypeRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifyLoadBalancerInstanceChargeTypeRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string ModifyLoadBalancerInstanceChargeTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyLoadBalancerInstanceChargeTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyLoadBalancerInstanceChargeTypeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyLoadBalancerInstanceChargeTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyLoadBalancerInstanceChargeTypeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void ModifyLoadBalancerInstanceChargeTypeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string ModifyLoadBalancerInstanceChargeTypeRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void ModifyLoadBalancerInstanceChargeTypeRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

