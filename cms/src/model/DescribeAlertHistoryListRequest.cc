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

#include <alibabacloud/cms/model/DescribeAlertHistoryListRequest.h>

using AlibabaCloud::Cms::Model::DescribeAlertHistoryListRequest;

DescribeAlertHistoryListRequest::DescribeAlertHistoryListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeAlertHistoryList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAlertHistoryListRequest::~DescribeAlertHistoryListRequest() {}

std::string DescribeAlertHistoryListRequest::getRuleName() const {
  return ruleName_;
}

void DescribeAlertHistoryListRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string DescribeAlertHistoryListRequest::getStartTime() const {
  return startTime_;
}

void DescribeAlertHistoryListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeAlertHistoryListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAlertHistoryListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAlertHistoryListRequest::getState() const {
  return state_;
}

void DescribeAlertHistoryListRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string DescribeAlertHistoryListRequest::getMetricName() const {
  return metricName_;
}

void DescribeAlertHistoryListRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeAlertHistoryListRequest::getGroupId() const {
  return groupId_;
}

void DescribeAlertHistoryListRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeAlertHistoryListRequest::getEndTime() const {
  return endTime_;
}

void DescribeAlertHistoryListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

bool DescribeAlertHistoryListRequest::getAscending() const {
  return ascending_;
}

void DescribeAlertHistoryListRequest::setAscending(bool ascending) {
  ascending_ = ascending;
  setParameter(std::string("Ascending"), ascending ? "true" : "false");
}

std::string DescribeAlertHistoryListRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeAlertHistoryListRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

int DescribeAlertHistoryListRequest::getPage() const {
  return page_;
}

void DescribeAlertHistoryListRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string DescribeAlertHistoryListRequest::getRuleId() const {
  return ruleId_;
}

void DescribeAlertHistoryListRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

std::string DescribeAlertHistoryListRequest::getStatus() const {
  return status_;
}

void DescribeAlertHistoryListRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

