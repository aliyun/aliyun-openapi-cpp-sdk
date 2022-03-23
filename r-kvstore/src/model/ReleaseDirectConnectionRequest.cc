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

#include <alibabacloud/r-kvstore/model/ReleaseDirectConnectionRequest.h>

using AlibabaCloud::R_kvstore::Model::ReleaseDirectConnectionRequest;

ReleaseDirectConnectionRequest::ReleaseDirectConnectionRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ReleaseDirectConnection") {
  setMethod(HttpRequest::Method::Post);
}

ReleaseDirectConnectionRequest::~ReleaseDirectConnectionRequest() {}

long ReleaseDirectConnectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReleaseDirectConnectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReleaseDirectConnectionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ReleaseDirectConnectionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ReleaseDirectConnectionRequest::getSecurityToken() const {
  return securityToken_;
}

void ReleaseDirectConnectionRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ReleaseDirectConnectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReleaseDirectConnectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReleaseDirectConnectionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReleaseDirectConnectionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReleaseDirectConnectionRequest::getOwnerId() const {
  return ownerId_;
}

void ReleaseDirectConnectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ReleaseDirectConnectionRequest::getInstanceId() const {
  return instanceId_;
}

void ReleaseDirectConnectionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

