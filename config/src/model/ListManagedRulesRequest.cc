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

#include <alibabacloud/config/model/ListManagedRulesRequest.h>

using AlibabaCloud::Config::Model::ListManagedRulesRequest;

ListManagedRulesRequest::ListManagedRulesRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListManagedRules") {
  setMethod(HttpRequest::Method::Post);
}

ListManagedRulesRequest::~ListManagedRulesRequest() {}

std::string ListManagedRulesRequest::getResourceTypes() const {
  return resourceTypes_;
}

void ListManagedRulesRequest::setResourceTypes(const std::string &resourceTypes) {
  resourceTypes_ = resourceTypes;
  setParameter(std::string("ResourceTypes"), resourceTypes);
}

std::string ListManagedRulesRequest::getSupportRemediation() const {
  return supportRemediation_;
}

void ListManagedRulesRequest::setSupportRemediation(const std::string &supportRemediation) {
  supportRemediation_ = supportRemediation;
  setParameter(std::string("SupportRemediation"), supportRemediation);
}

int ListManagedRulesRequest::getRiskLevel() const {
  return riskLevel_;
}

void ListManagedRulesRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

int ListManagedRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListManagedRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListManagedRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListManagedRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListManagedRulesRequest::getSupportPreviewManagedRule() const {
  return supportPreviewManagedRule_;
}

void ListManagedRulesRequest::setSupportPreviewManagedRule(const std::string &supportPreviewManagedRule) {
  supportPreviewManagedRule_ = supportPreviewManagedRule;
  setParameter(std::string("SupportPreviewManagedRule"), supportPreviewManagedRule);
}

std::string ListManagedRulesRequest::getKeyword() const {
  return keyword_;
}

void ListManagedRulesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

