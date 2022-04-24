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

#include <alibabacloud/polardb/model/DeleteDBClusterEndpointRequest.h>

using AlibabaCloud::Polardb::Model::DeleteDBClusterEndpointRequest;

DeleteDBClusterEndpointRequest::DeleteDBClusterEndpointRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DeleteDBClusterEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBClusterEndpointRequest::~DeleteDBClusterEndpointRequest() {}

long DeleteDBClusterEndpointRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDBClusterEndpointRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDBClusterEndpointRequest::getDBEndpointId() const {
  return dBEndpointId_;
}

void DeleteDBClusterEndpointRequest::setDBEndpointId(const std::string &dBEndpointId) {
  dBEndpointId_ = dBEndpointId;
  setParameter(std::string("DBEndpointId"), dBEndpointId);
}

std::string DeleteDBClusterEndpointRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDBClusterEndpointRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDBClusterEndpointRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDBClusterEndpointRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDBClusterEndpointRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteDBClusterEndpointRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteDBClusterEndpointRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDBClusterEndpointRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDBClusterEndpointRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDBClusterEndpointRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

