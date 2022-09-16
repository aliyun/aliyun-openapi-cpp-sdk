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

#include <alibabacloud/ecd/model/DescribeFlowStatisticRequest.h>

using AlibabaCloud::Ecd::Model::DescribeFlowStatisticRequest;

DescribeFlowStatisticRequest::DescribeFlowStatisticRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeFlowStatistic") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFlowStatisticRequest::~DescribeFlowStatisticRequest() {}

std::string DescribeFlowStatisticRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeFlowStatisticRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

int DescribeFlowStatisticRequest::getPeriod() const {
  return period_;
}

void DescribeFlowStatisticRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

int DescribeFlowStatisticRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeFlowStatisticRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeFlowStatisticRequest::getRegionId() const {
  return regionId_;
}

void DescribeFlowStatisticRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeFlowStatisticRequest::getPageSize() const {
  return pageSize_;
}

void DescribeFlowStatisticRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeFlowStatisticRequest::getDesktopId() const {
  return desktopId_;
}

void DescribeFlowStatisticRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

