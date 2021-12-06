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

#include <alibabacloud/ecs/model/ModifyAutoSnapshotPolicyRequest.h>

using AlibabaCloud::Ecs::Model::ModifyAutoSnapshotPolicyRequest;

ModifyAutoSnapshotPolicyRequest::ModifyAutoSnapshotPolicyRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAutoSnapshotPolicyRequest::~ModifyAutoSnapshotPolicyRequest() {}

bool ModifyAutoSnapshotPolicyRequest::getDataDiskPolicyEnabled() const {
  return dataDiskPolicyEnabled_;
}

void ModifyAutoSnapshotPolicyRequest::setDataDiskPolicyEnabled(bool dataDiskPolicyEnabled) {
  dataDiskPolicyEnabled_ = dataDiskPolicyEnabled;
  setParameter(std::string("DataDiskPolicyEnabled"), dataDiskPolicyEnabled ? "true" : "false");
}

long ModifyAutoSnapshotPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAutoSnapshotPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifyAutoSnapshotPolicyRequest::getDataDiskPolicyRetentionDays() const {
  return dataDiskPolicyRetentionDays_;
}

void ModifyAutoSnapshotPolicyRequest::setDataDiskPolicyRetentionDays(int dataDiskPolicyRetentionDays) {
  dataDiskPolicyRetentionDays_ = dataDiskPolicyRetentionDays;
  setParameter(std::string("DataDiskPolicyRetentionDays"), std::to_string(dataDiskPolicyRetentionDays));
}

bool ModifyAutoSnapshotPolicyRequest::getSystemDiskPolicyRetentionLastWeek() const {
  return systemDiskPolicyRetentionLastWeek_;
}

void ModifyAutoSnapshotPolicyRequest::setSystemDiskPolicyRetentionLastWeek(bool systemDiskPolicyRetentionLastWeek) {
  systemDiskPolicyRetentionLastWeek_ = systemDiskPolicyRetentionLastWeek;
  setParameter(std::string("SystemDiskPolicyRetentionLastWeek"), systemDiskPolicyRetentionLastWeek ? "true" : "false");
}

int ModifyAutoSnapshotPolicyRequest::getSystemDiskPolicyRetentionDays() const {
  return systemDiskPolicyRetentionDays_;
}

void ModifyAutoSnapshotPolicyRequest::setSystemDiskPolicyRetentionDays(int systemDiskPolicyRetentionDays) {
  systemDiskPolicyRetentionDays_ = systemDiskPolicyRetentionDays;
  setParameter(std::string("SystemDiskPolicyRetentionDays"), std::to_string(systemDiskPolicyRetentionDays));
}

int ModifyAutoSnapshotPolicyRequest::getDataDiskPolicyTimePeriod() const {
  return dataDiskPolicyTimePeriod_;
}

void ModifyAutoSnapshotPolicyRequest::setDataDiskPolicyTimePeriod(int dataDiskPolicyTimePeriod) {
  dataDiskPolicyTimePeriod_ = dataDiskPolicyTimePeriod;
  setParameter(std::string("DataDiskPolicyTimePeriod"), std::to_string(dataDiskPolicyTimePeriod));
}

std::string ModifyAutoSnapshotPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAutoSnapshotPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAutoSnapshotPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAutoSnapshotPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyAutoSnapshotPolicyRequest::getSystemDiskPolicyTimePeriod() const {
  return systemDiskPolicyTimePeriod_;
}

void ModifyAutoSnapshotPolicyRequest::setSystemDiskPolicyTimePeriod(int systemDiskPolicyTimePeriod) {
  systemDiskPolicyTimePeriod_ = systemDiskPolicyTimePeriod;
  setParameter(std::string("SystemDiskPolicyTimePeriod"), std::to_string(systemDiskPolicyTimePeriod));
}

long ModifyAutoSnapshotPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAutoSnapshotPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool ModifyAutoSnapshotPolicyRequest::getDataDiskPolicyRetentionLastWeek() const {
  return dataDiskPolicyRetentionLastWeek_;
}

void ModifyAutoSnapshotPolicyRequest::setDataDiskPolicyRetentionLastWeek(bool dataDiskPolicyRetentionLastWeek) {
  dataDiskPolicyRetentionLastWeek_ = dataDiskPolicyRetentionLastWeek;
  setParameter(std::string("DataDiskPolicyRetentionLastWeek"), dataDiskPolicyRetentionLastWeek ? "true" : "false");
}

bool ModifyAutoSnapshotPolicyRequest::getSystemDiskPolicyEnabled() const {
  return systemDiskPolicyEnabled_;
}

void ModifyAutoSnapshotPolicyRequest::setSystemDiskPolicyEnabled(bool systemDiskPolicyEnabled) {
  systemDiskPolicyEnabled_ = systemDiskPolicyEnabled;
  setParameter(std::string("SystemDiskPolicyEnabled"), systemDiskPolicyEnabled ? "true" : "false");
}

