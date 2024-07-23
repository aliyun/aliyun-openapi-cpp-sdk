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

#include <alibabacloud/rds/model/ModifyDBInstanceNetworkTypeRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceNetworkTypeRequest;

ModifyDBInstanceNetworkTypeRequest::ModifyDBInstanceNetworkTypeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceNetworkType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceNetworkTypeRequest::~ModifyDBInstanceNetworkTypeRequest() {}

long ModifyDBInstanceNetworkTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceNetworkTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceNetworkTypeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceNetworkTypeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getClassicExpiredDays() const {
  return classicExpiredDays_;
}

void ModifyDBInstanceNetworkTypeRequest::setClassicExpiredDays(const std::string &classicExpiredDays) {
  classicExpiredDays_ = classicExpiredDays;
  setParameter(std::string("ClassicExpiredDays"), classicExpiredDays);
}

std::string ModifyDBInstanceNetworkTypeRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceNetworkTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceNetworkTypeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getReadWriteSplittingPrivateIpAddress() const {
  return readWriteSplittingPrivateIpAddress_;
}

void ModifyDBInstanceNetworkTypeRequest::setReadWriteSplittingPrivateIpAddress(const std::string &readWriteSplittingPrivateIpAddress) {
  readWriteSplittingPrivateIpAddress_ = readWriteSplittingPrivateIpAddress;
  setParameter(std::string("ReadWriteSplittingPrivateIpAddress"), readWriteSplittingPrivateIpAddress);
}

std::string ModifyDBInstanceNetworkTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceNetworkTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceNetworkTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceNetworkTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBInstanceNetworkTypeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceNetworkTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBInstanceNetworkTypeRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ModifyDBInstanceNetworkTypeRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void ModifyDBInstanceNetworkTypeRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string ModifyDBInstanceNetworkTypeRequest::getRetainClassic() const {
  return retainClassic_;
}

void ModifyDBInstanceNetworkTypeRequest::setRetainClassic(const std::string &retainClassic) {
  retainClassic_ = retainClassic;
  setParameter(std::string("RetainClassic"), retainClassic);
}

std::string ModifyDBInstanceNetworkTypeRequest::getVPCId() const {
  return vPCId_;
}

void ModifyDBInstanceNetworkTypeRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void ModifyDBInstanceNetworkTypeRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

int ModifyDBInstanceNetworkTypeRequest::getReadWriteSplittingClassicExpiredDays() const {
  return readWriteSplittingClassicExpiredDays_;
}

void ModifyDBInstanceNetworkTypeRequest::setReadWriteSplittingClassicExpiredDays(int readWriteSplittingClassicExpiredDays) {
  readWriteSplittingClassicExpiredDays_ = readWriteSplittingClassicExpiredDays;
  setParameter(std::string("ReadWriteSplittingClassicExpiredDays"), std::to_string(readWriteSplittingClassicExpiredDays));
}

