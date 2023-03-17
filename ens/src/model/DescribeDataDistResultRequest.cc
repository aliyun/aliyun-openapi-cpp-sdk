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

#include <alibabacloud/ens/model/DescribeDataDistResultRequest.h>

using AlibabaCloud::Ens::Model::DescribeDataDistResultRequest;

DescribeDataDistResultRequest::DescribeDataDistResultRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeDataDistResult") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataDistResultRequest::~DescribeDataDistResultRequest() {}

std::string DescribeDataDistResultRequest::getDataVersions() const {
  return dataVersions_;
}

void DescribeDataDistResultRequest::setDataVersions(const std::string &dataVersions) {
  dataVersions_ = dataVersions;
  setParameter(std::string("DataVersions"), dataVersions);
}

std::string DescribeDataDistResultRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeDataDistResultRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string DescribeDataDistResultRequest::getMaxDate() const {
  return maxDate_;
}

void DescribeDataDistResultRequest::setMaxDate(const std::string &maxDate) {
  maxDate_ = maxDate;
  setParameter(std::string("MaxDate"), maxDate);
}

int DescribeDataDistResultRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDataDistResultRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeDataDistResultRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDataDistResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeDataDistResultRequest::std::string> DescribeDataDistResultRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeDataDistResultRequest::setEnsRegionIds(const std::vector<DescribeDataDistResultRequest::std::string> &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  for(int dep1 = 0; dep1 != ensRegionIds.size(); dep1++) {
    setParameter(std::string("EnsRegionIds") + "." + std::to_string(dep1 + 1), ensRegionIds[dep1]);
  }
}

std::string DescribeDataDistResultRequest::getMinDate() const {
  return minDate_;
}

void DescribeDataDistResultRequest::setMinDate(const std::string &minDate) {
  minDate_ = minDate;
  setParameter(std::string("MinDate"), minDate);
}

std::string DescribeDataDistResultRequest::getAppId() const {
  return appId_;
}

void DescribeDataDistResultRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeDataDistResultRequest::getDataNames() const {
  return dataNames_;
}

void DescribeDataDistResultRequest::setDataNames(const std::string &dataNames) {
  dataNames_ = dataNames;
  setParameter(std::string("DataNames"), dataNames);
}

