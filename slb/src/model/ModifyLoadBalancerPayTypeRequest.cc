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

#include <alibabacloud/slb/model/ModifyLoadBalancerPayTypeRequest.h>

using AlibabaCloud::Slb::Model::ModifyLoadBalancerPayTypeRequest;

ModifyLoadBalancerPayTypeRequest::ModifyLoadBalancerPayTypeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "ModifyLoadBalancerPayType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLoadBalancerPayTypeRequest::~ModifyLoadBalancerPayTypeRequest() {}

std::string ModifyLoadBalancerPayTypeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void ModifyLoadBalancerPayTypeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long ModifyLoadBalancerPayTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyLoadBalancerPayTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifyLoadBalancerPayTypeRequest::getDuration() const {
  return duration_;
}

void ModifyLoadBalancerPayTypeRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string ModifyLoadBalancerPayTypeRequest::getRegionId() const {
  return regionId_;
}

void ModifyLoadBalancerPayTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyLoadBalancerPayTypeRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyLoadBalancerPayTypeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ModifyLoadBalancerPayTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyLoadBalancerPayTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyLoadBalancerPayTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyLoadBalancerPayTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyLoadBalancerPayTypeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyLoadBalancerPayTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyLoadBalancerPayTypeRequest::getTags() const {
  return tags_;
}

void ModifyLoadBalancerPayTypeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ModifyLoadBalancerPayTypeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void ModifyLoadBalancerPayTypeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string ModifyLoadBalancerPayTypeRequest::getPayType() const {
  return payType_;
}

void ModifyLoadBalancerPayTypeRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string ModifyLoadBalancerPayTypeRequest::getPricingCycle() const {
  return pricingCycle_;
}

void ModifyLoadBalancerPayTypeRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

