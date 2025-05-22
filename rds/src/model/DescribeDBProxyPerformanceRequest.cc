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

#include <alibabacloud/rds/model/DescribeDBProxyPerformanceRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBProxyPerformanceRequest;

DescribeDBProxyPerformanceRequest::DescribeDBProxyPerformanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBProxyPerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBProxyPerformanceRequest::~DescribeDBProxyPerformanceRequest() {}

long DescribeDBProxyPerformanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBProxyPerformanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBProxyPerformanceRequest::getMetricsName() const {
  return metricsName_;
}

void DescribeDBProxyPerformanceRequest::setMetricsName(const std::string &metricsName) {
  metricsName_ = metricsName;
  setParameter(std::string("MetricsName"), metricsName);
}

std::string DescribeDBProxyPerformanceRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBProxyPerformanceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDBProxyPerformanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBProxyPerformanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBProxyPerformanceRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBProxyPerformanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBProxyPerformanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBProxyPerformanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBProxyPerformanceRequest::getDimension() const {
  return dimension_;
}

void DescribeDBProxyPerformanceRequest::setDimension(const std::string &dimension) {
  dimension_ = dimension;
  setParameter(std::string("Dimension"), dimension);
}

std::string DescribeDBProxyPerformanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBProxyPerformanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBProxyPerformanceRequest::getEndTime() const {
  return endTime_;
}

void DescribeDBProxyPerformanceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDBProxyPerformanceRequest::getDBProxyEngineType() const {
  return dBProxyEngineType_;
}

void DescribeDBProxyPerformanceRequest::setDBProxyEngineType(const std::string &dBProxyEngineType) {
  dBProxyEngineType_ = dBProxyEngineType;
  setParameter(std::string("DBProxyEngineType"), dBProxyEngineType);
}

long DescribeDBProxyPerformanceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBProxyPerformanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBProxyPerformanceRequest::getDBProxyInstanceType() const {
  return dBProxyInstanceType_;
}

void DescribeDBProxyPerformanceRequest::setDBProxyInstanceType(const std::string &dBProxyInstanceType) {
  dBProxyInstanceType_ = dBProxyInstanceType;
  setParameter(std::string("DBProxyInstanceType"), dBProxyInstanceType);
}

