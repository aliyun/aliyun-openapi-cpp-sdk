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

#include <alibabacloud/oceanbasepro/model/DescribeSQLHistoryListRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeSQLHistoryListRequest;

DescribeSQLHistoryListRequest::DescribeSQLHistoryListRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeSQLHistoryList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLHistoryListRequest::~DescribeSQLHistoryListRequest() {}

std::string DescribeSQLHistoryListRequest::getSQLId() const {
  return sQLId_;
}

void DescribeSQLHistoryListRequest::setSQLId(const std::string &sQLId) {
  sQLId_ = sQLId;
  setBodyParameter(std::string("SQLId"), sQLId);
}

std::string DescribeSQLHistoryListRequest::getEndTime() const {
  return endTime_;
}

void DescribeSQLHistoryListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeSQLHistoryListRequest::getStartTime() const {
  return startTime_;
}

void DescribeSQLHistoryListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

int DescribeSQLHistoryListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSQLHistoryListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSQLHistoryListRequest::getTenantId() const {
  return tenantId_;
}

void DescribeSQLHistoryListRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

int DescribeSQLHistoryListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSQLHistoryListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

