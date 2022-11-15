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

#include <alibabacloud/hitsdb/model/ModifyInstancePayTypeRequest.h>

using AlibabaCloud::Hitsdb::Model::ModifyInstancePayTypeRequest;

ModifyInstancePayTypeRequest::ModifyInstancePayTypeRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "ModifyInstancePayType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstancePayTypeRequest::~ModifyInstancePayTypeRequest() {}

long ModifyInstancePayTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstancePayTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstancePayTypeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstancePayTypeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int ModifyInstancePayTypeRequest::getDuration() const {
  return duration_;
}

void ModifyInstancePayTypeRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string ModifyInstancePayTypeRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstancePayTypeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyInstancePayTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstancePayTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstancePayTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstancePayTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstancePayTypeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstancePayTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstancePayTypeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstancePayTypeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstancePayTypeRequest::getPricingCycle() const {
  return pricingCycle_;
}

void ModifyInstancePayTypeRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

std::string ModifyInstancePayTypeRequest::getPayType() const {
  return payType_;
}

void ModifyInstancePayTypeRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

