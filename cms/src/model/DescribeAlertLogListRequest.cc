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

#include <alibabacloud/cms/model/DescribeAlertLogListRequest.h>

using AlibabaCloud::Cms::Model::DescribeAlertLogListRequest;

DescribeAlertLogListRequest::DescribeAlertLogListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeAlertLogList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlertLogListRequest::~DescribeAlertLogListRequest() {}

std::string DescribeAlertLogListRequest::getSendStatus() const {
  return sendStatus_;
}

void DescribeAlertLogListRequest::setSendStatus(const std::string &sendStatus) {
  sendStatus_ = sendStatus;
  setParameter(std::string("SendStatus"), sendStatus);
}

std::string DescribeAlertLogListRequest::getContactGroup() const {
  return contactGroup_;
}

void DescribeAlertLogListRequest::setContactGroup(const std::string &contactGroup) {
  contactGroup_ = contactGroup;
  setParameter(std::string("ContactGroup"), contactGroup);
}

std::string DescribeAlertLogListRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeAlertLogListRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string DescribeAlertLogListRequest::getRuleName() const {
  return ruleName_;
}

void DescribeAlertLogListRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

long DescribeAlertLogListRequest::getStartTime() const {
  return startTime_;
}

void DescribeAlertLogListRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int DescribeAlertLogListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAlertLogListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAlertLogListRequest::getLastMin() const {
  return lastMin_;
}

void DescribeAlertLogListRequest::setLastMin(const std::string &lastMin) {
  lastMin_ = lastMin;
  setParameter(std::string("LastMin"), lastMin);
}

int DescribeAlertLogListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAlertLogListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAlertLogListRequest::getMetricName() const {
  return metricName_;
}

void DescribeAlertLogListRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeAlertLogListRequest::getProduct() const {
  return product_;
}

void DescribeAlertLogListRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeAlertLogListRequest::getLevel() const {
  return level_;
}

void DescribeAlertLogListRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeAlertLogListRequest::getGroupId() const {
  return groupId_;
}

void DescribeAlertLogListRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long DescribeAlertLogListRequest::getEndTime() const {
  return endTime_;
}

void DescribeAlertLogListRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeAlertLogListRequest::getGroupBy() const {
  return groupBy_;
}

void DescribeAlertLogListRequest::setGroupBy(const std::string &groupBy) {
  groupBy_ = groupBy;
  setParameter(std::string("GroupBy"), groupBy);
}

std::string DescribeAlertLogListRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeAlertLogListRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string DescribeAlertLogListRequest::getRuleId() const {
  return ruleId_;
}

void DescribeAlertLogListRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

