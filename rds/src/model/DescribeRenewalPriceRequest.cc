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

#include <alibabacloud/rds/model/DescribeRenewalPriceRequest.h>

using AlibabaCloud::Rds::Model::DescribeRenewalPriceRequest;

DescribeRenewalPriceRequest::DescribeRenewalPriceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRenewalPrice") {
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

std::string DescribeRenewalPriceRequest::getClientToken() const {
  return clientToken_;
}

void DescribeRenewalPriceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeRenewalPriceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRenewalPriceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRenewalPriceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeRenewalPriceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeRenewalPriceRequest::getRegionId() const {
  return regionId_;
}

void DescribeRenewalPriceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRenewalPriceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeRenewalPriceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeRenewalPriceRequest::getBusinessInfo() const {
  return businessInfo_;
}

void DescribeRenewalPriceRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

int DescribeRenewalPriceRequest::getQuantity() const {
  return quantity_;
}

void DescribeRenewalPriceRequest::setQuantity(int quantity) {
  quantity_ = quantity;
  setParameter(std::string("Quantity"), std::to_string(quantity));
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

std::string DescribeRenewalPriceRequest::getCommodityCode() const {
  return commodityCode_;
}

void DescribeRenewalPriceRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

long DescribeRenewalPriceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRenewalPriceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeRenewalPriceRequest::getUsedTime() const {
  return usedTime_;
}

void DescribeRenewalPriceRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

std::string DescribeRenewalPriceRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void DescribeRenewalPriceRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string DescribeRenewalPriceRequest::getPromotionCode() const {
  return promotionCode_;
}

void DescribeRenewalPriceRequest::setPromotionCode(const std::string &promotionCode) {
  promotionCode_ = promotionCode;
  setParameter(std::string("PromotionCode"), promotionCode);
}

std::string DescribeRenewalPriceRequest::getTimeType() const {
  return timeType_;
}

void DescribeRenewalPriceRequest::setTimeType(const std::string &timeType) {
  timeType_ = timeType;
  setParameter(std::string("TimeType"), timeType);
}

std::string DescribeRenewalPriceRequest::getPayType() const {
  return payType_;
}

void DescribeRenewalPriceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string DescribeRenewalPriceRequest::getOrderType() const {
  return orderType_;
}

void DescribeRenewalPriceRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

