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

#include <alibabacloud/ecs/model/ModifyInstanceNetworkSpecRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceNetworkSpecRequest;

ModifyInstanceNetworkSpecRequest::ModifyInstanceNetworkSpecRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceNetworkSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceNetworkSpecRequest::~ModifyInstanceNetworkSpecRequest() {}

long ModifyInstanceNetworkSpecRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceNetworkSpecRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceNetworkSpecRequest::getClientToken() const {
  return clientToken_;
}

void ModifyInstanceNetworkSpecRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyInstanceNetworkSpecRequest::getISP() const {
  return iSP_;
}

void ModifyInstanceNetworkSpecRequest::setISP(const std::string &iSP) {
  iSP_ = iSP;
  setParameter(std::string("ISP"), iSP);
}

int ModifyInstanceNetworkSpecRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void ModifyInstanceNetworkSpecRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string ModifyInstanceNetworkSpecRequest::getStartTime() const {
  return startTime_;
}

void ModifyInstanceNetworkSpecRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

bool ModifyInstanceNetworkSpecRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyInstanceNetworkSpecRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ModifyInstanceNetworkSpecRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceNetworkSpecRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceNetworkSpecRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceNetworkSpecRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyInstanceNetworkSpecRequest::getEndTime() const {
  return endTime_;
}

void ModifyInstanceNetworkSpecRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long ModifyInstanceNetworkSpecRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceNetworkSpecRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

ModifyInstanceNetworkSpecRequest::PromotionOptions ModifyInstanceNetworkSpecRequest::getPromotionOptions() const {
  return promotionOptions_;
}

void ModifyInstanceNetworkSpecRequest::setPromotionOptions(const ModifyInstanceNetworkSpecRequest::PromotionOptions &promotionOptions) {
  promotionOptions_ = promotionOptions;
  setParameter(std::string("PromotionOptions") + ".CouponNo", promotionOptions.couponNo);
}

std::string ModifyInstanceNetworkSpecRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceNetworkSpecRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceNetworkSpecRequest::getNetworkChargeType() const {
  return networkChargeType_;
}

void ModifyInstanceNetworkSpecRequest::setNetworkChargeType(const std::string &networkChargeType) {
  networkChargeType_ = networkChargeType;
  setParameter(std::string("NetworkChargeType"), networkChargeType);
}

int ModifyInstanceNetworkSpecRequest::getInternetMaxBandwidthIn() const {
  return internetMaxBandwidthIn_;
}

void ModifyInstanceNetworkSpecRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn) {
  internetMaxBandwidthIn_ = internetMaxBandwidthIn;
  setParameter(std::string("InternetMaxBandwidthIn"), std::to_string(internetMaxBandwidthIn));
}

bool ModifyInstanceNetworkSpecRequest::getAllocatePublicIp() const {
  return allocatePublicIp_;
}

void ModifyInstanceNetworkSpecRequest::setAllocatePublicIp(bool allocatePublicIp) {
  allocatePublicIp_ = allocatePublicIp;
  setParameter(std::string("AllocatePublicIp"), allocatePublicIp ? "true" : "false");
}

