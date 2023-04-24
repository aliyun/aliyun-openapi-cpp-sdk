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

#include <alibabacloud/dms-enterprise/model/SearchDataTrackResultRequest.h>

using AlibabaCloud::Dms_enterprise::Model::SearchDataTrackResultRequest;

SearchDataTrackResultRequest::SearchDataTrackResultRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "SearchDataTrackResult") {
  setMethod(HttpRequest::Method::Post);
}

SearchDataTrackResultRequest::~SearchDataTrackResultRequest() {}

std::string SearchDataTrackResultRequest::getFilterStartTime() const {
  return filterStartTime_;
}

void SearchDataTrackResultRequest::setFilterStartTime(const std::string &filterStartTime) {
  filterStartTime_ = filterStartTime;
  setParameter(std::string("FilterStartTime"), filterStartTime);
}

std::vector<SearchDataTrackResultRequest::std::string> SearchDataTrackResultRequest::getFilterTypeList() const {
  return filterTypeList_;
}

void SearchDataTrackResultRequest::setFilterTypeList(const std::vector<SearchDataTrackResultRequest::std::string> &filterTypeList) {
  filterTypeList_ = filterTypeList;
  for(int dep1 = 0; dep1 != filterTypeList.size(); dep1++) {
    setParameter(std::string("FilterTypeList") + "." + std::to_string(dep1 + 1), filterTypeList[dep1]);
  }
}

long SearchDataTrackResultRequest::getTid() const {
  return tid_;
}

void SearchDataTrackResultRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long SearchDataTrackResultRequest::getOrderId() const {
  return orderId_;
}

void SearchDataTrackResultRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

std::vector<SearchDataTrackResultRequest::std::string> SearchDataTrackResultRequest::getFilterTableList() const {
  return filterTableList_;
}

void SearchDataTrackResultRequest::setFilterTableList(const std::vector<SearchDataTrackResultRequest::std::string> &filterTableList) {
  filterTableList_ = filterTableList;
  for(int dep1 = 0; dep1 != filterTableList.size(); dep1++) {
    setParameter(std::string("FilterTableList") + "." + std::to_string(dep1 + 1), filterTableList[dep1]);
  }
}

std::string SearchDataTrackResultRequest::getFilterEndTime() const {
  return filterEndTime_;
}

void SearchDataTrackResultRequest::setFilterEndTime(const std::string &filterEndTime) {
  filterEndTime_ = filterEndTime;
  setParameter(std::string("FilterEndTime"), filterEndTime);
}

SearchDataTrackResultRequest::ColumnFilter SearchDataTrackResultRequest::getColumnFilter() const {
  return columnFilter_;
}

void SearchDataTrackResultRequest::setColumnFilter(const SearchDataTrackResultRequest::ColumnFilter &columnFilter) {
  columnFilter_ = columnFilter;
  setParameter(std::string("ColumnFilter") + ".BetweenStart", columnFilter.betweenStart);
  setParameter(std::string("ColumnFilter") + ".BetweenEnd", columnFilter.betweenEnd);
  setParameter(std::string("ColumnFilter") + ".ColumnName", columnFilter.columnName);
  setParameter(std::string("ColumnFilter") + ".Value", columnFilter.value);
  setParameter(std::string("ColumnFilter") + ".Operator", columnFilter._operator);
  for(int dep1 = 0; dep1 != columnFilter.inList.size(); dep1++) {
    setParameter(std::string("ColumnFilter") + ".InList." + std::to_string(dep1 + 1), columnFilter.inList[dep1]);
  }
}

