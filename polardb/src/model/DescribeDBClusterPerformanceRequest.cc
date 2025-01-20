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

#include <alibabacloud/polardb/model/DescribeDBClusterPerformanceRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterPerformanceRequest;

DescribeDBClusterPerformanceRequest::DescribeDBClusterPerformanceRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterPerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterPerformanceRequest::~DescribeDBClusterPerformanceRequest() {}

long DescribeDBClusterPerformanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterPerformanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterPerformanceRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBClusterPerformanceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDBClusterPerformanceRequest::getType() const {
  return type_;
}

void DescribeDBClusterPerformanceRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeDBClusterPerformanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterPerformanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterPerformanceRequest::getKey() const {
  return key_;
}

void DescribeDBClusterPerformanceRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

std::string DescribeDBClusterPerformanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterPerformanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterPerformanceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterPerformanceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterPerformanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterPerformanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeDBClusterPerformanceRequest::getEndTime() const {
  return endTime_;
}

void DescribeDBClusterPerformanceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDBClusterPerformanceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterPerformanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBClusterPerformanceRequest::getMetric() const {
  return metric_;
}

void DescribeDBClusterPerformanceRequest::setMetric(const std::string &metric) {
  metric_ = metric;
  setParameter(std::string("Metric"), metric);
}

std::string DescribeDBClusterPerformanceRequest::getInterval() const {
  return interval_;
}

void DescribeDBClusterPerformanceRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

