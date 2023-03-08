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

#include <alibabacloud/adb/model/ListSparkAppAttemptsRequest.h>

using AlibabaCloud::Adb::Model::ListSparkAppAttemptsRequest;

ListSparkAppAttemptsRequest::ListSparkAppAttemptsRequest()
    : RpcServiceRequest("adb", "2021-12-01", "ListSparkAppAttempts") {
  setMethod(HttpRequest::Method::Post);
}

ListSparkAppAttemptsRequest::~ListSparkAppAttemptsRequest() {}

std::string ListSparkAppAttemptsRequest::getOrderBy() const {
  return orderBy_;
}

void ListSparkAppAttemptsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string ListSparkAppAttemptsRequest::getFilters() const {
  return filters_;
}

void ListSparkAppAttemptsRequest::setFilters(const std::string &filters) {
  filters_ = filters;
  setParameter(std::string("Filters"), filters);
}

long ListSparkAppAttemptsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSparkAppAttemptsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSparkAppAttemptsRequest::getAppId() const {
  return appId_;
}

void ListSparkAppAttemptsRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

long ListSparkAppAttemptsRequest::getPageSize() const {
  return pageSize_;
}

void ListSparkAppAttemptsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

