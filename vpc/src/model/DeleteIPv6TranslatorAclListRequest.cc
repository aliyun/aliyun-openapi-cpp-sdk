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

#include <alibabacloud/vpc/model/DeleteIPv6TranslatorAclListRequest.h>

using AlibabaCloud::Vpc::Model::DeleteIPv6TranslatorAclListRequest;

DeleteIPv6TranslatorAclListRequest::DeleteIPv6TranslatorAclListRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteIPv6TranslatorAclList") {
  setMethod(HttpRequest::Method::Post);
}

DeleteIPv6TranslatorAclListRequest::~DeleteIPv6TranslatorAclListRequest() {}

long DeleteIPv6TranslatorAclListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteIPv6TranslatorAclListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteIPv6TranslatorAclListRequest::getClientToken() const {
  return clientToken_;
}

void DeleteIPv6TranslatorAclListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteIPv6TranslatorAclListRequest::getRegionId() const {
  return regionId_;
}

void DeleteIPv6TranslatorAclListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteIPv6TranslatorAclListRequest::getAclId() const {
  return aclId_;
}

void DeleteIPv6TranslatorAclListRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string DeleteIPv6TranslatorAclListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteIPv6TranslatorAclListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteIPv6TranslatorAclListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteIPv6TranslatorAclListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteIPv6TranslatorAclListRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteIPv6TranslatorAclListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

