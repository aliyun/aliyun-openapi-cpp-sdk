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

#include <alibabacloud/sddp/model/DescribeTemplateAllRulesRequest.h>

using AlibabaCloud::Sddp::Model::DescribeTemplateAllRulesRequest;

DescribeTemplateAllRulesRequest::DescribeTemplateAllRulesRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeTemplateAllRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTemplateAllRulesRequest::~DescribeTemplateAllRulesRequest() {}

int DescribeTemplateAllRulesRequest::getFeatureType() const {
  return featureType_;
}

void DescribeTemplateAllRulesRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

long DescribeTemplateAllRulesRequest::getTemplateId() const {
  return templateId_;
}

void DescribeTemplateAllRulesRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string DescribeTemplateAllRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeTemplateAllRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeTemplateAllRulesRequest::getLang() const {
  return lang_;
}

void DescribeTemplateAllRulesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

