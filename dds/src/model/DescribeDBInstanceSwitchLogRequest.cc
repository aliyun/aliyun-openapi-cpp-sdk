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

#include <alibabacloud/dds/model/DescribeDBInstanceSwitchLogRequest.h>

using AlibabaCloud::Dds::Model::DescribeDBInstanceSwitchLogRequest;

DescribeDBInstanceSwitchLogRequest::DescribeDBInstanceSwitchLogRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeDBInstanceSwitchLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceSwitchLogRequest::~DescribeDBInstanceSwitchLogRequest() {}

long DescribeDBInstanceSwitchLogRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceSwitchLogRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceSwitchLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBInstanceSwitchLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeDBInstanceSwitchLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBInstanceSwitchLogRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBInstanceSwitchLogRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceSwitchLogRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeDBInstanceSwitchLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBInstanceSwitchLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBInstanceSwitchLogRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceSwitchLogRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceSwitchLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeDBInstanceSwitchLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

