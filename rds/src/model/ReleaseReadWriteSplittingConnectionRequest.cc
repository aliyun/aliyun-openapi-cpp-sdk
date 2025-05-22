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

#include <alibabacloud/rds/model/ReleaseReadWriteSplittingConnectionRequest.h>

using AlibabaCloud::Rds::Model::ReleaseReadWriteSplittingConnectionRequest;

ReleaseReadWriteSplittingConnectionRequest::ReleaseReadWriteSplittingConnectionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ReleaseReadWriteSplittingConnection") {
  setMethod(HttpRequest::Method::Post);
}

ReleaseReadWriteSplittingConnectionRequest::~ReleaseReadWriteSplittingConnectionRequest() {}

long ReleaseReadWriteSplittingConnectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReleaseReadWriteSplittingConnectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReleaseReadWriteSplittingConnectionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ReleaseReadWriteSplittingConnectionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ReleaseReadWriteSplittingConnectionRequest::getRegionId() const {
  return regionId_;
}

void ReleaseReadWriteSplittingConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ReleaseReadWriteSplittingConnectionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ReleaseReadWriteSplittingConnectionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ReleaseReadWriteSplittingConnectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReleaseReadWriteSplittingConnectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReleaseReadWriteSplittingConnectionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReleaseReadWriteSplittingConnectionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReleaseReadWriteSplittingConnectionRequest::getOwnerId() const {
  return ownerId_;
}

void ReleaseReadWriteSplittingConnectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

