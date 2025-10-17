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

#include <alibabacloud/polardb/model/DeleteDBClusterEndpointZonalRequest.h>

using AlibabaCloud::Polardb::Model::DeleteDBClusterEndpointZonalRequest;

DeleteDBClusterEndpointZonalRequest::DeleteDBClusterEndpointZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DeleteDBClusterEndpointZonal") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBClusterEndpointZonalRequest::~DeleteDBClusterEndpointZonalRequest() {}

long DeleteDBClusterEndpointZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDBClusterEndpointZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDBClusterEndpointZonalRequest::getDBEndpointId() const {
  return dBEndpointId_;
}

void DeleteDBClusterEndpointZonalRequest::setDBEndpointId(const std::string &dBEndpointId) {
  dBEndpointId_ = dBEndpointId;
  setParameter(std::string("DBEndpointId"), dBEndpointId);
}

std::string DeleteDBClusterEndpointZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDBClusterEndpointZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDBClusterEndpointZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDBClusterEndpointZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDBClusterEndpointZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteDBClusterEndpointZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteDBClusterEndpointZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDBClusterEndpointZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDBClusterEndpointZonalRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDBClusterEndpointZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

