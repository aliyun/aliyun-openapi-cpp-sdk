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

#include <alibabacloud/slb/model/CreateTLSCipherPolicyRequest.h>

using AlibabaCloud::Slb::Model::CreateTLSCipherPolicyRequest;

CreateTLSCipherPolicyRequest::CreateTLSCipherPolicyRequest()
    : RpcServiceRequest("slb", "2014-05-15", "CreateTLSCipherPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateTLSCipherPolicyRequest::~CreateTLSCipherPolicyRequest() {}

std::string CreateTLSCipherPolicyRequest::getAccess_key_id() const {
  return access_key_id_;
}

void CreateTLSCipherPolicyRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long CreateTLSCipherPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTLSCipherPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTLSCipherPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateTLSCipherPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateTLSCipherPolicyRequest::getRegionId() const {
  return regionId_;
}

void CreateTLSCipherPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> CreateTLSCipherPolicyRequest::getCiphers() const {
  return ciphers_;
}

void CreateTLSCipherPolicyRequest::setCiphers(const std::vector<std::string> &ciphers) {
  ciphers_ = ciphers;
}

std::vector<std::string> CreateTLSCipherPolicyRequest::getTLSVersions() const {
  return tLSVersions_;
}

void CreateTLSCipherPolicyRequest::setTLSVersions(const std::vector<std::string> &tLSVersions) {
  tLSVersions_ = tLSVersions;
}

std::string CreateTLSCipherPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTLSCipherPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTLSCipherPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTLSCipherPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTLSCipherPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTLSCipherPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTLSCipherPolicyRequest::getName() const {
  return name_;
}

void CreateTLSCipherPolicyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

