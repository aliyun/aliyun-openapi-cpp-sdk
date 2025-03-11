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

#include <alibabacloud/drds/model/DescribeRDSPerformanceRequest.h>

using AlibabaCloud::Drds::Model::DescribeRDSPerformanceRequest;

DescribeRDSPerformanceRequest::DescribeRDSPerformanceRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeRDSPerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRDSPerformanceRequest::~DescribeRDSPerformanceRequest() {}

std::string DescribeRDSPerformanceRequest::getKeys() const {
  return keys_;
}

void DescribeRDSPerformanceRequest::setKeys(const std::string &keys) {
  keys_ = keys;
  setParameter(std::string("Keys"), keys);
}

long DescribeRDSPerformanceRequest::getEndTime() const {
  return endTime_;
}

void DescribeRDSPerformanceRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribeRDSPerformanceRequest::getStartTime() const {
  return startTime_;
}

void DescribeRDSPerformanceRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeRDSPerformanceRequest::getRdsInstanceId() const {
  return rdsInstanceId_;
}

void DescribeRDSPerformanceRequest::setRdsInstanceId(const std::string &rdsInstanceId) {
  rdsInstanceId_ = rdsInstanceId;
  setParameter(std::string("RdsInstanceId"), rdsInstanceId);
}

std::string DescribeRDSPerformanceRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeRDSPerformanceRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeRDSPerformanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRDSPerformanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRDSPerformanceRequest::getDbInstType() const {
  return dbInstType_;
}

void DescribeRDSPerformanceRequest::setDbInstType(const std::string &dbInstType) {
  dbInstType_ = dbInstType;
  setParameter(std::string("DbInstType"), dbInstType);
}

