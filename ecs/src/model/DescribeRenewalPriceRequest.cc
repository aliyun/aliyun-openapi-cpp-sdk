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

#include <alibabacloud/ecs/model/DescribeRenewalPriceRequest.h>

using AlibabaCloud::Ecs::Model::DescribeRenewalPriceRequest;

DescribeRenewalPriceRequest::DescribeRenewalPriceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeRenewalPrice") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRenewalPriceRequest::~DescribeRenewalPriceRequest() {}

long DescribeRenewalPriceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRenewalPriceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRenewalPriceRequest::getRegionId() const {
  return regionId_;
}

void DescribeRenewalPriceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRenewalPriceRequest::getPriceUnit() const {
  return priceUnit_;
}

void DescribeRenewalPriceRequest::setPriceUnit(const std::string &priceUnit) {
  priceUnit_ = priceUnit;
  setParameter(std::string("PriceUnit"), priceUnit);
}

std::string DescribeRenewalPriceRequest::getResourceId() const {
  return resourceId_;
}

void DescribeRenewalPriceRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

int DescribeRenewalPriceRequest::getPeriod() const {
  return period_;
}

void DescribeRenewalPriceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string DescribeRenewalPriceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRenewalPriceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRenewalPriceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRenewalPriceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int DescribeRenewalPriceRequest::getExpectedRenewDay() const {
  return expectedRenewDay_;
}

void DescribeRenewalPriceRequest::setExpectedRenewDay(int expectedRenewDay) {
  expectedRenewDay_ = expectedRenewDay;
  setParameter(std::string("ExpectedRenewDay"), std::to_string(expectedRenewDay));
}

long DescribeRenewalPriceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRenewalPriceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRenewalPriceRequest::getResourceType() const {
  return resourceType_;
}

void DescribeRenewalPriceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

DescribeRenewalPriceRequest::PromotionOptions DescribeRenewalPriceRequest::getPromotionOptions() const {
  return promotionOptions_;
}

void DescribeRenewalPriceRequest::setPromotionOptions(const DescribeRenewalPriceRequest::PromotionOptions &promotionOptions) {
  promotionOptions_ = promotionOptions;
  setParameter(std::string("PromotionOptions") + ".CouponNo", promotionOptions.couponNo);
}

