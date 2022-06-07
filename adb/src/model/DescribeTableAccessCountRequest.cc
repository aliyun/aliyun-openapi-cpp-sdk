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

#include <alibabacloud/adb/model/DescribeTableAccessCountRequest.h>

using AlibabaCloud::Adb::Model::DescribeTableAccessCountRequest;

DescribeTableAccessCountRequest::DescribeTableAccessCountRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeTableAccessCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTableAccessCountRequest::~DescribeTableAccessCountRequest() {}

std::string DescribeTableAccessCountRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeTableAccessCountRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeTableAccessCountRequest::getStartTime() const {
  return startTime_;
}

void DescribeTableAccessCountRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeTableAccessCountRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTableAccessCountRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTableAccessCountRequest::getRegionId() const {
  return regionId_;
}

void DescribeTableAccessCountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeTableAccessCountRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTableAccessCountRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTableAccessCountRequest::getTableName() const {
  return tableName_;
}

void DescribeTableAccessCountRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string DescribeTableAccessCountRequest::getOrder() const {
  return order_;
}

void DescribeTableAccessCountRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

