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

#include <alibabacloud/drds/model/DescribeDrdsSlowSqlsRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsSlowSqlsRequest;

DescribeDrdsSlowSqlsRequest::DescribeDrdsSlowSqlsRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsSlowSqls") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDrdsSlowSqlsRequest::~DescribeDrdsSlowSqlsRequest() {}

long DescribeDrdsSlowSqlsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDrdsSlowSqlsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribeDrdsSlowSqlsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDrdsSlowSqlsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeDrdsSlowSqlsRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeDrdsSlowSqlsRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

int DescribeDrdsSlowSqlsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDrdsSlowSqlsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDrdsSlowSqlsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDrdsSlowSqlsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDrdsSlowSqlsRequest::getDbName() const {
  return dbName_;
}

void DescribeDrdsSlowSqlsRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string DescribeDrdsSlowSqlsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDrdsSlowSqlsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDrdsSlowSqlsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDrdsSlowSqlsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeDrdsSlowSqlsRequest::getExeTime() const {
  return exeTime_;
}

void DescribeDrdsSlowSqlsRequest::setExeTime(long exeTime) {
  exeTime_ = exeTime;
  setParameter(std::string("ExeTime"), std::to_string(exeTime));
}

