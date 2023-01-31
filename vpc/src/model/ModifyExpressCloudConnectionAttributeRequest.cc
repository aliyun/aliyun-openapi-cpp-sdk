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

#include <alibabacloud/vpc/model/ModifyExpressCloudConnectionAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyExpressCloudConnectionAttributeRequest;

ModifyExpressCloudConnectionAttributeRequest::ModifyExpressCloudConnectionAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyExpressCloudConnectionAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyExpressCloudConnectionAttributeRequest::~ModifyExpressCloudConnectionAttributeRequest() {}

long ModifyExpressCloudConnectionAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyExpressCloudConnectionAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyExpressCloudConnectionAttributeRequest::getDescription() const {
  return description_;
}

void ModifyExpressCloudConnectionAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyExpressCloudConnectionAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyExpressCloudConnectionAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyExpressCloudConnectionAttributeRequest::getEccId() const {
  return eccId_;
}

void ModifyExpressCloudConnectionAttributeRequest::setEccId(const std::string &eccId) {
  eccId_ = eccId;
  setParameter(std::string("EccId"), eccId);
}

std::string ModifyExpressCloudConnectionAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyExpressCloudConnectionAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyExpressCloudConnectionAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyExpressCloudConnectionAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyExpressCloudConnectionAttributeRequest::getCeIp() const {
  return ceIp_;
}

void ModifyExpressCloudConnectionAttributeRequest::setCeIp(const std::string &ceIp) {
  ceIp_ = ceIp;
  setParameter(std::string("CeIp"), ceIp);
}

std::string ModifyExpressCloudConnectionAttributeRequest::getBgpAs() const {
  return bgpAs_;
}

void ModifyExpressCloudConnectionAttributeRequest::setBgpAs(const std::string &bgpAs) {
  bgpAs_ = bgpAs;
  setParameter(std::string("BgpAs"), bgpAs);
}

std::string ModifyExpressCloudConnectionAttributeRequest::getPeIp() const {
  return peIp_;
}

void ModifyExpressCloudConnectionAttributeRequest::setPeIp(const std::string &peIp) {
  peIp_ = peIp;
  setParameter(std::string("PeIp"), peIp);
}

long ModifyExpressCloudConnectionAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyExpressCloudConnectionAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyExpressCloudConnectionAttributeRequest::getName() const {
  return name_;
}

void ModifyExpressCloudConnectionAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

