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

#include <alibabacloud/swas-open/model/DescribeDatabaseErrorLogsRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeDatabaseErrorLogsRequest;

DescribeDatabaseErrorLogsRequest::DescribeDatabaseErrorLogsRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeDatabaseErrorLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDatabaseErrorLogsRequest::~DescribeDatabaseErrorLogsRequest() {}

std::string DescribeDatabaseErrorLogsRequest::getDatabaseInstanceId() const {
  return databaseInstanceId_;
}

void DescribeDatabaseErrorLogsRequest::setDatabaseInstanceId(const std::string &databaseInstanceId) {
  databaseInstanceId_ = databaseInstanceId;
  setParameter(std::string("DatabaseInstanceId"), databaseInstanceId);
}

std::string DescribeDatabaseErrorLogsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDatabaseErrorLogsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDatabaseErrorLogsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDatabaseErrorLogsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeDatabaseErrorLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDatabaseErrorLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDatabaseErrorLogsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDatabaseErrorLogsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDatabaseErrorLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDatabaseErrorLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

