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

#include <alibabacloud/dyplsapi/model/CreateAxgGroupRequest.h>

using AlibabaCloud::Dyplsapi::Model::CreateAxgGroupRequest;

CreateAxgGroupRequest::CreateAxgGroupRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "CreateAxgGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateAxgGroupRequest::~CreateAxgGroupRequest() {}

long CreateAxgGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateAxgGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateAxgGroupRequest::getNumbers() const {
  return numbers_;
}

void CreateAxgGroupRequest::setNumbers(const std::string &numbers) {
  numbers_ = numbers;
  setParameter(std::string("Numbers"), numbers);
}

std::string CreateAxgGroupRequest::getRemark() const {
  return remark_;
}

void CreateAxgGroupRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string CreateAxgGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateAxgGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateAxgGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateAxgGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateAxgGroupRequest::getOwnerId() const {
  return ownerId_;
}

void CreateAxgGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateAxgGroupRequest::getPoolKey() const {
  return poolKey_;
}

void CreateAxgGroupRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

std::string CreateAxgGroupRequest::getName() const {
  return name_;
}

void CreateAxgGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

