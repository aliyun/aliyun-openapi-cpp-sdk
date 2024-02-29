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

#include <alibabacloud/sddp/model/DescribeCategoryTemplateListRequest.h>

using AlibabaCloud::Sddp::Model::DescribeCategoryTemplateListRequest;

DescribeCategoryTemplateListRequest::DescribeCategoryTemplateListRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeCategoryTemplateList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCategoryTemplateListRequest::~DescribeCategoryTemplateListRequest() {}

int DescribeCategoryTemplateListRequest::getFeatureType() const {
  return featureType_;
}

void DescribeCategoryTemplateListRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

int DescribeCategoryTemplateListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeCategoryTemplateListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeCategoryTemplateListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeCategoryTemplateListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeCategoryTemplateListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCategoryTemplateListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeCategoryTemplateListRequest::getUsageScenario() const {
  return usageScenario_;
}

void DescribeCategoryTemplateListRequest::setUsageScenario(int usageScenario) {
  usageScenario_ = usageScenario;
  setParameter(std::string("UsageScenario"), std::to_string(usageScenario));
}

std::string DescribeCategoryTemplateListRequest::getLang() const {
  return lang_;
}

void DescribeCategoryTemplateListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

