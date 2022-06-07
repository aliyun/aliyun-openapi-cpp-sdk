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

#include <alibabacloud/adb/model/DescribeSqlPatternRequest.h>

using AlibabaCloud::Adb::Model::DescribeSqlPatternRequest;

DescribeSqlPatternRequest::DescribeSqlPatternRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeSqlPattern") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSqlPatternRequest::~DescribeSqlPatternRequest() {}

std::string DescribeSqlPatternRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeSqlPatternRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeSqlPatternRequest::getSqlPattern() const {
  return sqlPattern_;
}

void DescribeSqlPatternRequest::setSqlPattern(const std::string &sqlPattern) {
  sqlPattern_ = sqlPattern;
  setParameter(std::string("SqlPattern"), sqlPattern);
}

std::string DescribeSqlPatternRequest::getStartTime() const {
  return startTime_;
}

void DescribeSqlPatternRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSqlPatternRequest::getType() const {
  return type_;
}

void DescribeSqlPatternRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int DescribeSqlPatternRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSqlPatternRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSqlPatternRequest::getRegionId() const {
  return regionId_;
}

void DescribeSqlPatternRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSqlPatternRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSqlPatternRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSqlPatternRequest::getOrder() const {
  return order_;
}

void DescribeSqlPatternRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

