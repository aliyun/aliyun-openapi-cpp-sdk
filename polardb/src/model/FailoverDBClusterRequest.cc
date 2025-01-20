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

#include <alibabacloud/polardb/model/FailoverDBClusterRequest.h>

using AlibabaCloud::Polardb::Model::FailoverDBClusterRequest;

FailoverDBClusterRequest::FailoverDBClusterRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "FailoverDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

FailoverDBClusterRequest::~FailoverDBClusterRequest() {}

long FailoverDBClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void FailoverDBClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string FailoverDBClusterRequest::getClientToken() const {
  return clientToken_;
}

void FailoverDBClusterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string FailoverDBClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void FailoverDBClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool FailoverDBClusterRequest::getRollBackForDisaster() const {
  return rollBackForDisaster_;
}

void FailoverDBClusterRequest::setRollBackForDisaster(bool rollBackForDisaster) {
  rollBackForDisaster_ = rollBackForDisaster;
  setParameter(std::string("RollBackForDisaster"), rollBackForDisaster ? "true" : "false");
}

std::string FailoverDBClusterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void FailoverDBClusterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string FailoverDBClusterRequest::getDBClusterId() const {
  return dBClusterId_;
}

void FailoverDBClusterRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string FailoverDBClusterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void FailoverDBClusterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string FailoverDBClusterRequest::getTargetZoneType() const {
  return targetZoneType_;
}

void FailoverDBClusterRequest::setTargetZoneType(const std::string &targetZoneType) {
  targetZoneType_ = targetZoneType;
  setParameter(std::string("TargetZoneType"), targetZoneType);
}

long FailoverDBClusterRequest::getOwnerId() const {
  return ownerId_;
}

void FailoverDBClusterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string FailoverDBClusterRequest::getTargetDBNodeId() const {
  return targetDBNodeId_;
}

void FailoverDBClusterRequest::setTargetDBNodeId(const std::string &targetDBNodeId) {
  targetDBNodeId_ = targetDBNodeId;
  setParameter(std::string("TargetDBNodeId"), targetDBNodeId);
}

bool FailoverDBClusterRequest::getIsForce() const {
  return isForce_;
}

void FailoverDBClusterRequest::setIsForce(bool isForce) {
  isForce_ = isForce;
  setParameter(std::string("IsForce"), isForce ? "true" : "false");
}

