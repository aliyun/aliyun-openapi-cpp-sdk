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

#include <alibabacloud/dds/model/MigrateAvailableZoneRequest.h>

using AlibabaCloud::Dds::Model::MigrateAvailableZoneRequest;

MigrateAvailableZoneRequest::MigrateAvailableZoneRequest()
    : RpcServiceRequest("dds", "2015-12-01", "MigrateAvailableZone") {
  setMethod(HttpRequest::Method::Post);
}

MigrateAvailableZoneRequest::~MigrateAvailableZoneRequest() {}

long MigrateAvailableZoneRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void MigrateAvailableZoneRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string MigrateAvailableZoneRequest::getSecondaryZoneId() const {
  return secondaryZoneId_;
}

void MigrateAvailableZoneRequest::setSecondaryZoneId(const std::string &secondaryZoneId) {
  secondaryZoneId_ = secondaryZoneId;
  setParameter(std::string("SecondaryZoneId"), secondaryZoneId);
}

std::string MigrateAvailableZoneRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void MigrateAvailableZoneRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string MigrateAvailableZoneRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void MigrateAvailableZoneRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string MigrateAvailableZoneRequest::getHiddenZoneId() const {
  return hiddenZoneId_;
}

void MigrateAvailableZoneRequest::setHiddenZoneId(const std::string &hiddenZoneId) {
  hiddenZoneId_ = hiddenZoneId;
  setParameter(std::string("HiddenZoneId"), hiddenZoneId);
}

std::string MigrateAvailableZoneRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void MigrateAvailableZoneRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string MigrateAvailableZoneRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void MigrateAvailableZoneRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string MigrateAvailableZoneRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void MigrateAvailableZoneRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long MigrateAvailableZoneRequest::getOwnerId() const {
  return ownerId_;
}

void MigrateAvailableZoneRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string MigrateAvailableZoneRequest::getVswitch() const {
  return vswitch_;
}

void MigrateAvailableZoneRequest::setVswitch(const std::string &vswitch) {
  vswitch_ = vswitch;
  setParameter(std::string("Vswitch"), vswitch);
}

std::string MigrateAvailableZoneRequest::getZoneId() const {
  return zoneId_;
}

void MigrateAvailableZoneRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

