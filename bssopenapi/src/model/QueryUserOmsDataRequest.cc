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

#include <alibabacloud/bssopenapi/model/QueryUserOmsDataRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryUserOmsDataRequest;

QueryUserOmsDataRequest::QueryUserOmsDataRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryUserOmsData") {
  setMethod(HttpRequest::Method::Post);
}

QueryUserOmsDataRequest::~QueryUserOmsDataRequest() {}

std::string QueryUserOmsDataRequest::getEndTime() const {
  return endTime_;
}

void QueryUserOmsDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string QueryUserOmsDataRequest::getStartTime() const {
  return startTime_;
}

void QueryUserOmsDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long QueryUserOmsDataRequest::getOwnerId() const {
  return ownerId_;
}

void QueryUserOmsDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryUserOmsDataRequest::getDataType() const {
  return dataType_;
}

void QueryUserOmsDataRequest::setDataType(const std::string &dataType) {
  dataType_ = dataType;
  setParameter(std::string("DataType"), dataType);
}

std::string QueryUserOmsDataRequest::getMarker() const {
  return marker_;
}

void QueryUserOmsDataRequest::setMarker(const std::string &marker) {
  marker_ = marker;
  setParameter(std::string("Marker"), marker);
}

int QueryUserOmsDataRequest::getPageSize() const {
  return pageSize_;
}

void QueryUserOmsDataRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryUserOmsDataRequest::getTable() const {
  return table_;
}

void QueryUserOmsDataRequest::setTable(const std::string &table) {
  table_ = table;
  setParameter(std::string("Table"), table);
}

