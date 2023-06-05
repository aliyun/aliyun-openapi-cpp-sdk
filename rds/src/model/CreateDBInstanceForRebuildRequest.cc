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

#include <alibabacloud/rds/model/CreateDBInstanceForRebuildRequest.h>

using AlibabaCloud::Rds::Model::CreateDBInstanceForRebuildRequest;

CreateDBInstanceForRebuildRequest::CreateDBInstanceForRebuildRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateDBInstanceForRebuild") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBInstanceForRebuildRequest::~CreateDBInstanceForRebuildRequest() {}

long CreateDBInstanceForRebuildRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBInstanceForRebuildRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBInstanceForRebuildRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBInstanceForRebuildRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBInstanceForRebuildRequest::getZoneIdSlave1() const {
  return zoneIdSlave1_;
}

void CreateDBInstanceForRebuildRequest::setZoneIdSlave1(const std::string &zoneIdSlave1) {
  zoneIdSlave1_ = zoneIdSlave1;
  setParameter(std::string("ZoneIdSlave1"), zoneIdSlave1);
}

std::string CreateDBInstanceForRebuildRequest::getZoneIdSlave2() const {
  return zoneIdSlave2_;
}

void CreateDBInstanceForRebuildRequest::setZoneIdSlave2(const std::string &zoneIdSlave2) {
  zoneIdSlave2_ = zoneIdSlave2;
  setParameter(std::string("ZoneIdSlave2"), zoneIdSlave2);
}

std::string CreateDBInstanceForRebuildRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBInstanceForRebuildRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBInstanceForRebuildRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBInstanceForRebuildRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBInstanceForRebuildRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateDBInstanceForRebuildRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateDBInstanceForRebuildRequest::getRegionId() const {
  return regionId_;
}

void CreateDBInstanceForRebuildRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBInstanceForRebuildRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateDBInstanceForRebuildRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateDBInstanceForRebuildRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void CreateDBInstanceForRebuildRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::string CreateDBInstanceForRebuildRequest::getDBInstanceNetType() const {
  return dBInstanceNetType_;
}

void CreateDBInstanceForRebuildRequest::setDBInstanceNetType(const std::string &dBInstanceNetType) {
  dBInstanceNetType_ = dBInstanceNetType;
  setParameter(std::string("DBInstanceNetType"), dBInstanceNetType);
}

std::string CreateDBInstanceForRebuildRequest::getPeriod() const {
  return period_;
}

void CreateDBInstanceForRebuildRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateDBInstanceForRebuildRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDBInstanceForRebuildRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDBInstanceForRebuildRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDBInstanceForRebuildRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateDBInstanceForRebuildRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDBInstanceForRebuildRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDBInstanceForRebuildRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDBInstanceForRebuildRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string CreateDBInstanceForRebuildRequest::getSecurityIPList() const {
  return securityIPList_;
}

void CreateDBInstanceForRebuildRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string CreateDBInstanceForRebuildRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBInstanceForRebuildRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDBInstanceForRebuildRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBInstanceForRebuildRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateDBInstanceForRebuildRequest::getZoneId() const {
  return zoneId_;
}

void CreateDBInstanceForRebuildRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDBInstanceForRebuildRequest::getPayType() const {
  return payType_;
}

void CreateDBInstanceForRebuildRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string CreateDBInstanceForRebuildRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void CreateDBInstanceForRebuildRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

