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

#include <alibabacloud/polardb/model/RestartDBNodeZonalRequest.h>

using AlibabaCloud::Polardb::Model::RestartDBNodeZonalRequest;

RestartDBNodeZonalRequest::RestartDBNodeZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "RestartDBNodeZonal") {
  setMethod(HttpRequest::Method::Post);
}

RestartDBNodeZonalRequest::~RestartDBNodeZonalRequest() {}

long RestartDBNodeZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestartDBNodeZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RestartDBNodeZonalRequest::getDBNodeId() const {
  return dBNodeId_;
}

void RestartDBNodeZonalRequest::setDBNodeId(const std::string &dBNodeId) {
  dBNodeId_ = dBNodeId;
  setParameter(std::string("DBNodeId"), dBNodeId);
}

std::string RestartDBNodeZonalRequest::getClientToken() const {
  return clientToken_;
}

void RestartDBNodeZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RestartDBNodeZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RestartDBNodeZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RestartDBNodeZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RestartDBNodeZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RestartDBNodeZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void RestartDBNodeZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string RestartDBNodeZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RestartDBNodeZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RestartDBNodeZonalRequest::getOwnerId() const {
  return ownerId_;
}

void RestartDBNodeZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

