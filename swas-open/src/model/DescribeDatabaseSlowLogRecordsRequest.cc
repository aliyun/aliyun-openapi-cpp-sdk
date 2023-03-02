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

#include <alibabacloud/swas-open/model/DescribeDatabaseSlowLogRecordsRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeDatabaseSlowLogRecordsRequest;

DescribeDatabaseSlowLogRecordsRequest::DescribeDatabaseSlowLogRecordsRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeDatabaseSlowLogRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDatabaseSlowLogRecordsRequest::~DescribeDatabaseSlowLogRecordsRequest() {}

std::string DescribeDatabaseSlowLogRecordsRequest::getDatabaseInstanceId() const {
  return databaseInstanceId_;
}

void DescribeDatabaseSlowLogRecordsRequest::setDatabaseInstanceId(const std::string &databaseInstanceId) {
  databaseInstanceId_ = databaseInstanceId;
  setParameter(std::string("DatabaseInstanceId"), databaseInstanceId);
}

std::string DescribeDatabaseSlowLogRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDatabaseSlowLogRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDatabaseSlowLogRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDatabaseSlowLogRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeDatabaseSlowLogRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDatabaseSlowLogRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDatabaseSlowLogRecordsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDatabaseSlowLogRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDatabaseSlowLogRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDatabaseSlowLogRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

