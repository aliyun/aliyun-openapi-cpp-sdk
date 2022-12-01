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

#include <alibabacloud/opensearch/model/ListStatisticReportRequest.h>

using AlibabaCloud::OpenSearch::Model::ListStatisticReportRequest;

ListStatisticReportRequest::ListStatisticReportRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/statistic-report/[moduleName]"};
  setMethod(HttpRequest::Method::Get);
}

ListStatisticReportRequest::~ListStatisticReportRequest() {}

std::string ListStatisticReportRequest::getColumns() const {
  return columns_;
}

void ListStatisticReportRequest::setColumns(const std::string &columns) {
  columns_ = columns;
  setParameter(std::string("columns"), columns);
}

std::string ListStatisticReportRequest::getQuery() const {
  return query_;
}

void ListStatisticReportRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("query"), query);
}

int ListStatisticReportRequest::getPageSize() const {
  return pageSize_;
}

void ListStatisticReportRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListStatisticReportRequest::getModuleName() const {
  return moduleName_;
}

void ListStatisticReportRequest::setModuleName(const std::string &moduleName) {
  moduleName_ = moduleName;
  setParameter(std::string("moduleName"), moduleName);
}

int ListStatisticReportRequest::getEndTime() const {
  return endTime_;
}

void ListStatisticReportRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), std::to_string(endTime));
}

int ListStatisticReportRequest::getStartTime() const {
  return startTime_;
}

void ListStatisticReportRequest::setStartTime(int startTime) {
  startTime_ = startTime;
  setParameter(std::string("startTime"), std::to_string(startTime));
}

std::string ListStatisticReportRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void ListStatisticReportRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

int ListStatisticReportRequest::getPageNumber() const {
  return pageNumber_;
}

void ListStatisticReportRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("pageNumber"), std::to_string(pageNumber));
}

