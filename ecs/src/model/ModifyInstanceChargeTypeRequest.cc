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

#include <alibabacloud/ecs/model/ModifyInstanceChargeTypeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceChargeTypeRequest;

ModifyInstanceChargeTypeRequest::ModifyInstanceChargeTypeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceChargeType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceChargeTypeRequest::~ModifyInstanceChargeTypeRequest() {}

long ModifyInstanceChargeTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceChargeTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceChargeTypeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyInstanceChargeTypeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyInstanceChargeTypeRequest::getRegionId() const {
  return regionId_;
}

void ModifyInstanceChargeTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyInstanceChargeTypeRequest::getIsDetailFee() const {
  return isDetailFee_;
}

void ModifyInstanceChargeTypeRequest::setIsDetailFee(bool isDetailFee) {
  isDetailFee_ = isDetailFee;
  setParameter(std::string("IsDetailFee"), isDetailFee ? "true" : "false");
}

std::string ModifyInstanceChargeTypeRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void ModifyInstanceChargeTypeRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

int ModifyInstanceChargeTypeRequest::getPeriod() const {
  return period_;
}

void ModifyInstanceChargeTypeRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool ModifyInstanceChargeTypeRequest::getDryRun() const {
  return dryRun_;
}

void ModifyInstanceChargeTypeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool ModifyInstanceChargeTypeRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyInstanceChargeTypeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

bool ModifyInstanceChargeTypeRequest::getIncludeDataDisks() const {
  return includeDataDisks_;
}

void ModifyInstanceChargeTypeRequest::setIncludeDataDisks(bool includeDataDisks) {
  includeDataDisks_ = includeDataDisks;
  setParameter(std::string("IncludeDataDisks"), includeDataDisks ? "true" : "false");
}

std::string ModifyInstanceChargeTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceChargeTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceChargeTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceChargeTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceChargeTypeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceChargeTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

ModifyInstanceChargeTypeRequest::PromotionOptions ModifyInstanceChargeTypeRequest::getPromotionOptions() const {
  return promotionOptions_;
}

void ModifyInstanceChargeTypeRequest::setPromotionOptions(const ModifyInstanceChargeTypeRequest::PromotionOptions &promotionOptions) {
  promotionOptions_ = promotionOptions;
  setParameter(std::string("PromotionOptions") + ".CouponNo", promotionOptions.couponNo);
}

std::string ModifyInstanceChargeTypeRequest::getPeriodUnit() const {
  return periodUnit_;
}

void ModifyInstanceChargeTypeRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string ModifyInstanceChargeTypeRequest::getInstanceIds() const {
  return instanceIds_;
}

void ModifyInstanceChargeTypeRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

