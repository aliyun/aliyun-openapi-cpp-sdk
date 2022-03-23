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

#include <alibabacloud/r-kvstore/model/RemoveSubInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::RemoveSubInstanceRequest;

RemoveSubInstanceRequest::RemoveSubInstanceRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "RemoveSubInstance") {
  setMethod(HttpRequest::Method::Post);
}

RemoveSubInstanceRequest::~RemoveSubInstanceRequest() {}

long RemoveSubInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RemoveSubInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool RemoveSubInstanceRequest::getReleaseSubInstance() const {
  return releaseSubInstance_;
}

void RemoveSubInstanceRequest::setReleaseSubInstance(bool releaseSubInstance) {
  releaseSubInstance_ = releaseSubInstance;
  setParameter(std::string("ReleaseSubInstance"), releaseSubInstance ? "true" : "false");
}

std::string RemoveSubInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RemoveSubInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RemoveSubInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void RemoveSubInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RemoveSubInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RemoveSubInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RemoveSubInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RemoveSubInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RemoveSubInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RemoveSubInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RemoveSubInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RemoveSubInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

