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

#include <alibabacloud/dataworks-public/model/ListGovernanceRulesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListGovernanceRulesRequest;

ListGovernanceRulesRequest::ListGovernanceRulesRequest()
    : RpcServiceRequest("dataworks-public", "2018-06-01", "ListGovernanceRules") {
  setMethod(HttpRequest::Method::Post);
}

ListGovernanceRulesRequest::~ListGovernanceRulesRequest() {}

std::string ListGovernanceRulesRequest::getIssueType() const {
  return issueType_;
}

void ListGovernanceRulesRequest::setIssueType(const std::string &issueType) {
  issueType_ = issueType;
  setBodyParameter(std::string("IssueType"), issueType);
}

int ListGovernanceRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListGovernanceRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListGovernanceRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListGovernanceRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListGovernanceRulesRequest::getCategory() const {
  return category_;
}

void ListGovernanceRulesRequest::setCategory(const std::string &category) {
  category_ = category;
  setBodyParameter(std::string("Category"), category);
}

