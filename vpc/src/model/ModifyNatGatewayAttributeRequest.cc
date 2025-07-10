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

#include <alibabacloud/vpc/model/ModifyNatGatewayAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyNatGatewayAttributeRequest;

ModifyNatGatewayAttributeRequest::ModifyNatGatewayAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyNatGatewayAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNatGatewayAttributeRequest::~ModifyNatGatewayAttributeRequest() {}

long ModifyNatGatewayAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyNatGatewayAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool ModifyNatGatewayAttributeRequest::getSecurityProtectionEnabled() const {
  return securityProtectionEnabled_;
}

void ModifyNatGatewayAttributeRequest::setSecurityProtectionEnabled(bool securityProtectionEnabled) {
  securityProtectionEnabled_ = securityProtectionEnabled;
  setParameter(std::string("SecurityProtectionEnabled"), securityProtectionEnabled ? "true" : "false");
}

std::string ModifyNatGatewayAttributeRequest::getDescription() const {
  return description_;
}

void ModifyNatGatewayAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

ModifyNatGatewayAttributeRequest::LogDelivery ModifyNatGatewayAttributeRequest::getLogDelivery() const {
  return logDelivery_;
}

void ModifyNatGatewayAttributeRequest::setLogDelivery(const ModifyNatGatewayAttributeRequest::LogDelivery &logDelivery) {
  logDelivery_ = logDelivery;
  setParameter(std::string("LogDelivery") + ".LogDeliveryType", logDelivery.logDeliveryType);
  setParameter(std::string("LogDelivery") + ".LogDestination", logDelivery.logDestination);
}

bool ModifyNatGatewayAttributeRequest::getIcmpReplyEnabled() const {
  return icmpReplyEnabled_;
}

void ModifyNatGatewayAttributeRequest::setIcmpReplyEnabled(bool icmpReplyEnabled) {
  icmpReplyEnabled_ = icmpReplyEnabled;
  setParameter(std::string("IcmpReplyEnabled"), icmpReplyEnabled ? "true" : "false");
}

std::string ModifyNatGatewayAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyNatGatewayAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyNatGatewayAttributeRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void ModifyNatGatewayAttributeRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::string ModifyNatGatewayAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyNatGatewayAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyNatGatewayAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyNatGatewayAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyNatGatewayAttributeRequest::getPrivateLinkMode() const {
  return privateLinkMode_;
}

void ModifyNatGatewayAttributeRequest::setPrivateLinkMode(const std::string &privateLinkMode) {
  privateLinkMode_ = privateLinkMode;
  setParameter(std::string("PrivateLinkMode"), privateLinkMode);
}

long ModifyNatGatewayAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyNatGatewayAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool ModifyNatGatewayAttributeRequest::getEnableSessionLog() const {
  return enableSessionLog_;
}

void ModifyNatGatewayAttributeRequest::setEnableSessionLog(bool enableSessionLog) {
  enableSessionLog_ = enableSessionLog;
  setParameter(std::string("EnableSessionLog"), enableSessionLog ? "true" : "false");
}

std::string ModifyNatGatewayAttributeRequest::getName() const {
  return name_;
}

void ModifyNatGatewayAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ModifyNatGatewayAttributeRequest::getEipBindMode() const {
  return eipBindMode_;
}

void ModifyNatGatewayAttributeRequest::setEipBindMode(const std::string &eipBindMode) {
  eipBindMode_ = eipBindMode;
  setParameter(std::string("EipBindMode"), eipBindMode);
}

