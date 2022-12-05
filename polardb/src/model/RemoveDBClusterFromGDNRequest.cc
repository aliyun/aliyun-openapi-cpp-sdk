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

#include <alibabacloud/polardb/model/RemoveDBClusterFromGDNRequest.h>

using AlibabaCloud::Polardb::Model::RemoveDBClusterFromGDNRequest;

RemoveDBClusterFromGDNRequest::RemoveDBClusterFromGDNRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "RemoveDBClusterFromGDN") {
  setMethod(HttpRequest::Method::Post);
}

RemoveDBClusterFromGDNRequest::~RemoveDBClusterFromGDNRequest() {}

long RemoveDBClusterFromGDNRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RemoveDBClusterFromGDNRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RemoveDBClusterFromGDNRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RemoveDBClusterFromGDNRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RemoveDBClusterFromGDNRequest::getSecurityToken() const {
  return securityToken_;
}

void RemoveDBClusterFromGDNRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RemoveDBClusterFromGDNRequest::getGDNId() const {
  return gDNId_;
}

void RemoveDBClusterFromGDNRequest::setGDNId(const std::string &gDNId) {
  gDNId_ = gDNId;
  setParameter(std::string("GDNId"), gDNId);
}

std::string RemoveDBClusterFromGDNRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RemoveDBClusterFromGDNRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RemoveDBClusterFromGDNRequest::getDBClusterId() const {
  return dBClusterId_;
}

void RemoveDBClusterFromGDNRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string RemoveDBClusterFromGDNRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RemoveDBClusterFromGDNRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RemoveDBClusterFromGDNRequest::getOwnerId() const {
  return ownerId_;
}

void RemoveDBClusterFromGDNRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

