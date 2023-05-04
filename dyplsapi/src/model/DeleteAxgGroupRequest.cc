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

#include <alibabacloud/dyplsapi/model/DeleteAxgGroupRequest.h>

using AlibabaCloud::Dyplsapi::Model::DeleteAxgGroupRequest;

DeleteAxgGroupRequest::DeleteAxgGroupRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "DeleteAxgGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAxgGroupRequest::~DeleteAxgGroupRequest() {}

long DeleteAxgGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteAxgGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteAxgGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteAxgGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteAxgGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteAxgGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DeleteAxgGroupRequest::getGroupId() const {
  return groupId_;
}

void DeleteAxgGroupRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

long DeleteAxgGroupRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteAxgGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteAxgGroupRequest::getPoolKey() const {
  return poolKey_;
}

void DeleteAxgGroupRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

