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

#include <alibabacloud/slb/model/SetAccessControlListAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetAccessControlListAttributeRequest;

SetAccessControlListAttributeRequest::SetAccessControlListAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "SetAccessControlListAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetAccessControlListAttributeRequest::~SetAccessControlListAttributeRequest() {}

std::string SetAccessControlListAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void SetAccessControlListAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long SetAccessControlListAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetAccessControlListAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SetAccessControlListAttributeRequest::getAclName() const {
  return aclName_;
}

void SetAccessControlListAttributeRequest::setAclName(const std::string &aclName) {
  aclName_ = aclName;
  setParameter(std::string("AclName"), aclName);
}

std::string SetAccessControlListAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetAccessControlListAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetAccessControlListAttributeRequest::getRegionId() const {
  return regionId_;
}

void SetAccessControlListAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetAccessControlListAttributeRequest::getAclId() const {
  return aclId_;
}

void SetAccessControlListAttributeRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string SetAccessControlListAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetAccessControlListAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SetAccessControlListAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetAccessControlListAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SetAccessControlListAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void SetAccessControlListAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetAccessControlListAttributeRequest::getTags() const {
  return tags_;
}

void SetAccessControlListAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

