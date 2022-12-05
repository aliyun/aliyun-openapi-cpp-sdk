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

#include <alibabacloud/polardb/model/DeleteDBEndpointAddressRequest.h>

using AlibabaCloud::Polardb::Model::DeleteDBEndpointAddressRequest;

DeleteDBEndpointAddressRequest::DeleteDBEndpointAddressRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DeleteDBEndpointAddress") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBEndpointAddressRequest::~DeleteDBEndpointAddressRequest() {}

long DeleteDBEndpointAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDBEndpointAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDBEndpointAddressRequest::getDBEndpointId() const {
  return dBEndpointId_;
}

void DeleteDBEndpointAddressRequest::setDBEndpointId(const std::string &dBEndpointId) {
  dBEndpointId_ = dBEndpointId;
  setParameter(std::string("DBEndpointId"), dBEndpointId);
}

std::string DeleteDBEndpointAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDBEndpointAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDBEndpointAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDBEndpointAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDBEndpointAddressRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteDBEndpointAddressRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteDBEndpointAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDBEndpointAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDBEndpointAddressRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDBEndpointAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteDBEndpointAddressRequest::getNetType() const {
  return netType_;
}

void DeleteDBEndpointAddressRequest::setNetType(const std::string &netType) {
  netType_ = netType;
  setParameter(std::string("NetType"), netType);
}

