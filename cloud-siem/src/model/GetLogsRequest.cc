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

#include <alibabacloud/cloud-siem/model/GetLogsRequest.h>

using AlibabaCloud::Cloud_siem::Model::GetLogsRequest;

GetLogsRequest::GetLogsRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "GetLogs") {
  setMethod(HttpRequest::Method::Post);
}

GetLogsRequest::~GetLogsRequest() {}

long GetLogsRequest::getTotal() const {
  return total_;
}

void GetLogsRequest::setTotal(long total) {
  total_ = total;
  setBodyParameter(std::string("Total"), std::to_string(total));
}

std::string GetLogsRequest::getRegionId() const {
  return regionId_;
}

void GetLogsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int GetLogsRequest::getPageSize() const {
  return pageSize_;
}

void GetLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int GetLogsRequest::getFrom() const {
  return from_;
}

void GetLogsRequest::setFrom(int from) {
  from_ = from;
  setBodyParameter(std::string("From"), std::to_string(from));
}

int GetLogsRequest::getPageIndex() const {
  return pageIndex_;
}

void GetLogsRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setBodyParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

bool GetLogsRequest::getReverseOrNot() const {
  return reverseOrNot_;
}

void GetLogsRequest::setReverseOrNot(bool reverseOrNot) {
  reverseOrNot_ = reverseOrNot;
  setBodyParameter(std::string("ReverseOrNot"), reverseOrNot ? "true" : "false");
}

std::string GetLogsRequest::getQuery() const {
  return query_;
}

void GetLogsRequest::setQuery(const std::string &query) {
  query_ = query;
  setBodyParameter(std::string("Query"), query);
}

int GetLogsRequest::getTo() const {
  return to_;
}

void GetLogsRequest::setTo(int to) {
  to_ = to;
  setBodyParameter(std::string("To"), std::to_string(to));
}

