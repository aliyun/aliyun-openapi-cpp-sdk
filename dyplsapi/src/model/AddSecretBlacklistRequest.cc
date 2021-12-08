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

#include <alibabacloud/dyplsapi/model/AddSecretBlacklistRequest.h>

using AlibabaCloud::Dyplsapi::Model::AddSecretBlacklistRequest;

AddSecretBlacklistRequest::AddSecretBlacklistRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "AddSecretBlacklist") {
  setMethod(HttpRequest::Method::Post);
}

AddSecretBlacklistRequest::~AddSecretBlacklistRequest() {}

std::string AddSecretBlacklistRequest::getBlackType() const {
  return blackType_;
}

void AddSecretBlacklistRequest::setBlackType(const std::string &blackType) {
  blackType_ = blackType;
  setParameter(std::string("BlackType"), blackType);
}

long AddSecretBlacklistRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddSecretBlacklistRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddSecretBlacklistRequest::getRemark() const {
  return remark_;
}

void AddSecretBlacklistRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string AddSecretBlacklistRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddSecretBlacklistRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddSecretBlacklistRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddSecretBlacklistRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long AddSecretBlacklistRequest::getOwnerId() const {
  return ownerId_;
}

void AddSecretBlacklistRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddSecretBlacklistRequest::getPoolKey() const {
  return poolKey_;
}

void AddSecretBlacklistRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

std::string AddSecretBlacklistRequest::getBlackNo() const {
  return blackNo_;
}

void AddSecretBlacklistRequest::setBlackNo(const std::string &blackNo) {
  blackNo_ = blackNo;
  setParameter(std::string("BlackNo"), blackNo);
}

std::string AddSecretBlacklistRequest::getWayControl() const {
  return wayControl_;
}

void AddSecretBlacklistRequest::setWayControl(const std::string &wayControl) {
  wayControl_ = wayControl;
  setParameter(std::string("WayControl"), wayControl);
}

