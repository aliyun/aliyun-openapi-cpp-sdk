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

#include <alibabacloud/dds/model/ModifyDBInstanceNetworkTypeRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceNetworkTypeRequest;

ModifyDBInstanceNetworkTypeRequest::ModifyDBInstanceNetworkTypeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceNetworkType") {
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

std::string ModifyDBInstanceNetworkTypeRequest::getNetworkType() const {
  return networkType_;
}

void ModifyDBInstanceNetworkTypeRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string ModifyDBInstanceNetworkTypeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceNetworkTypeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int ModifyDBInstanceNetworkTypeRequest::getClassicExpiredDays() const {
  return classicExpiredDays_;
}

void ModifyDBInstanceNetworkTypeRequest::setClassicExpiredDays(int classicExpiredDays) {
  classicExpiredDays_ = classicExpiredDays;
  setParameter(std::string("ClassicExpiredDays"), std::to_string(classicExpiredDays));
}

std::string ModifyDBInstanceNetworkTypeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceNetworkTypeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
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

std::string ModifyDBInstanceNetworkTypeRequest::getRetainClassic() const {
  return retainClassic_;
}

void ModifyDBInstanceNetworkTypeRequest::setRetainClassic(const std::string &retainClassic) {
  retainClassic_ = retainClassic;
  setParameter(std::string("RetainClassic"), retainClassic);
}

std::string ModifyDBInstanceNetworkTypeRequest::getVpcId() const {
  return vpcId_;
}

void ModifyDBInstanceNetworkTypeRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string ModifyDBInstanceNetworkTypeRequest::getZoneId() const {
  return zoneId_;
}

void ModifyDBInstanceNetworkTypeRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

