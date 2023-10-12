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

#include <alibabacloud/oceanbasepro/model/DescribeParametersHistoryRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeParametersHistoryRequest;

DescribeParametersHistoryRequest::DescribeParametersHistoryRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeParametersHistory") {
  setMethod(HttpRequest::Method::Post);
}

DescribeParametersHistoryRequest::~DescribeParametersHistoryRequest() {}

std::string DescribeParametersHistoryRequest::getStartTime() const {
  return startTime_;
}

void DescribeParametersHistoryRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

int DescribeParametersHistoryRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeParametersHistoryRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeParametersHistoryRequest::getDimensionValue() const {
  return dimensionValue_;
}

void DescribeParametersHistoryRequest::setDimensionValue(const std::string &dimensionValue) {
  dimensionValue_ = dimensionValue;
  setBodyParameter(std::string("DimensionValue"), dimensionValue);
}

int DescribeParametersHistoryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeParametersHistoryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeParametersHistoryRequest::getDimension() const {
  return dimension_;
}

void DescribeParametersHistoryRequest::setDimension(const std::string &dimension) {
  dimension_ = dimension;
  setBodyParameter(std::string("Dimension"), dimension);
}

std::string DescribeParametersHistoryRequest::getEndTime() const {
  return endTime_;
}

void DescribeParametersHistoryRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeParametersHistoryRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeParametersHistoryRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

