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

#include <alibabacloud/polardbx/model/DescribeBinaryLogListRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeBinaryLogListRequest;

DescribeBinaryLogListRequest::DescribeBinaryLogListRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeBinaryLogList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBinaryLogListRequest::~DescribeBinaryLogListRequest() {}

std::string DescribeBinaryLogListRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeBinaryLogListRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string DescribeBinaryLogListRequest::getStartTime() const {
  return startTime_;
}

void DescribeBinaryLogListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeBinaryLogListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeBinaryLogListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeBinaryLogListRequest::getRegionId() const {
  return regionId_;
}

void DescribeBinaryLogListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeBinaryLogListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBinaryLogListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeBinaryLogListRequest::getEndTime() const {
  return endTime_;
}

void DescribeBinaryLogListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeBinaryLogListRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeBinaryLogListRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

