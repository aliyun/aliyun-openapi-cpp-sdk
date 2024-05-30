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

#include <alibabacloud/slb/model/DeleteAccessControlListRequest.h>

using AlibabaCloud::Slb::Model::DeleteAccessControlListRequest;

DeleteAccessControlListRequest::DeleteAccessControlListRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DeleteAccessControlList") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAccessControlListRequest::~DeleteAccessControlListRequest() {}

std::string DeleteAccessControlListRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DeleteAccessControlListRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DeleteAccessControlListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteAccessControlListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteAccessControlListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteAccessControlListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteAccessControlListRequest::getRegionId() const {
  return regionId_;
}

void DeleteAccessControlListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteAccessControlListRequest::getAclId() const {
  return aclId_;
}

void DeleteAccessControlListRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string DeleteAccessControlListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteAccessControlListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteAccessControlListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteAccessControlListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteAccessControlListRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteAccessControlListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteAccessControlListRequest::getTags() const {
  return tags_;
}

void DeleteAccessControlListRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

