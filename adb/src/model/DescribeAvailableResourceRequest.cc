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

#include <alibabacloud/adb/model/DescribeAvailableResourceRequest.h>

using AlibabaCloud::Adb::Model::DescribeAvailableResourceRequest;

DescribeAvailableResourceRequest::DescribeAvailableResourceRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeAvailableResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableResourceRequest::~DescribeAvailableResourceRequest() {}

long DescribeAvailableResourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAvailableResourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAvailableResourceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAvailableResourceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAvailableResourceRequest::getRegionId() const {
  return regionId_;
}

void DescribeAvailableResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAvailableResourceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAvailableResourceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAvailableResourceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAvailableResourceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeAvailableResourceRequest::getDBClusterVersion() const {
  return dBClusterVersion_;
}

void DescribeAvailableResourceRequest::setDBClusterVersion(const std::string &dBClusterVersion) {
  dBClusterVersion_ = dBClusterVersion;
  setParameter(std::string("DBClusterVersion"), dBClusterVersion);
}

long DescribeAvailableResourceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAvailableResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAvailableResourceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeAvailableResourceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string DescribeAvailableResourceRequest::getZoneId() const {
  return zoneId_;
}

void DescribeAvailableResourceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeAvailableResourceRequest::getChargeType() const {
  return chargeType_;
}

void DescribeAvailableResourceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

