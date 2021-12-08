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

#include <alibabacloud/dyplsapi/model/OperateAxgGroupRequest.h>

using AlibabaCloud::Dyplsapi::Model::OperateAxgGroupRequest;

OperateAxgGroupRequest::OperateAxgGroupRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "OperateAxgGroup") {
  setMethod(HttpRequest::Method::Post);
}

OperateAxgGroupRequest::~OperateAxgGroupRequest() {}

long OperateAxgGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void OperateAxgGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string OperateAxgGroupRequest::getNumbers() const {
  return numbers_;
}

void OperateAxgGroupRequest::setNumbers(const std::string &numbers) {
  numbers_ = numbers;
  setParameter(std::string("Numbers"), numbers);
}

std::string OperateAxgGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void OperateAxgGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string OperateAxgGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void OperateAxgGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long OperateAxgGroupRequest::getGroupId() const {
  return groupId_;
}

void OperateAxgGroupRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

long OperateAxgGroupRequest::getOwnerId() const {
  return ownerId_;
}

void OperateAxgGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string OperateAxgGroupRequest::getPoolKey() const {
  return poolKey_;
}

void OperateAxgGroupRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

std::string OperateAxgGroupRequest::getOperateType() const {
  return operateType_;
}

void OperateAxgGroupRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

