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

#include <alibabacloud/adb/model/DescribeComputeResourceRequest.h>

using AlibabaCloud::Adb::Model::DescribeComputeResourceRequest;

DescribeComputeResourceRequest::DescribeComputeResourceRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeComputeResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeComputeResourceRequest::~DescribeComputeResourceRequest() {}

long DescribeComputeResourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeComputeResourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeComputeResourceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeComputeResourceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeComputeResourceRequest::getRegionId() const {
  return regionId_;
}

void DescribeComputeResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeComputeResourceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeComputeResourceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeComputeResourceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeComputeResourceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeComputeResourceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeComputeResourceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeComputeResourceRequest::getDBClusterVersion() const {
  return dBClusterVersion_;
}

void DescribeComputeResourceRequest::setDBClusterVersion(const std::string &dBClusterVersion) {
  dBClusterVersion_ = dBClusterVersion;
  setParameter(std::string("DBClusterVersion"), dBClusterVersion);
}

long DescribeComputeResourceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeComputeResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeComputeResourceRequest::getZoneId() const {
  return zoneId_;
}

void DescribeComputeResourceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

bool DescribeComputeResourceRequest::getMigrate() const {
  return migrate_;
}

void DescribeComputeResourceRequest::setMigrate(bool migrate) {
  migrate_ = migrate;
  setParameter(std::string("Migrate"), migrate ? "true" : "false");
}

