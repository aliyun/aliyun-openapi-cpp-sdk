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

#include <alibabacloud/adb/model/DescribeDBClusterResourcePoolPerformanceRequest.h>

using AlibabaCloud::Adb::Model::DescribeDBClusterResourcePoolPerformanceRequest;

DescribeDBClusterResourcePoolPerformanceRequest::DescribeDBClusterResourcePoolPerformanceRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeDBClusterResourcePoolPerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterResourcePoolPerformanceRequest::~DescribeDBClusterResourcePoolPerformanceRequest() {}

long DescribeDBClusterResourcePoolPerformanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterResourcePoolPerformanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterResourcePoolPerformanceRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBClusterResourcePoolPerformanceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDBClusterResourcePoolPerformanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterResourcePoolPerformanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterResourcePoolPerformanceRequest::getResourcePools() const {
  return resourcePools_;
}

void DescribeDBClusterResourcePoolPerformanceRequest::setResourcePools(const std::string &resourcePools) {
  resourcePools_ = resourcePools;
  setParameter(std::string("ResourcePools"), resourcePools);
}

std::string DescribeDBClusterResourcePoolPerformanceRequest::getKey() const {
  return key_;
}

void DescribeDBClusterResourcePoolPerformanceRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

std::string DescribeDBClusterResourcePoolPerformanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterResourcePoolPerformanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterResourcePoolPerformanceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterResourcePoolPerformanceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterResourcePoolPerformanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterResourcePoolPerformanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeDBClusterResourcePoolPerformanceRequest::getEndTime() const {
  return endTime_;
}

void DescribeDBClusterResourcePoolPerformanceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDBClusterResourcePoolPerformanceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterResourcePoolPerformanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

