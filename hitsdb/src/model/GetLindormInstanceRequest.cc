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

#include <alibabacloud/hitsdb/model/GetLindormInstanceRequest.h>

using AlibabaCloud::Hitsdb::Model::GetLindormInstanceRequest;

GetLindormInstanceRequest::GetLindormInstanceRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "GetLindormInstance") {
  setMethod(HttpRequest::Method::Post);
}

GetLindormInstanceRequest::~GetLindormInstanceRequest() {}

long GetLindormInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetLindormInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetLindormInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetLindormInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetLindormInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void GetLindormInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string GetLindormInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetLindormInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetLindormInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetLindormInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetLindormInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void GetLindormInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetLindormInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void GetLindormInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

