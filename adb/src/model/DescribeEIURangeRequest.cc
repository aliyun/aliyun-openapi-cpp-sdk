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

#include <alibabacloud/adb/model/DescribeEIURangeRequest.h>

using AlibabaCloud::Adb::Model::DescribeEIURangeRequest;

DescribeEIURangeRequest::DescribeEIURangeRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeEIURange") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEIURangeRequest::~DescribeEIURangeRequest() {}

long DescribeEIURangeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeEIURangeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeEIURangeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeEIURangeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeEIURangeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeEIURangeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeEIURangeRequest::getRegionId() const {
  return regionId_;
}

void DescribeEIURangeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeEIURangeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeEIURangeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeEIURangeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeEIURangeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeEIURangeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeEIURangeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeEIURangeRequest::getDBClusterVersion() const {
  return dBClusterVersion_;
}

void DescribeEIURangeRequest::setDBClusterVersion(const std::string &dBClusterVersion) {
  dBClusterVersion_ = dBClusterVersion;
  setParameter(std::string("DBClusterVersion"), dBClusterVersion);
}

long DescribeEIURangeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEIURangeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeEIURangeRequest::getZoneId() const {
  return zoneId_;
}

void DescribeEIURangeRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeEIURangeRequest::getComputeResource() const {
  return computeResource_;
}

void DescribeEIURangeRequest::setComputeResource(const std::string &computeResource) {
  computeResource_ = computeResource;
  setParameter(std::string("ComputeResource"), computeResource);
}

std::string DescribeEIURangeRequest::getOperation() const {
  return operation_;
}

void DescribeEIURangeRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setParameter(std::string("Operation"), operation);
}

