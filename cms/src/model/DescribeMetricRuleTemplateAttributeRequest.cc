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

#include <alibabacloud/cms/model/DescribeMetricRuleTemplateAttributeRequest.h>

using AlibabaCloud::Cms::Model::DescribeMetricRuleTemplateAttributeRequest;

DescribeMetricRuleTemplateAttributeRequest::DescribeMetricRuleTemplateAttributeRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeMetricRuleTemplateAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMetricRuleTemplateAttributeRequest::~DescribeMetricRuleTemplateAttributeRequest() {}

std::string DescribeMetricRuleTemplateAttributeRequest::getTemplateId() const {
  return templateId_;
}

void DescribeMetricRuleTemplateAttributeRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string DescribeMetricRuleTemplateAttributeRequest::getName() const {
  return name_;
}

void DescribeMetricRuleTemplateAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

