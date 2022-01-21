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

#include <alibabacloud/cms/model/DescribeAlertLogHistogramRequest.h>

using AlibabaCloud::Cms::Model::DescribeAlertLogHistogramRequest;

DescribeAlertLogHistogramRequest::DescribeAlertLogHistogramRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeAlertLogHistogram") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlertLogHistogramRequest::~DescribeAlertLogHistogramRequest() {}

std::string DescribeAlertLogHistogramRequest::getSendStatus() const {
  return sendStatus_;
}

void DescribeAlertLogHistogramRequest::setSendStatus(const std::string &sendStatus) {
  sendStatus_ = sendStatus;
  setParameter(std::string("SendStatus"), sendStatus);
}

std::string DescribeAlertLogHistogramRequest::getContactGroup() const {
  return contactGroup_;
}

void DescribeAlertLogHistogramRequest::setContactGroup(const std::string &contactGroup) {
  contactGroup_ = contactGroup;
  setParameter(std::string("ContactGroup"), contactGroup);
}

std::string DescribeAlertLogHistogramRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeAlertLogHistogramRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string DescribeAlertLogHistogramRequest::getRuleName() const {
  return ruleName_;
}

void DescribeAlertLogHistogramRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

long DescribeAlertLogHistogramRequest::getStartTime() const {
  return startTime_;
}

void DescribeAlertLogHistogramRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int DescribeAlertLogHistogramRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAlertLogHistogramRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAlertLogHistogramRequest::getLastMin() const {
  return lastMin_;
}

void DescribeAlertLogHistogramRequest::setLastMin(const std::string &lastMin) {
  lastMin_ = lastMin;
  setParameter(std::string("LastMin"), lastMin);
}

int DescribeAlertLogHistogramRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAlertLogHistogramRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAlertLogHistogramRequest::getMetricName() const {
  return metricName_;
}

void DescribeAlertLogHistogramRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeAlertLogHistogramRequest::getProduct() const {
  return product_;
}

void DescribeAlertLogHistogramRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeAlertLogHistogramRequest::getLevel() const {
  return level_;
}

void DescribeAlertLogHistogramRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeAlertLogHistogramRequest::getGroupId() const {
  return groupId_;
}

void DescribeAlertLogHistogramRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long DescribeAlertLogHistogramRequest::getEndTime() const {
  return endTime_;
}

void DescribeAlertLogHistogramRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeAlertLogHistogramRequest::getGroupBy() const {
  return groupBy_;
}

void DescribeAlertLogHistogramRequest::setGroupBy(const std::string &groupBy) {
  groupBy_ = groupBy;
  setParameter(std::string("GroupBy"), groupBy);
}

std::string DescribeAlertLogHistogramRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeAlertLogHistogramRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

