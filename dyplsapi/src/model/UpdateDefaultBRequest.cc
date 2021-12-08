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

#include <alibabacloud/dyplsapi/model/UpdateDefaultBRequest.h>

using AlibabaCloud::Dyplsapi::Model::UpdateDefaultBRequest;

UpdateDefaultBRequest::UpdateDefaultBRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "UpdateDefaultB") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDefaultBRequest::~UpdateDefaultBRequest() {}

long UpdateDefaultBRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateDefaultBRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateDefaultBRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateDefaultBRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long UpdateDefaultBRequest::getSubsId() const {
  return subsId_;
}

void UpdateDefaultBRequest::setSubsId(long subsId) {
  subsId_ = subsId;
  setParameter(std::string("SubsId"), std::to_string(subsId));
}

std::string UpdateDefaultBRequest::getSecretNo() const {
  return secretNo_;
}

void UpdateDefaultBRequest::setSecretNo(const std::string &secretNo) {
  secretNo_ = secretNo;
  setParameter(std::string("SecretNo"), secretNo);
}

std::string UpdateDefaultBRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateDefaultBRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateDefaultBRequest::getProdCode() const {
  return prodCode_;
}

void UpdateDefaultBRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

long UpdateDefaultBRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateDefaultBRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateDefaultBRequest::getPhoneNo() const {
  return phoneNo_;
}

void UpdateDefaultBRequest::setPhoneNo(const std::string &phoneNo) {
  phoneNo_ = phoneNo;
  setParameter(std::string("PhoneNo"), phoneNo);
}

std::string UpdateDefaultBRequest::getPoolKey() const {
  return poolKey_;
}

void UpdateDefaultBRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

