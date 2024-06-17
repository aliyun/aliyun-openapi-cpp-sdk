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

#include <alibabacloud/polardbx/model/DescribeBackupSetListRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeBackupSetListRequest;

DescribeBackupSetListRequest::DescribeBackupSetListRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeBackupSetList") {
  setMethod(HttpRequest::Method::Get);
}

DescribeBackupSetListRequest::~DescribeBackupSetListRequest() {}

std::string DescribeBackupSetListRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeBackupSetListRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long DescribeBackupSetListRequest::getStartTime() const {
  return startTime_;
}

void DescribeBackupSetListRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int DescribeBackupSetListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeBackupSetListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeBackupSetListRequest::getRegionId() const {
  return regionId_;
}

void DescribeBackupSetListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeBackupSetListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBackupSetListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeBackupSetListRequest::getEndTime() const {
  return endTime_;
}

void DescribeBackupSetListRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeBackupSetListRequest::getDestCrossRegion() const {
  return destCrossRegion_;
}

void DescribeBackupSetListRequest::setDestCrossRegion(const std::string &destCrossRegion) {
  destCrossRegion_ = destCrossRegion;
  setParameter(std::string("DestCrossRegion"), destCrossRegion);
}

