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

#include <alibabacloud/dms-enterprise/model/DownloadDataTrackResultRequest.h>

using AlibabaCloud::Dms_enterprise::Model::DownloadDataTrackResultRequest;

DownloadDataTrackResultRequest::DownloadDataTrackResultRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "DownloadDataTrackResult") {
  setMethod(HttpRequest::Method::Post);
}

DownloadDataTrackResultRequest::~DownloadDataTrackResultRequest() {}

std::string DownloadDataTrackResultRequest::getFilterStartTime() const {
  return filterStartTime_;
}

void DownloadDataTrackResultRequest::setFilterStartTime(const std::string &filterStartTime) {
  filterStartTime_ = filterStartTime;
  setParameter(std::string("FilterStartTime"), filterStartTime);
}

std::vector<DownloadDataTrackResultRequest::std::string> DownloadDataTrackResultRequest::getFilterTypeList() const {
  return filterTypeList_;
}

void DownloadDataTrackResultRequest::setFilterTypeList(const std::vector<DownloadDataTrackResultRequest::std::string> &filterTypeList) {
  filterTypeList_ = filterTypeList;
  for(int dep1 = 0; dep1 != filterTypeList.size(); dep1++) {
    setParameter(std::string("FilterTypeList") + "." + std::to_string(dep1 + 1), filterTypeList[dep1]);
  }
}

long DownloadDataTrackResultRequest::getTid() const {
  return tid_;
}

void DownloadDataTrackResultRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string DownloadDataTrackResultRequest::getRollbackSQLType() const {
  return rollbackSQLType_;
}

void DownloadDataTrackResultRequest::setRollbackSQLType(const std::string &rollbackSQLType) {
  rollbackSQLType_ = rollbackSQLType;
  setParameter(std::string("RollbackSQLType"), rollbackSQLType);
}

std::vector<DownloadDataTrackResultRequest::long> DownloadDataTrackResultRequest::getEventIdList() const {
  return eventIdList_;
}

void DownloadDataTrackResultRequest::setEventIdList(const std::vector<DownloadDataTrackResultRequest::long> &eventIdList) {
  eventIdList_ = eventIdList;
  for(int dep1 = 0; dep1 != eventIdList.size(); dep1++) {
    setParameter(std::string("EventIdList") + "." + std::to_string(dep1 + 1), std::to_string(eventIdList[dep1]));
  }
}

long DownloadDataTrackResultRequest::getOrderId() const {
  return orderId_;
}

void DownloadDataTrackResultRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

std::vector<DownloadDataTrackResultRequest::std::string> DownloadDataTrackResultRequest::getFilterTableList() const {
  return filterTableList_;
}

void DownloadDataTrackResultRequest::setFilterTableList(const std::vector<DownloadDataTrackResultRequest::std::string> &filterTableList) {
  filterTableList_ = filterTableList;
  for(int dep1 = 0; dep1 != filterTableList.size(); dep1++) {
    setParameter(std::string("FilterTableList") + "." + std::to_string(dep1 + 1), filterTableList[dep1]);
  }
}

std::string DownloadDataTrackResultRequest::getFilterEndTime() const {
  return filterEndTime_;
}

void DownloadDataTrackResultRequest::setFilterEndTime(const std::string &filterEndTime) {
  filterEndTime_ = filterEndTime;
  setParameter(std::string("FilterEndTime"), filterEndTime);
}

DownloadDataTrackResultRequest::ColumnFilter DownloadDataTrackResultRequest::getColumnFilter() const {
  return columnFilter_;
}

void DownloadDataTrackResultRequest::setColumnFilter(const DownloadDataTrackResultRequest::ColumnFilter &columnFilter) {
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

