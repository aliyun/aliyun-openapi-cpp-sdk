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

#include <alibabacloud/rds/model/TransformDBInstancePayTypeRequest.h>

using AlibabaCloud::Rds::Model::TransformDBInstancePayTypeRequest;

TransformDBInstancePayTypeRequest::TransformDBInstancePayTypeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "TransformDBInstancePayType") {
  setMethod(HttpRequest::Method::Post);
}

TransformDBInstancePayTypeRequest::~TransformDBInstancePayTypeRequest() {}

long TransformDBInstancePayTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TransformDBInstancePayTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string TransformDBInstancePayTypeRequest::getClientToken() const {
  return clientToken_;
}

void TransformDBInstancePayTypeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool TransformDBInstancePayTypeRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void TransformDBInstancePayTypeRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string TransformDBInstancePayTypeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void TransformDBInstancePayTypeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string TransformDBInstancePayTypeRequest::getRegionId() const {
  return regionId_;
}

void TransformDBInstancePayTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string TransformDBInstancePayTypeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void TransformDBInstancePayTypeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string TransformDBInstancePayTypeRequest::getBusinessInfo() const {
  return businessInfo_;
}

void TransformDBInstancePayTypeRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

std::string TransformDBInstancePayTypeRequest::getPeriod() const {
  return period_;
}

void TransformDBInstancePayTypeRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string TransformDBInstancePayTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TransformDBInstancePayTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string TransformDBInstancePayTypeRequest::getResource() const {
  return resource_;
}

void TransformDBInstancePayTypeRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

std::string TransformDBInstancePayTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void TransformDBInstancePayTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long TransformDBInstancePayTypeRequest::getOwnerId() const {
  return ownerId_;
}

void TransformDBInstancePayTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int TransformDBInstancePayTypeRequest::getUsedTime() const {
  return usedTime_;
}

void TransformDBInstancePayTypeRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

std::string TransformDBInstancePayTypeRequest::getAutoRenew() const {
  return autoRenew_;
}

void TransformDBInstancePayTypeRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string TransformDBInstancePayTypeRequest::getPromotionCode() const {
  return promotionCode_;
}

void TransformDBInstancePayTypeRequest::setPromotionCode(const std::string &promotionCode) {
  promotionCode_ = promotionCode;
  setParameter(std::string("PromotionCode"), promotionCode);
}

std::string TransformDBInstancePayTypeRequest::getPayType() const {
  return payType_;
}

void TransformDBInstancePayTypeRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

