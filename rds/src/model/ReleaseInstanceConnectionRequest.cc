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

#include <alibabacloud/rds/model/ReleaseInstanceConnectionRequest.h>

using AlibabaCloud::Rds::Model::ReleaseInstanceConnectionRequest;

ReleaseInstanceConnectionRequest::ReleaseInstanceConnectionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ReleaseInstanceConnection") {
  setMethod(HttpRequest::Method::Post);
}

ReleaseInstanceConnectionRequest::~ReleaseInstanceConnectionRequest() {}

long ReleaseInstanceConnectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReleaseInstanceConnectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReleaseInstanceConnectionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ReleaseInstanceConnectionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ReleaseInstanceConnectionRequest::getRegionId() const {
  return regionId_;
}

void ReleaseInstanceConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ReleaseInstanceConnectionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ReleaseInstanceConnectionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ReleaseInstanceConnectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReleaseInstanceConnectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReleaseInstanceConnectionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReleaseInstanceConnectionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReleaseInstanceConnectionRequest::getOwnerId() const {
  return ownerId_;
}

void ReleaseInstanceConnectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ReleaseInstanceConnectionRequest::getCurrentConnectionString() const {
  return currentConnectionString_;
}

void ReleaseInstanceConnectionRequest::setCurrentConnectionString(const std::string &currentConnectionString) {
  currentConnectionString_ = currentConnectionString;
  setParameter(std::string("CurrentConnectionString"), currentConnectionString);
}

std::string ReleaseInstanceConnectionRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void ReleaseInstanceConnectionRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

