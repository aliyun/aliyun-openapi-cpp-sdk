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

#include <alibabacloud/cms/model/DescribeCustomMetricListRequest.h>

using AlibabaCloud::Cms::Model::DescribeCustomMetricListRequest;

DescribeCustomMetricListRequest::DescribeCustomMetricListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeCustomMetricList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCustomMetricListRequest::~DescribeCustomMetricListRequest() {}

std::string DescribeCustomMetricListRequest::getGroupId() const {
  return groupId_;
}

void DescribeCustomMetricListRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeCustomMetricListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCustomMetricListRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeCustomMetricListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCustomMetricListRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeCustomMetricListRequest::getMetricName() const {
  return metricName_;
}

void DescribeCustomMetricListRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeCustomMetricListRequest::getDimension() const {
  return dimension_;
}

void DescribeCustomMetricListRequest::setDimension(const std::string &dimension) {
  dimension_ = dimension;
  setParameter(std::string("Dimension"), dimension);
}

std::string DescribeCustomMetricListRequest::getMd5() const {
  return md5_;
}

void DescribeCustomMetricListRequest::setMd5(const std::string &md5) {
  md5_ = md5;
  setParameter(std::string("Md5"), md5);
}

