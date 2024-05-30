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

#include <alibabacloud/slb/model/ModifyLoadBalancerInstanceSpecRequest.h>

using AlibabaCloud::Slb::Model::ModifyLoadBalancerInstanceSpecRequest;

ModifyLoadBalancerInstanceSpecRequest::ModifyLoadBalancerInstanceSpecRequest()
    : RpcServiceRequest("slb", "2014-05-15", "ModifyLoadBalancerInstanceSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLoadBalancerInstanceSpecRequest::~ModifyLoadBalancerInstanceSpecRequest() {}

std::string ModifyLoadBalancerInstanceSpecRequest::getAccess_key_id() const {
  return access_key_id_;
}

void ModifyLoadBalancerInstanceSpecRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long ModifyLoadBalancerInstanceSpecRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyLoadBalancerInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyLoadBalancerInstanceSpecRequest::getRegionId() const {
  return regionId_;
}

void ModifyLoadBalancerInstanceSpecRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyLoadBalancerInstanceSpecRequest::getLoadBalancerSpec() const {
  return loadBalancerSpec_;
}

void ModifyLoadBalancerInstanceSpecRequest::setLoadBalancerSpec(const std::string &loadBalancerSpec) {
  loadBalancerSpec_ = loadBalancerSpec;
  setParameter(std::string("LoadBalancerSpec"), loadBalancerSpec);
}

bool ModifyLoadBalancerInstanceSpecRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyLoadBalancerInstanceSpecRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ModifyLoadBalancerInstanceSpecRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyLoadBalancerInstanceSpecRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyLoadBalancerInstanceSpecRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyLoadBalancerInstanceSpecRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyLoadBalancerInstanceSpecRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyLoadBalancerInstanceSpecRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyLoadBalancerInstanceSpecRequest::getTags() const {
  return tags_;
}

void ModifyLoadBalancerInstanceSpecRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ModifyLoadBalancerInstanceSpecRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void ModifyLoadBalancerInstanceSpecRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

