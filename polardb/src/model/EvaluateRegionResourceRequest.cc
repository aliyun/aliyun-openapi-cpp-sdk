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

#include <alibabacloud/polardb/model/EvaluateRegionResourceRequest.h>

using AlibabaCloud::Polardb::Model::EvaluateRegionResourceRequest;

EvaluateRegionResourceRequest::EvaluateRegionResourceRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "EvaluateRegionResource") {
  setMethod(HttpRequest::Method::Post);
}

EvaluateRegionResourceRequest::~EvaluateRegionResourceRequest() {}

long EvaluateRegionResourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EvaluateRegionResourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EvaluateRegionResourceRequest::getDBInstanceConnType() const {
  return dBInstanceConnType_;
}

void EvaluateRegionResourceRequest::setDBInstanceConnType(const std::string &dBInstanceConnType) {
  dBInstanceConnType_ = dBInstanceConnType;
  setParameter(std::string("DBInstanceConnType"), dBInstanceConnType);
}

std::string EvaluateRegionResourceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void EvaluateRegionResourceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string EvaluateRegionResourceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void EvaluateRegionResourceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string EvaluateRegionResourceRequest::getDBNodeClass() const {
  return dBNodeClass_;
}

void EvaluateRegionResourceRequest::setDBNodeClass(const std::string &dBNodeClass) {
  dBNodeClass_ = dBNodeClass;
  setParameter(std::string("DBNodeClass"), dBNodeClass);
}

std::string EvaluateRegionResourceRequest::getRegionId() const {
  return regionId_;
}

void EvaluateRegionResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EvaluateRegionResourceRequest::getDispenseMode() const {
  return dispenseMode_;
}

void EvaluateRegionResourceRequest::setDispenseMode(const std::string &dispenseMode) {
  dispenseMode_ = dispenseMode;
  setParameter(std::string("DispenseMode"), dispenseMode);
}

std::string EvaluateRegionResourceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EvaluateRegionResourceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string EvaluateRegionResourceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void EvaluateRegionResourceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long EvaluateRegionResourceRequest::getOwnerId() const {
  return ownerId_;
}

void EvaluateRegionResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string EvaluateRegionResourceRequest::getNeedMaxScaleLink() const {
  return needMaxScaleLink_;
}

void EvaluateRegionResourceRequest::setNeedMaxScaleLink(const std::string &needMaxScaleLink) {
  needMaxScaleLink_ = needMaxScaleLink;
  setParameter(std::string("NeedMaxScaleLink"), needMaxScaleLink);
}

std::string EvaluateRegionResourceRequest::getDBType() const {
  return dBType_;
}

void EvaluateRegionResourceRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

std::string EvaluateRegionResourceRequest::getDBVersion() const {
  return dBVersion_;
}

void EvaluateRegionResourceRequest::setDBVersion(const std::string &dBVersion) {
  dBVersion_ = dBVersion;
  setParameter(std::string("DBVersion"), dBVersion);
}

std::string EvaluateRegionResourceRequest::getSubDomain() const {
  return subDomain_;
}

void EvaluateRegionResourceRequest::setSubDomain(const std::string &subDomain) {
  subDomain_ = subDomain;
  setParameter(std::string("SubDomain"), subDomain);
}

std::string EvaluateRegionResourceRequest::getZoneId() const {
  return zoneId_;
}

void EvaluateRegionResourceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

