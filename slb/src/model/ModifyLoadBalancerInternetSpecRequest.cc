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

#include <alibabacloud/slb/model/ModifyLoadBalancerInternetSpecRequest.h>

using AlibabaCloud::Slb::Model::ModifyLoadBalancerInternetSpecRequest;

ModifyLoadBalancerInternetSpecRequest::ModifyLoadBalancerInternetSpecRequest()
    : RpcServiceRequest("slb", "2014-05-15", "ModifyLoadBalancerInternetSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLoadBalancerInternetSpecRequest::~ModifyLoadBalancerInternetSpecRequest() {}

std::string ModifyLoadBalancerInternetSpecRequest::getAccess_key_id() const {
  return access_key_id_;
}

void ModifyLoadBalancerInternetSpecRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long ModifyLoadBalancerInternetSpecRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyLoadBalancerInternetSpecRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyLoadBalancerInternetSpecRequest::getRegionId() const {
  return regionId_;
}

void ModifyLoadBalancerInternetSpecRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyLoadBalancerInternetSpecRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyLoadBalancerInternetSpecRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ModifyLoadBalancerInternetSpecRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyLoadBalancerInternetSpecRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int ModifyLoadBalancerInternetSpecRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifyLoadBalancerInternetSpecRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string ModifyLoadBalancerInternetSpecRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyLoadBalancerInternetSpecRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyLoadBalancerInternetSpecRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyLoadBalancerInternetSpecRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyLoadBalancerInternetSpecRequest::getTags() const {
  return tags_;
}

void ModifyLoadBalancerInternetSpecRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ModifyLoadBalancerInternetSpecRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void ModifyLoadBalancerInternetSpecRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string ModifyLoadBalancerInternetSpecRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void ModifyLoadBalancerInternetSpecRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

int ModifyLoadBalancerInternetSpecRequest::getRatio() const {
  return ratio_;
}

void ModifyLoadBalancerInternetSpecRequest::setRatio(int ratio) {
  ratio_ = ratio;
  setParameter(std::string("Ratio"), std::to_string(ratio));
}

