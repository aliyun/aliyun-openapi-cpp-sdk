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

#include <alibabacloud/adb/model/DescribeSQLPatternsRequest.h>

using AlibabaCloud::Adb::Model::DescribeSQLPatternsRequest;

DescribeSQLPatternsRequest::DescribeSQLPatternsRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeSQLPatterns") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLPatternsRequest::~DescribeSQLPatternsRequest() {}

std::string DescribeSQLPatternsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeSQLPatternsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeSQLPatternsRequest::getEndTime() const {
  return endTime_;
}

void DescribeSQLPatternsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSQLPatternsRequest::getStartTime() const {
  return startTime_;
}

void DescribeSQLPatternsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeSQLPatternsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSQLPatternsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSQLPatternsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSQLPatternsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSQLPatternsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSQLPatternsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSQLPatternsRequest::getKeyword() const {
  return keyword_;
}

void DescribeSQLPatternsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeSQLPatternsRequest::getLang() const {
  return lang_;
}

void DescribeSQLPatternsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeSQLPatternsRequest::getOrder() const {
  return order_;
}

void DescribeSQLPatternsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

