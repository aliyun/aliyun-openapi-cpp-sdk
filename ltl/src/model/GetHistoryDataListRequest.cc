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

#include <alibabacloud/ltl/model/GetHistoryDataListRequest.h>

using AlibabaCloud::Ltl::Model::GetHistoryDataListRequest;

GetHistoryDataListRequest::GetHistoryDataListRequest()
    : RpcServiceRequest("ltl", "2019-05-10", "GetHistoryDataList") {
  setMethod(HttpRequest::Method::Post);
}

GetHistoryDataListRequest::~GetHistoryDataListRequest() {}

long GetHistoryDataListRequest::getEndTime() const {
  return endTime_;
}

void GetHistoryDataListRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string GetHistoryDataListRequest::getApiVersion() const {
  return apiVersion_;
}

void GetHistoryDataListRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

int GetHistoryDataListRequest::getCurrentPage() const {
  return currentPage_;
}

void GetHistoryDataListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long GetHistoryDataListRequest::getStartTime() const {
  return startTime_;
}

void GetHistoryDataListRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string GetHistoryDataListRequest::getProductKey() const {
  return productKey_;
}

void GetHistoryDataListRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

int GetHistoryDataListRequest::getPageSize() const {
  return pageSize_;
}

void GetHistoryDataListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetHistoryDataListRequest::getKey() const {
  return key_;
}

void GetHistoryDataListRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

