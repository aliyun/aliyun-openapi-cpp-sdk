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

#include <alibabacloud/cms/model/DescribeAlertLogCountRequest.h>

using AlibabaCloud::Cms::Model::DescribeAlertLogCountRequest;

DescribeAlertLogCountRequest::DescribeAlertLogCountRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeAlertLogCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlertLogCountRequest::~DescribeAlertLogCountRequest() {}

std::string DescribeAlertLogCountRequest::getSendStatus() const {
  return sendStatus_;
}

void DescribeAlertLogCountRequest::setSendStatus(const std::string &sendStatus) {
  sendStatus_ = sendStatus;
  setParameter(std::string("SendStatus"), sendStatus);
}

std::string DescribeAlertLogCountRequest::getContactGroup() const {
  return contactGroup_;
}

void DescribeAlertLogCountRequest::setContactGroup(const std::string &contactGroup) {
  contactGroup_ = contactGroup;
  setParameter(std::string("ContactGroup"), contactGroup);
}

std::string DescribeAlertLogCountRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeAlertLogCountRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string DescribeAlertLogCountRequest::getRuleName() const {
  return ruleName_;
}

void DescribeAlertLogCountRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

long DescribeAlertLogCountRequest::getStartTime() const {
  return startTime_;
}

void DescribeAlertLogCountRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int DescribeAlertLogCountRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAlertLogCountRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAlertLogCountRequest::getLastMin() const {
  return lastMin_;
}

void DescribeAlertLogCountRequest::setLastMin(const std::string &lastMin) {
  lastMin_ = lastMin;
  setParameter(std::string("LastMin"), lastMin);
}

int DescribeAlertLogCountRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAlertLogCountRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAlertLogCountRequest::getMetricName() const {
  return metricName_;
}

void DescribeAlertLogCountRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeAlertLogCountRequest::getProduct() const {
  return product_;
}

void DescribeAlertLogCountRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeAlertLogCountRequest::getLevel() const {
  return level_;
}

void DescribeAlertLogCountRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeAlertLogCountRequest::getGroupId() const {
  return groupId_;
}

void DescribeAlertLogCountRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long DescribeAlertLogCountRequest::getEndTime() const {
  return endTime_;
}

void DescribeAlertLogCountRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeAlertLogCountRequest::getGroupBy() const {
  return groupBy_;
}

void DescribeAlertLogCountRequest::setGroupBy(const std::string &groupBy) {
  groupBy_ = groupBy;
  setParameter(std::string("GroupBy"), groupBy);
}

std::string DescribeAlertLogCountRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeAlertLogCountRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

