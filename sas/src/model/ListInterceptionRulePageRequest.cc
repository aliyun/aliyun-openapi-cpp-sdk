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

#include <alibabacloud/sas/model/ListInterceptionRulePageRequest.h>

using AlibabaCloud::Sas::Model::ListInterceptionRulePageRequest;

ListInterceptionRulePageRequest::ListInterceptionRulePageRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListInterceptionRulePage") {
  setMethod(HttpRequest::Method::Post);
}

ListInterceptionRulePageRequest::~ListInterceptionRulePageRequest() {}

std::string ListInterceptionRulePageRequest::getCriteria() const {
  return criteria_;
}

void ListInterceptionRulePageRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

std::string ListInterceptionRulePageRequest::getSourceIp() const {
  return sourceIp_;
}

void ListInterceptionRulePageRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListInterceptionRulePageRequest::getPageSize() const {
  return pageSize_;
}

void ListInterceptionRulePageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListInterceptionRulePageRequest::getCriteriaType() const {
  return criteriaType_;
}

void ListInterceptionRulePageRequest::setCriteriaType(const std::string &criteriaType) {
  criteriaType_ = criteriaType;
  setParameter(std::string("CriteriaType"), criteriaType);
}

int ListInterceptionRulePageRequest::getCurrentPage() const {
  return currentPage_;
}

void ListInterceptionRulePageRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListInterceptionRulePageRequest::getClusterId() const {
  return clusterId_;
}

void ListInterceptionRulePageRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

