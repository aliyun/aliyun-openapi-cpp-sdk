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

#include <alibabacloud/smartag/model/ModifySmartAccessGatewayRequest.h>

using AlibabaCloud::Smartag::Model::ModifySmartAccessGatewayRequest;

ModifySmartAccessGatewayRequest::ModifySmartAccessGatewayRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySmartAccessGateway") {
  setMethod(HttpRequest::Method::Post);
}

ModifySmartAccessGatewayRequest::~ModifySmartAccessGatewayRequest() {}

long ModifySmartAccessGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySmartAccessGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySmartAccessGatewayRequest::getCity() const {
  return city_;
}

void ModifySmartAccessGatewayRequest::setCity(const std::string &city) {
  city_ = city;
  setParameter(std::string("City"), city);
}

std::string ModifySmartAccessGatewayRequest::getDescription() const {
  return description_;
}

void ModifySmartAccessGatewayRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int ModifySmartAccessGatewayRequest::getSecurityLockThreshold() const {
  return securityLockThreshold_;
}

void ModifySmartAccessGatewayRequest::setSecurityLockThreshold(int securityLockThreshold) {
  securityLockThreshold_ = securityLockThreshold;
  setParameter(std::string("SecurityLockThreshold"), std::to_string(securityLockThreshold));
}

std::string ModifySmartAccessGatewayRequest::getRoutingStrategy() const {
  return routingStrategy_;
}

void ModifySmartAccessGatewayRequest::setRoutingStrategy(const std::string &routingStrategy) {
  routingStrategy_ = routingStrategy;
  setParameter(std::string("RoutingStrategy"), routingStrategy);
}

std::string ModifySmartAccessGatewayRequest::getRegionId() const {
  return regionId_;
}

void ModifySmartAccessGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySmartAccessGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySmartAccessGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySmartAccessGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySmartAccessGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySmartAccessGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySmartAccessGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySmartAccessGatewayRequest::getName() const {
  return name_;
}

void ModifySmartAccessGatewayRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ModifySmartAccessGatewayRequest::getCidrBlock() const {
  return cidrBlock_;
}

void ModifySmartAccessGatewayRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

std::string ModifySmartAccessGatewayRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySmartAccessGatewayRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

