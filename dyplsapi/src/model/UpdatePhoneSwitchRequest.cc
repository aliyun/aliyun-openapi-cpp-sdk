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

#include <alibabacloud/dyplsapi/model/UpdatePhoneSwitchRequest.h>

using AlibabaCloud::Dyplsapi::Model::UpdatePhoneSwitchRequest;

UpdatePhoneSwitchRequest::UpdatePhoneSwitchRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "UpdatePhoneSwitch") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePhoneSwitchRequest::~UpdatePhoneSwitchRequest() {}

long UpdatePhoneSwitchRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdatePhoneSwitchRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int UpdatePhoneSwitchRequest::getSwitchStatus() const {
  return switchStatus_;
}

void UpdatePhoneSwitchRequest::setSwitchStatus(int switchStatus) {
  switchStatus_ = switchStatus;
  setParameter(std::string("SwitchStatus"), std::to_string(switchStatus));
}

std::string UpdatePhoneSwitchRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdatePhoneSwitchRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long UpdatePhoneSwitchRequest::getSubsId() const {
  return subsId_;
}

void UpdatePhoneSwitchRequest::setSubsId(long subsId) {
  subsId_ = subsId;
  setParameter(std::string("SubsId"), std::to_string(subsId));
}

std::string UpdatePhoneSwitchRequest::getSecretNo() const {
  return secretNo_;
}

void UpdatePhoneSwitchRequest::setSecretNo(const std::string &secretNo) {
  secretNo_ = secretNo;
  setParameter(std::string("SecretNo"), secretNo);
}

std::string UpdatePhoneSwitchRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdatePhoneSwitchRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdatePhoneSwitchRequest::getProdCode() const {
  return prodCode_;
}

void UpdatePhoneSwitchRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

long UpdatePhoneSwitchRequest::getOwnerId() const {
  return ownerId_;
}

void UpdatePhoneSwitchRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdatePhoneSwitchRequest::getPoolKey() const {
  return poolKey_;
}

void UpdatePhoneSwitchRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

