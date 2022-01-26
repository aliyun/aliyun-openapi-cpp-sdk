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

#include <alibabacloud/cms/model/DescribeMetricRuleListRequest.h>

using AlibabaCloud::Cms::Model::DescribeMetricRuleListRequest;

DescribeMetricRuleListRequest::DescribeMetricRuleListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeMetricRuleList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMetricRuleListRequest::~DescribeMetricRuleListRequest() {}

bool DescribeMetricRuleListRequest::getEnableState() const {
  return enableState_;
}

void DescribeMetricRuleListRequest::setEnableState(bool enableState) {
  enableState_ = enableState;
  setParameter(std::string("EnableState"), enableState ? "true" : "false");
}

std::string DescribeMetricRuleListRequest::getRuleName() const {
  return ruleName_;
}

void DescribeMetricRuleListRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

int DescribeMetricRuleListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeMetricRuleListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeMetricRuleListRequest::getMetricName() const {
  return metricName_;
}

void DescribeMetricRuleListRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string DescribeMetricRuleListRequest::getGroupId() const {
  return groupId_;
}

void DescribeMetricRuleListRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeMetricRuleListRequest::getGroupBy() const {
  return groupBy_;
}

void DescribeMetricRuleListRequest::setGroupBy(const std::string &groupBy) {
  groupBy_ = groupBy;
  setParameter(std::string("GroupBy"), groupBy);
}

std::string DescribeMetricRuleListRequest::getRuleIds() const {
  return ruleIds_;
}

void DescribeMetricRuleListRequest::setRuleIds(const std::string &ruleIds) {
  ruleIds_ = ruleIds;
  setParameter(std::string("RuleIds"), ruleIds);
}

std::string DescribeMetricRuleListRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeMetricRuleListRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string DescribeMetricRuleListRequest::getAlertState() const {
  return alertState_;
}

void DescribeMetricRuleListRequest::setAlertState(const std::string &alertState) {
  alertState_ = alertState;
  setParameter(std::string("AlertState"), alertState);
}

int DescribeMetricRuleListRequest::getPage() const {
  return page_;
}

void DescribeMetricRuleListRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string DescribeMetricRuleListRequest::getDimensions() const {
  return dimensions_;
}

void DescribeMetricRuleListRequest::setDimensions(const std::string &dimensions) {
  dimensions_ = dimensions;
  setParameter(std::string("Dimensions"), dimensions);
}

