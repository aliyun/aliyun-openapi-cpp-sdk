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

#include <alibabacloud/vpc/model/CreateIPv6TranslatorRequest.h>

using AlibabaCloud::Vpc::Model::CreateIPv6TranslatorRequest;

CreateIPv6TranslatorRequest::CreateIPv6TranslatorRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateIPv6Translator") {
  setMethod(HttpRequest::Method::Post);
}

CreateIPv6TranslatorRequest::~CreateIPv6TranslatorRequest() {}

long CreateIPv6TranslatorRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateIPv6TranslatorRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateIPv6TranslatorRequest::getClientToken() const {
  return clientToken_;
}

void CreateIPv6TranslatorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateIPv6TranslatorRequest::getSpec() const {
  return spec_;
}

void CreateIPv6TranslatorRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

int CreateIPv6TranslatorRequest::getDuration() const {
  return duration_;
}

void CreateIPv6TranslatorRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string CreateIPv6TranslatorRequest::getRegionId() const {
  return regionId_;
}

void CreateIPv6TranslatorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateIPv6TranslatorRequest::getAutoPay() const {
  return autoPay_;
}

void CreateIPv6TranslatorRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateIPv6TranslatorRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateIPv6TranslatorRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateIPv6TranslatorRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateIPv6TranslatorRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateIPv6TranslatorRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateIPv6TranslatorRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateIPv6TranslatorRequest::getOwnerId() const {
  return ownerId_;
}

void CreateIPv6TranslatorRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateIPv6TranslatorRequest::getName() const {
  return name_;
}

void CreateIPv6TranslatorRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateIPv6TranslatorRequest::getPayType() const {
  return payType_;
}

void CreateIPv6TranslatorRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string CreateIPv6TranslatorRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateIPv6TranslatorRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

