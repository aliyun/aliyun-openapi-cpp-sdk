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

#include <alibabacloud/ens/model/DescribeDataPushResultRequest.h>

using AlibabaCloud::Ens::Model::DescribeDataPushResultRequest;

DescribeDataPushResultRequest::DescribeDataPushResultRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeDataPushResult") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataPushResultRequest::~DescribeDataPushResultRequest() {}

std::string DescribeDataPushResultRequest::getRegionIds() const {
  return regionIds_;
}

void DescribeDataPushResultRequest::setRegionIds(const std::string &regionIds) {
  regionIds_ = regionIds;
  setParameter(std::string("RegionIds"), regionIds);
}

std::string DescribeDataPushResultRequest::getDataVersions() const {
  return dataVersions_;
}

void DescribeDataPushResultRequest::setDataVersions(const std::string &dataVersions) {
  dataVersions_ = dataVersions;
  setParameter(std::string("DataVersions"), dataVersions);
}

std::string DescribeDataPushResultRequest::getMaxDate() const {
  return maxDate_;
}

void DescribeDataPushResultRequest::setMaxDate(const std::string &maxDate) {
  maxDate_ = maxDate;
  setParameter(std::string("MaxDate"), maxDate);
}

int DescribeDataPushResultRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDataPushResultRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeDataPushResultRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDataPushResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDataPushResultRequest::getMinDate() const {
  return minDate_;
}

void DescribeDataPushResultRequest::setMinDate(const std::string &minDate) {
  minDate_ = minDate;
  setParameter(std::string("MinDate"), minDate);
}

std::string DescribeDataPushResultRequest::getAppId() const {
  return appId_;
}

void DescribeDataPushResultRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeDataPushResultRequest::getDataNames() const {
  return dataNames_;
}

void DescribeDataPushResultRequest::setDataNames(const std::string &dataNames) {
  dataNames_ = dataNames;
  setParameter(std::string("DataNames"), dataNames);
}

