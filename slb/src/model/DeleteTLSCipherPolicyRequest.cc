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

#include <alibabacloud/slb/model/DeleteTLSCipherPolicyRequest.h>

using AlibabaCloud::Slb::Model::DeleteTLSCipherPolicyRequest;

DeleteTLSCipherPolicyRequest::DeleteTLSCipherPolicyRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DeleteTLSCipherPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTLSCipherPolicyRequest::~DeleteTLSCipherPolicyRequest() {}

std::string DeleteTLSCipherPolicyRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DeleteTLSCipherPolicyRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DeleteTLSCipherPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTLSCipherPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTLSCipherPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteTLSCipherPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteTLSCipherPolicyRequest::getTLSCipherPolicyId() const {
  return tLSCipherPolicyId_;
}

void DeleteTLSCipherPolicyRequest::setTLSCipherPolicyId(const std::string &tLSCipherPolicyId) {
  tLSCipherPolicyId_ = tLSCipherPolicyId;
  setParameter(std::string("TLSCipherPolicyId"), tLSCipherPolicyId);
}

std::string DeleteTLSCipherPolicyRequest::getRegionId() const {
  return regionId_;
}

void DeleteTLSCipherPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteTLSCipherPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTLSCipherPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTLSCipherPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTLSCipherPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTLSCipherPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTLSCipherPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

