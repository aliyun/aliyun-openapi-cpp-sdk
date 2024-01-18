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

#include <alibabacloud/r-kvstore/model/AddShardingNodeRequest.h>

using AlibabaCloud::R_kvstore::Model::AddShardingNodeRequest;

AddShardingNodeRequest::AddShardingNodeRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "AddShardingNode") {
  setMethod(HttpRequest::Method::Post);
}

AddShardingNodeRequest::~AddShardingNodeRequest() {}

long AddShardingNodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddShardingNodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddShardingNodeRequest::getClientToken() const {
  return clientToken_;
}

void AddShardingNodeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddShardingNodeRequest::getCouponNo() const {
  return couponNo_;
}

void AddShardingNodeRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string AddShardingNodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddShardingNodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddShardingNodeRequest::getSecurityToken() const {
  return securityToken_;
}

void AddShardingNodeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string AddShardingNodeRequest::getSourceBiz() const {
  return sourceBiz_;
}

void AddShardingNodeRequest::setSourceBiz(const std::string &sourceBiz) {
  sourceBiz_ = sourceBiz;
  setParameter(std::string("SourceBiz"), sourceBiz);
}

int AddShardingNodeRequest::getShardCount() const {
  return shardCount_;
}

void AddShardingNodeRequest::setShardCount(int shardCount) {
  shardCount_ = shardCount;
  setParameter(std::string("ShardCount"), std::to_string(shardCount));
}

std::string AddShardingNodeRequest::getBusinessInfo() const {
  return businessInfo_;
}

void AddShardingNodeRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

bool AddShardingNodeRequest::getAutoPay() const {
  return autoPay_;
}

void AddShardingNodeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string AddShardingNodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddShardingNodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddShardingNodeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddShardingNodeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddShardingNodeRequest::getOwnerId() const {
  return ownerId_;
}

void AddShardingNodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddShardingNodeRequest::getVSwitchId() const {
  return vSwitchId_;
}

void AddShardingNodeRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

bool AddShardingNodeRequest::getForceTrans() const {
  return forceTrans_;
}

void AddShardingNodeRequest::setForceTrans(bool forceTrans) {
  forceTrans_ = forceTrans;
  setParameter(std::string("ForceTrans"), forceTrans ? "true" : "false");
}

std::string AddShardingNodeRequest::getInstanceId() const {
  return instanceId_;
}

void AddShardingNodeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

