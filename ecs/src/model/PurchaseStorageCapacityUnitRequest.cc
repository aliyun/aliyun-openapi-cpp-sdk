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

#include <alibabacloud/ecs/model/PurchaseStorageCapacityUnitRequest.h>

using AlibabaCloud::Ecs::Model::PurchaseStorageCapacityUnitRequest;

PurchaseStorageCapacityUnitRequest::PurchaseStorageCapacityUnitRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "PurchaseStorageCapacityUnit") {
  setMethod(HttpRequest::Method::Post);
}

PurchaseStorageCapacityUnitRequest::~PurchaseStorageCapacityUnitRequest() {}

long PurchaseStorageCapacityUnitRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PurchaseStorageCapacityUnitRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PurchaseStorageCapacityUnitRequest::getClientToken() const {
  return clientToken_;
}

void PurchaseStorageCapacityUnitRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string PurchaseStorageCapacityUnitRequest::getDescription() const {
  return description_;
}

void PurchaseStorageCapacityUnitRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string PurchaseStorageCapacityUnitRequest::getStartTime() const {
  return startTime_;
}

void PurchaseStorageCapacityUnitRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int PurchaseStorageCapacityUnitRequest::getCapacity() const {
  return capacity_;
}

void PurchaseStorageCapacityUnitRequest::setCapacity(int capacity) {
  capacity_ = capacity;
  setParameter(std::string("Capacity"), std::to_string(capacity));
}

std::string PurchaseStorageCapacityUnitRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void PurchaseStorageCapacityUnitRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string PurchaseStorageCapacityUnitRequest::getRegionId() const {
  return regionId_;
}

void PurchaseStorageCapacityUnitRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<PurchaseStorageCapacityUnitRequest::Tag> PurchaseStorageCapacityUnitRequest::getTag() const {
  return tag_;
}

void PurchaseStorageCapacityUnitRequest::setTag(const std::vector<PurchaseStorageCapacityUnitRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

int PurchaseStorageCapacityUnitRequest::getPeriod() const {
  return period_;
}

void PurchaseStorageCapacityUnitRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

int PurchaseStorageCapacityUnitRequest::getAmount() const {
  return amount_;
}

void PurchaseStorageCapacityUnitRequest::setAmount(int amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

bool PurchaseStorageCapacityUnitRequest::getAutoPay() const {
  return autoPay_;
}

void PurchaseStorageCapacityUnitRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string PurchaseStorageCapacityUnitRequest::getFromApp() const {
  return fromApp_;
}

void PurchaseStorageCapacityUnitRequest::setFromApp(const std::string &fromApp) {
  fromApp_ = fromApp;
  setParameter(std::string("FromApp"), fromApp);
}

std::string PurchaseStorageCapacityUnitRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PurchaseStorageCapacityUnitRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string PurchaseStorageCapacityUnitRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void PurchaseStorageCapacityUnitRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long PurchaseStorageCapacityUnitRequest::getOwnerId() const {
  return ownerId_;
}

void PurchaseStorageCapacityUnitRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

PurchaseStorageCapacityUnitRequest::PromotionOptions PurchaseStorageCapacityUnitRequest::getPromotionOptions() const {
  return promotionOptions_;
}

void PurchaseStorageCapacityUnitRequest::setPromotionOptions(const PurchaseStorageCapacityUnitRequest::PromotionOptions &promotionOptions) {
  promotionOptions_ = promotionOptions;
  setParameter(std::string("PromotionOptions") + ".CouponNo", promotionOptions.couponNo);
}

std::string PurchaseStorageCapacityUnitRequest::getPeriodUnit() const {
  return periodUnit_;
}

void PurchaseStorageCapacityUnitRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string PurchaseStorageCapacityUnitRequest::getName() const {
  return name_;
}

void PurchaseStorageCapacityUnitRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

