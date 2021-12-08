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

#include <alibabacloud/dyplsapi/model/OperateBlackNoRequest.h>

using AlibabaCloud::Dyplsapi::Model::OperateBlackNoRequest;

OperateBlackNoRequest::OperateBlackNoRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "OperateBlackNo") {
  setMethod(HttpRequest::Method::Post);
}

OperateBlackNoRequest::~OperateBlackNoRequest() {}

long OperateBlackNoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void OperateBlackNoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string OperateBlackNoRequest::getTips() const {
  return tips_;
}

void OperateBlackNoRequest::setTips(const std::string &tips) {
  tips_ = tips;
  setParameter(std::string("Tips"), tips);
}

std::string OperateBlackNoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void OperateBlackNoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string OperateBlackNoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void OperateBlackNoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long OperateBlackNoRequest::getOwnerId() const {
  return ownerId_;
}

void OperateBlackNoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string OperateBlackNoRequest::getPoolKey() const {
  return poolKey_;
}

void OperateBlackNoRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

std::string OperateBlackNoRequest::getBlackNo() const {
  return blackNo_;
}

void OperateBlackNoRequest::setBlackNo(const std::string &blackNo) {
  blackNo_ = blackNo;
  setParameter(std::string("BlackNo"), blackNo);
}

std::string OperateBlackNoRequest::getOperateType() const {
  return operateType_;
}

void OperateBlackNoRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

