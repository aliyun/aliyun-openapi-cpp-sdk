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

#include <alibabacloud/slb/model/SetTLSCipherPolicyAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetTLSCipherPolicyAttributeRequest;

SetTLSCipherPolicyAttributeRequest::SetTLSCipherPolicyAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "SetTLSCipherPolicyAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetTLSCipherPolicyAttributeRequest::~SetTLSCipherPolicyAttributeRequest() {}

std::string SetTLSCipherPolicyAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void SetTLSCipherPolicyAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long SetTLSCipherPolicyAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetTLSCipherPolicyAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SetTLSCipherPolicyAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetTLSCipherPolicyAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetTLSCipherPolicyAttributeRequest::getTLSCipherPolicyId() const {
  return tLSCipherPolicyId_;
}

void SetTLSCipherPolicyAttributeRequest::setTLSCipherPolicyId(const std::string &tLSCipherPolicyId) {
  tLSCipherPolicyId_ = tLSCipherPolicyId;
  setParameter(std::string("TLSCipherPolicyId"), tLSCipherPolicyId);
}

std::string SetTLSCipherPolicyAttributeRequest::getRegionId() const {
  return regionId_;
}

void SetTLSCipherPolicyAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> SetTLSCipherPolicyAttributeRequest::getCiphers() const {
  return ciphers_;
}

void SetTLSCipherPolicyAttributeRequest::setCiphers(const std::vector<std::string> &ciphers) {
  ciphers_ = ciphers;
}

std::vector<std::string> SetTLSCipherPolicyAttributeRequest::getTLSVersions() const {
  return tLSVersions_;
}

void SetTLSCipherPolicyAttributeRequest::setTLSVersions(const std::vector<std::string> &tLSVersions) {
  tLSVersions_ = tLSVersions;
}

std::string SetTLSCipherPolicyAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetTLSCipherPolicyAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SetTLSCipherPolicyAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetTLSCipherPolicyAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SetTLSCipherPolicyAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void SetTLSCipherPolicyAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetTLSCipherPolicyAttributeRequest::getName() const {
  return name_;
}

void SetTLSCipherPolicyAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

