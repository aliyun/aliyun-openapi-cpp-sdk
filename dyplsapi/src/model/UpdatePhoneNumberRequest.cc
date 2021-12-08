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

#include <alibabacloud/dyplsapi/model/UpdatePhoneNumberRequest.h>

using AlibabaCloud::Dyplsapi::Model::UpdatePhoneNumberRequest;

UpdatePhoneNumberRequest::UpdatePhoneNumberRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "UpdatePhoneNumber") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePhoneNumberRequest::~UpdatePhoneNumberRequest() {}

long UpdatePhoneNumberRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdatePhoneNumberRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdatePhoneNumberRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdatePhoneNumberRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long UpdatePhoneNumberRequest::getSubsId() const {
  return subsId_;
}

void UpdatePhoneNumberRequest::setSubsId(long subsId) {
  subsId_ = subsId;
  setParameter(std::string("SubsId"), std::to_string(subsId));
}

std::string UpdatePhoneNumberRequest::getSecretNo() const {
  return secretNo_;
}

void UpdatePhoneNumberRequest::setSecretNo(const std::string &secretNo) {
  secretNo_ = secretNo;
  setParameter(std::string("SecretNo"), secretNo);
}

std::string UpdatePhoneNumberRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdatePhoneNumberRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdatePhoneNumberRequest::getProdCode() const {
  return prodCode_;
}

void UpdatePhoneNumberRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string UpdatePhoneNumberRequest::getBindToken() const {
  return bindToken_;
}

void UpdatePhoneNumberRequest::setBindToken(const std::string &bindToken) {
  bindToken_ = bindToken;
  setParameter(std::string("BindToken"), bindToken);
}

long UpdatePhoneNumberRequest::getOwnerId() const {
  return ownerId_;
}

void UpdatePhoneNumberRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdatePhoneNumberRequest::getPoolKey() const {
  return poolKey_;
}

void UpdatePhoneNumberRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

std::string UpdatePhoneNumberRequest::getNewPhoneNo() const {
  return newPhoneNo_;
}

void UpdatePhoneNumberRequest::setNewPhoneNo(const std::string &newPhoneNo) {
  newPhoneNo_ = newPhoneNo;
  setParameter(std::string("NewPhoneNo"), newPhoneNo);
}

