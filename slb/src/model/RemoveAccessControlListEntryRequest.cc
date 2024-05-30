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

#include <alibabacloud/slb/model/RemoveAccessControlListEntryRequest.h>

using AlibabaCloud::Slb::Model::RemoveAccessControlListEntryRequest;

RemoveAccessControlListEntryRequest::RemoveAccessControlListEntryRequest()
    : RpcServiceRequest("slb", "2014-05-15", "RemoveAccessControlListEntry") {
  setMethod(HttpRequest::Method::Post);
}

RemoveAccessControlListEntryRequest::~RemoveAccessControlListEntryRequest() {}

std::string RemoveAccessControlListEntryRequest::getAccess_key_id() const {
  return access_key_id_;
}

void RemoveAccessControlListEntryRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long RemoveAccessControlListEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RemoveAccessControlListEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RemoveAccessControlListEntryRequest::getAclEntrys() const {
  return aclEntrys_;
}

void RemoveAccessControlListEntryRequest::setAclEntrys(const std::string &aclEntrys) {
  aclEntrys_ = aclEntrys;
  setParameter(std::string("AclEntrys"), aclEntrys);
}

std::string RemoveAccessControlListEntryRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RemoveAccessControlListEntryRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RemoveAccessControlListEntryRequest::getRegionId() const {
  return regionId_;
}

void RemoveAccessControlListEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RemoveAccessControlListEntryRequest::getAclId() const {
  return aclId_;
}

void RemoveAccessControlListEntryRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string RemoveAccessControlListEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RemoveAccessControlListEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RemoveAccessControlListEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RemoveAccessControlListEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RemoveAccessControlListEntryRequest::getOwnerId() const {
  return ownerId_;
}

void RemoveAccessControlListEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RemoveAccessControlListEntryRequest::getTags() const {
  return tags_;
}

void RemoveAccessControlListEntryRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

