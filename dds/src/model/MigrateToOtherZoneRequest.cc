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

#include <alibabacloud/dds/model/MigrateToOtherZoneRequest.h>

using AlibabaCloud::Dds::Model::MigrateToOtherZoneRequest;

MigrateToOtherZoneRequest::MigrateToOtherZoneRequest()
    : RpcServiceRequest("dds", "2015-12-01", "MigrateToOtherZone") {
  setMethod(HttpRequest::Method::Post);
}

MigrateToOtherZoneRequest::~MigrateToOtherZoneRequest() {}

long MigrateToOtherZoneRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void MigrateToOtherZoneRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string MigrateToOtherZoneRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void MigrateToOtherZoneRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string MigrateToOtherZoneRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void MigrateToOtherZoneRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string MigrateToOtherZoneRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void MigrateToOtherZoneRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string MigrateToOtherZoneRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void MigrateToOtherZoneRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long MigrateToOtherZoneRequest::getOwnerId() const {
  return ownerId_;
}

void MigrateToOtherZoneRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string MigrateToOtherZoneRequest::getVSwitchId() const {
  return vSwitchId_;
}

void MigrateToOtherZoneRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string MigrateToOtherZoneRequest::getInstanceId() const {
  return instanceId_;
}

void MigrateToOtherZoneRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string MigrateToOtherZoneRequest::getZoneId() const {
  return zoneId_;
}

void MigrateToOtherZoneRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

