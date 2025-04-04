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

#include <alibabacloud/polardb/model/RestartDBLinkRequest.h>

using AlibabaCloud::Polardb::Model::RestartDBLinkRequest;

RestartDBLinkRequest::RestartDBLinkRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "RestartDBLink") {
  setMethod(HttpRequest::Method::Post);
}

RestartDBLinkRequest::~RestartDBLinkRequest() {}

long RestartDBLinkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestartDBLinkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RestartDBLinkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RestartDBLinkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RestartDBLinkRequest::getSecurityToken() const {
  return securityToken_;
}

void RestartDBLinkRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RestartDBLinkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RestartDBLinkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RestartDBLinkRequest::getDBClusterId() const {
  return dBClusterId_;
}

void RestartDBLinkRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string RestartDBLinkRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RestartDBLinkRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RestartDBLinkRequest::getOwnerId() const {
  return ownerId_;
}

void RestartDBLinkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

