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

#include <alibabacloud/polardb/model/FailoverDBClusterZonalRequest.h>

using AlibabaCloud::Polardb::Model::FailoverDBClusterZonalRequest;

FailoverDBClusterZonalRequest::FailoverDBClusterZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "FailoverDBClusterZonal") {
  setMethod(HttpRequest::Method::Post);
}

FailoverDBClusterZonalRequest::~FailoverDBClusterZonalRequest() {}

long FailoverDBClusterZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void FailoverDBClusterZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string FailoverDBClusterZonalRequest::getClientToken() const {
  return clientToken_;
}

void FailoverDBClusterZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string FailoverDBClusterZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void FailoverDBClusterZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool FailoverDBClusterZonalRequest::getRollBackForDisaster() const {
  return rollBackForDisaster_;
}

void FailoverDBClusterZonalRequest::setRollBackForDisaster(bool rollBackForDisaster) {
  rollBackForDisaster_ = rollBackForDisaster;
  setParameter(std::string("RollBackForDisaster"), rollBackForDisaster ? "true" : "false");
}

std::string FailoverDBClusterZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void FailoverDBClusterZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string FailoverDBClusterZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void FailoverDBClusterZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string FailoverDBClusterZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void FailoverDBClusterZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string FailoverDBClusterZonalRequest::getTargetZoneType() const {
  return targetZoneType_;
}

void FailoverDBClusterZonalRequest::setTargetZoneType(const std::string &targetZoneType) {
  targetZoneType_ = targetZoneType;
  setParameter(std::string("TargetZoneType"), targetZoneType);
}

long FailoverDBClusterZonalRequest::getOwnerId() const {
  return ownerId_;
}

void FailoverDBClusterZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string FailoverDBClusterZonalRequest::getTargetDBNodeId() const {
  return targetDBNodeId_;
}

void FailoverDBClusterZonalRequest::setTargetDBNodeId(const std::string &targetDBNodeId) {
  targetDBNodeId_ = targetDBNodeId;
  setParameter(std::string("TargetDBNodeId"), targetDBNodeId);
}

bool FailoverDBClusterZonalRequest::getIsForce() const {
  return isForce_;
}

void FailoverDBClusterZonalRequest::setIsForce(bool isForce) {
  isForce_ = isForce;
  setParameter(std::string("IsForce"), isForce ? "true" : "false");
}

