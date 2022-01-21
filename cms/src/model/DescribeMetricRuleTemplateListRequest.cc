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

#include <alibabacloud/cms/model/DescribeMetricRuleTemplateListRequest.h>

using AlibabaCloud::Cms::Model::DescribeMetricRuleTemplateListRequest;

DescribeMetricRuleTemplateListRequest::DescribeMetricRuleTemplateListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeMetricRuleTemplateList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMetricRuleTemplateListRequest::~DescribeMetricRuleTemplateListRequest() {}

bool DescribeMetricRuleTemplateListRequest::getHistory() const {
  return history_;
}

void DescribeMetricRuleTemplateListRequest::setHistory(bool history) {
  history_ = history;
  setParameter(std::string("History"), history ? "true" : "false");
}

long DescribeMetricRuleTemplateListRequest::getTemplateId() const {
  return templateId_;
}

void DescribeMetricRuleTemplateListRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

long DescribeMetricRuleTemplateListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeMetricRuleTemplateListRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeMetricRuleTemplateListRequest::getName() const {
  return name_;
}

void DescribeMetricRuleTemplateListRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long DescribeMetricRuleTemplateListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeMetricRuleTemplateListRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeMetricRuleTemplateListRequest::getKeyword() const {
  return keyword_;
}

void DescribeMetricRuleTemplateListRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

