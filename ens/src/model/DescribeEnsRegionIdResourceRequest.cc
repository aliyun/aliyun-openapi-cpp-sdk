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

#include <alibabacloud/ens/model/DescribeEnsRegionIdResourceRequest.h>

using AlibabaCloud::Ens::Model::DescribeEnsRegionIdResourceRequest;

DescribeEnsRegionIdResourceRequest::DescribeEnsRegionIdResourceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEnsRegionIdResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEnsRegionIdResourceRequest::~DescribeEnsRegionIdResourceRequest() {}

std::string DescribeEnsRegionIdResourceRequest::getIsp() const {
  return isp_;
}

void DescribeEnsRegionIdResourceRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string DescribeEnsRegionIdResourceRequest::getStartTime() const {
  return startTime_;
}

void DescribeEnsRegionIdResourceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeEnsRegionIdResourceRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeEnsRegionIdResourceRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeEnsRegionIdResourceRequest::getOrderByParams() const {
  return orderByParams_;
}

void DescribeEnsRegionIdResourceRequest::setOrderByParams(const std::string &orderByParams) {
  orderByParams_ = orderByParams;
  setParameter(std::string("OrderByParams"), orderByParams);
}

std::string DescribeEnsRegionIdResourceRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEnsRegionIdResourceRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeEnsRegionIdResourceRequest::getEndTime() const {
  return endTime_;
}

void DescribeEnsRegionIdResourceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

