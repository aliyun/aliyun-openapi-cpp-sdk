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

#include <alibabacloud/dyplsapi/model/UpdateSubscriptionRequest.h>

using AlibabaCloud::Dyplsapi::Model::UpdateSubscriptionRequest;

UpdateSubscriptionRequest::UpdateSubscriptionRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "UpdateSubscription") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSubscriptionRequest::~UpdateSubscriptionRequest() {}

long UpdateSubscriptionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateSubscriptionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int UpdateSubscriptionRequest::getCallDisplayType() const {
  return callDisplayType_;
}

void UpdateSubscriptionRequest::setCallDisplayType(int callDisplayType) {
  callDisplayType_ = callDisplayType;
  setParameter(std::string("CallDisplayType"), std::to_string(callDisplayType));
}

std::string UpdateSubscriptionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateSubscriptionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateSubscriptionRequest::getProductType() const {
  return productType_;
}

void UpdateSubscriptionRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string UpdateSubscriptionRequest::getSubsId() const {
  return subsId_;
}

void UpdateSubscriptionRequest::setSubsId(const std::string &subsId) {
  subsId_ = subsId;
  setParameter(std::string("SubsId"), subsId);
}

std::string UpdateSubscriptionRequest::getPhoneNoX() const {
  return phoneNoX_;
}

void UpdateSubscriptionRequest::setPhoneNoX(const std::string &phoneNoX) {
  phoneNoX_ = phoneNoX;
  setParameter(std::string("PhoneNoX"), phoneNoX);
}

std::string UpdateSubscriptionRequest::getRingConfig() const {
  return ringConfig_;
}

void UpdateSubscriptionRequest::setRingConfig(const std::string &ringConfig) {
  ringConfig_ = ringConfig;
  setParameter(std::string("RingConfig"), ringConfig);
}

bool UpdateSubscriptionRequest::getASRStatus() const {
  return aSRStatus_;
}

void UpdateSubscriptionRequest::setASRStatus(bool aSRStatus) {
  aSRStatus_ = aSRStatus;
  setParameter(std::string("ASRStatus"), aSRStatus ? "true" : "false");
}

std::string UpdateSubscriptionRequest::getPhoneNoB() const {
  return phoneNoB_;
}

void UpdateSubscriptionRequest::setPhoneNoB(const std::string &phoneNoB) {
  phoneNoB_ = phoneNoB;
  setParameter(std::string("PhoneNoB"), phoneNoB);
}

std::string UpdateSubscriptionRequest::getPhoneNoA() const {
  return phoneNoA_;
}

void UpdateSubscriptionRequest::setPhoneNoA(const std::string &phoneNoA) {
  phoneNoA_ = phoneNoA;
  setParameter(std::string("PhoneNoA"), phoneNoA);
}

std::string UpdateSubscriptionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateSubscriptionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateSubscriptionRequest::getGroupId() const {
  return groupId_;
}

void UpdateSubscriptionRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long UpdateSubscriptionRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateSubscriptionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateSubscriptionRequest::getPoolKey() const {
  return poolKey_;
}

void UpdateSubscriptionRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

std::string UpdateSubscriptionRequest::getExpiration() const {
  return expiration_;
}

void UpdateSubscriptionRequest::setExpiration(const std::string &expiration) {
  expiration_ = expiration;
  setParameter(std::string("Expiration"), expiration);
}

std::string UpdateSubscriptionRequest::getOutId() const {
  return outId_;
}

void UpdateSubscriptionRequest::setOutId(const std::string &outId) {
  outId_ = outId;
  setParameter(std::string("OutId"), outId);
}

bool UpdateSubscriptionRequest::getIsRecordingEnabled() const {
  return isRecordingEnabled_;
}

void UpdateSubscriptionRequest::setIsRecordingEnabled(bool isRecordingEnabled) {
  isRecordingEnabled_ = isRecordingEnabled;
  setParameter(std::string("IsRecordingEnabled"), isRecordingEnabled ? "true" : "false");
}

std::string UpdateSubscriptionRequest::getOperateType() const {
  return operateType_;
}

void UpdateSubscriptionRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

std::string UpdateSubscriptionRequest::getASRModelId() const {
  return aSRModelId_;
}

void UpdateSubscriptionRequest::setASRModelId(const std::string &aSRModelId) {
  aSRModelId_ = aSRModelId;
  setParameter(std::string("ASRModelId"), aSRModelId);
}

std::string UpdateSubscriptionRequest::getCallRestrict() const {
  return callRestrict_;
}

void UpdateSubscriptionRequest::setCallRestrict(const std::string &callRestrict) {
  callRestrict_ = callRestrict;
  setParameter(std::string("CallRestrict"), callRestrict);
}

