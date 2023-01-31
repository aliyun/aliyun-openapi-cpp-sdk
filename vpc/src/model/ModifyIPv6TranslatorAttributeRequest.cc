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

#include <alibabacloud/vpc/model/ModifyIPv6TranslatorAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIPv6TranslatorAttributeRequest;

ModifyIPv6TranslatorAttributeRequest::ModifyIPv6TranslatorAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyIPv6TranslatorAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyIPv6TranslatorAttributeRequest::~ModifyIPv6TranslatorAttributeRequest() {}

long ModifyIPv6TranslatorAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyIPv6TranslatorAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyIPv6TranslatorAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyIPv6TranslatorAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyIPv6TranslatorAttributeRequest::getDescription() const {
  return description_;
}

void ModifyIPv6TranslatorAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyIPv6TranslatorAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyIPv6TranslatorAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyIPv6TranslatorAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyIPv6TranslatorAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyIPv6TranslatorAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyIPv6TranslatorAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyIPv6TranslatorAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyIPv6TranslatorAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyIPv6TranslatorAttributeRequest::getName() const {
  return name_;
}

void ModifyIPv6TranslatorAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ModifyIPv6TranslatorAttributeRequest::getIpv6TranslatorId() const {
  return ipv6TranslatorId_;
}

void ModifyIPv6TranslatorAttributeRequest::setIpv6TranslatorId(const std::string &ipv6TranslatorId) {
  ipv6TranslatorId_ = ipv6TranslatorId;
  setParameter(std::string("Ipv6TranslatorId"), ipv6TranslatorId);
}

