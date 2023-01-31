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

#include <alibabacloud/vpc/model/RemoveIPv6TranslatorAclListEntryRequest.h>

using AlibabaCloud::Vpc::Model::RemoveIPv6TranslatorAclListEntryRequest;

RemoveIPv6TranslatorAclListEntryRequest::RemoveIPv6TranslatorAclListEntryRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "RemoveIPv6TranslatorAclListEntry") {
  setMethod(HttpRequest::Method::Post);
}

RemoveIPv6TranslatorAclListEntryRequest::~RemoveIPv6TranslatorAclListEntryRequest() {}

long RemoveIPv6TranslatorAclListEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RemoveIPv6TranslatorAclListEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RemoveIPv6TranslatorAclListEntryRequest::getClientToken() const {
  return clientToken_;
}

void RemoveIPv6TranslatorAclListEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RemoveIPv6TranslatorAclListEntryRequest::getRegionId() const {
  return regionId_;
}

void RemoveIPv6TranslatorAclListEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RemoveIPv6TranslatorAclListEntryRequest::getAclId() const {
  return aclId_;
}

void RemoveIPv6TranslatorAclListEntryRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string RemoveIPv6TranslatorAclListEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RemoveIPv6TranslatorAclListEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RemoveIPv6TranslatorAclListEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RemoveIPv6TranslatorAclListEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RemoveIPv6TranslatorAclListEntryRequest::getOwnerId() const {
  return ownerId_;
}

void RemoveIPv6TranslatorAclListEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RemoveIPv6TranslatorAclListEntryRequest::getAclEntryId() const {
  return aclEntryId_;
}

void RemoveIPv6TranslatorAclListEntryRequest::setAclEntryId(const std::string &aclEntryId) {
  aclEntryId_ = aclEntryId;
  setParameter(std::string("AclEntryId"), aclEntryId);
}

