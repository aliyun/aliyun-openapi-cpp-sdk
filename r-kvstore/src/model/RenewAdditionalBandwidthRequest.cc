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

#include <alibabacloud/r-kvstore/model/RenewAdditionalBandwidthRequest.h>

using AlibabaCloud::R_kvstore::Model::RenewAdditionalBandwidthRequest;

RenewAdditionalBandwidthRequest::RenewAdditionalBandwidthRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "RenewAdditionalBandwidth") {
  setMethod(HttpRequest::Method::Post);
}

RenewAdditionalBandwidthRequest::~RenewAdditionalBandwidthRequest() {}

long RenewAdditionalBandwidthRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RenewAdditionalBandwidthRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RenewAdditionalBandwidthRequest::getCouponNo() const {
  return couponNo_;
}

void RenewAdditionalBandwidthRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string RenewAdditionalBandwidthRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RenewAdditionalBandwidthRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RenewAdditionalBandwidthRequest::getSecurityToken() const {
  return securityToken_;
}

void RenewAdditionalBandwidthRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RenewAdditionalBandwidthRequest::getSourceBiz() const {
  return sourceBiz_;
}

void RenewAdditionalBandwidthRequest::setSourceBiz(const std::string &sourceBiz) {
  sourceBiz_ = sourceBiz;
  setParameter(std::string("SourceBiz"), sourceBiz);
}

std::string RenewAdditionalBandwidthRequest::getOrderTimeLength() const {
  return orderTimeLength_;
}

void RenewAdditionalBandwidthRequest::setOrderTimeLength(const std::string &orderTimeLength) {
  orderTimeLength_ = orderTimeLength;
  setParameter(std::string("OrderTimeLength"), orderTimeLength);
}

std::string RenewAdditionalBandwidthRequest::getProduct() const {
  return product_;
}

void RenewAdditionalBandwidthRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

bool RenewAdditionalBandwidthRequest::getAutoPay() const {
  return autoPay_;
}

void RenewAdditionalBandwidthRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string RenewAdditionalBandwidthRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RenewAdditionalBandwidthRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RenewAdditionalBandwidthRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RenewAdditionalBandwidthRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RenewAdditionalBandwidthRequest::getOwnerId() const {
  return ownerId_;
}

void RenewAdditionalBandwidthRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RenewAdditionalBandwidthRequest::getInstanceId() const {
  return instanceId_;
}

void RenewAdditionalBandwidthRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RenewAdditionalBandwidthRequest::getCategory() const {
  return category_;
}

void RenewAdditionalBandwidthRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

