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

#include <alibabacloud/cms/model/DescribeAlertingMetricRuleResourcesRequest.h>

using AlibabaCloud::Cms::Model::DescribeAlertingMetricRuleResourcesRequest;

DescribeAlertingMetricRuleResourcesRequest::DescribeAlertingMetricRuleResourcesRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeAlertingMetricRuleResources") {
  setMethod(HttpRequest::Method::Get);
}

DescribeAlertingMetricRuleResourcesRequest::~DescribeAlertingMetricRuleResourcesRequest() {}

std::string DescribeAlertingMetricRuleResourcesRequest::getGroupId() const {
  return groupId_;
}

void DescribeAlertingMetricRuleResourcesRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

int DescribeAlertingMetricRuleResourcesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAlertingMetricRuleResourcesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAlertingMetricRuleResourcesRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeAlertingMetricRuleResourcesRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

int DescribeAlertingMetricRuleResourcesRequest::getPage() const {
  return page_;
}

void DescribeAlertingMetricRuleResourcesRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string DescribeAlertingMetricRuleResourcesRequest::getRuleId() const {
  return ruleId_;
}

void DescribeAlertingMetricRuleResourcesRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

std::string DescribeAlertingMetricRuleResourcesRequest::getDimensions() const {
  return dimensions_;
}

void DescribeAlertingMetricRuleResourcesRequest::setDimensions(const std::string &dimensions) {
  dimensions_ = dimensions;
  setParameter(std::string("Dimensions"), dimensions);
}

