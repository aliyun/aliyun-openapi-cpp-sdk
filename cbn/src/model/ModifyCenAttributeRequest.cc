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

#include <alibabacloud/cbn/model/ModifyCenAttributeRequest.h>

using AlibabaCloud::Cbn::Model::ModifyCenAttributeRequest;

ModifyCenAttributeRequest::ModifyCenAttributeRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ModifyCenAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCenAttributeRequest::~ModifyCenAttributeRequest() {}

long ModifyCenAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCenAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCenAttributeRequest::getCenId() const {
  return cenId_;
}

void ModifyCenAttributeRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string ModifyCenAttributeRequest::getIpv6Level() const {
  return ipv6Level_;
}

void ModifyCenAttributeRequest::setIpv6Level(const std::string &ipv6Level) {
  ipv6Level_ = ipv6Level;
  setParameter(std::string("Ipv6Level"), ipv6Level);
}

std::string ModifyCenAttributeRequest::getDescription() const {
  return description_;
}

void ModifyCenAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyCenAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCenAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyCenAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyCenAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyCenAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCenAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyCenAttributeRequest::getVersion() const {
  return version_;
}

void ModifyCenAttributeRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ModifyCenAttributeRequest::getProtectionLevel() const {
  return protectionLevel_;
}

void ModifyCenAttributeRequest::setProtectionLevel(const std::string &protectionLevel) {
  protectionLevel_ = protectionLevel;
  setParameter(std::string("ProtectionLevel"), protectionLevel);
}

std::string ModifyCenAttributeRequest::getName() const {
  return name_;
}

void ModifyCenAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

