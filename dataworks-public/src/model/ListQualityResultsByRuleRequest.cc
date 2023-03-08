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

#include <alibabacloud/dataworks-public/model/ListQualityResultsByRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListQualityResultsByRuleRequest;

ListQualityResultsByRuleRequest::ListQualityResultsByRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListQualityResultsByRule") {
  setMethod(HttpRequest::Method::Post);
}

ListQualityResultsByRuleRequest::~ListQualityResultsByRuleRequest() {}

std::string ListQualityResultsByRuleRequest::getProjectName() const {
  return projectName_;
}

void ListQualityResultsByRuleRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string ListQualityResultsByRuleRequest::getStartDate() const {
  return startDate_;
}

void ListQualityResultsByRuleRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setBodyParameter(std::string("StartDate"), startDate);
}

int ListQualityResultsByRuleRequest::getPageNumber() const {
  return pageNumber_;
}

void ListQualityResultsByRuleRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListQualityResultsByRuleRequest::getEndDate() const {
  return endDate_;
}

void ListQualityResultsByRuleRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setBodyParameter(std::string("EndDate"), endDate);
}

int ListQualityResultsByRuleRequest::getPageSize() const {
  return pageSize_;
}

void ListQualityResultsByRuleRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListQualityResultsByRuleRequest::getRuleId() const {
  return ruleId_;
}

void ListQualityResultsByRuleRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setBodyParameter(std::string("RuleId"), std::to_string(ruleId));
}

long ListQualityResultsByRuleRequest::getProjectId() const {
  return projectId_;
}

void ListQualityResultsByRuleRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

