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

#include <alibabacloud/rds/model/MigrateDBNodesRequest.h>

using AlibabaCloud::Rds::Model::MigrateDBNodesRequest;

MigrateDBNodesRequest::MigrateDBNodesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "MigrateDBNodes") {
  setMethod(HttpRequest::Method::Post);
}

MigrateDBNodesRequest::~MigrateDBNodesRequest() {}

long MigrateDBNodesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void MigrateDBNodesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string MigrateDBNodesRequest::getClientToken() const {
  return clientToken_;
}

void MigrateDBNodesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string MigrateDBNodesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void MigrateDBNodesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string MigrateDBNodesRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void MigrateDBNodesRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string MigrateDBNodesRequest::getRegionId() const {
  return regionId_;
}

void MigrateDBNodesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string MigrateDBNodesRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void MigrateDBNodesRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string MigrateDBNodesRequest::getSwitchTime() const {
  return switchTime_;
}

void MigrateDBNodesRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string MigrateDBNodesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void MigrateDBNodesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string MigrateDBNodesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void MigrateDBNodesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long MigrateDBNodesRequest::getOwnerId() const {
  return ownerId_;
}

void MigrateDBNodesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string MigrateDBNodesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void MigrateDBNodesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string MigrateDBNodesRequest::getDBNode() const {
  return dBNode_;
}

void MigrateDBNodesRequest::setDBNode(const std::string &dBNode) {
  dBNode_ = dBNode;
  setParameter(std::string("DBNode"), dBNode);
}

