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

#include <alibabacloud/dataworks-public/model/ListGovernanceIssueTasksRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListGovernanceIssueTasksRequest;

ListGovernanceIssueTasksRequest::ListGovernanceIssueTasksRequest()
    : RpcServiceRequest("dataworks-public", "2018-06-01", "ListGovernanceIssueTasks") {
  setMethod(HttpRequest::Method::Post);
}

ListGovernanceIssueTasksRequest::~ListGovernanceIssueTasksRequest() {}

std::string ListGovernanceIssueTasksRequest::getRuleCategory() const {
  return ruleCategory_;
}

void ListGovernanceIssueTasksRequest::setRuleCategory(const std::string &ruleCategory) {
  ruleCategory_ = ruleCategory;
  setBodyParameter(std::string("RuleCategory"), ruleCategory);
}

std::string ListGovernanceIssueTasksRequest::getOwnerId() const {
  return ownerId_;
}

void ListGovernanceIssueTasksRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setBodyParameter(std::string("OwnerId"), ownerId);
}

int ListGovernanceIssueTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void ListGovernanceIssueTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListGovernanceIssueTasksRequest::getBizDate() const {
  return bizDate_;
}

void ListGovernanceIssueTasksRequest::setBizDate(const std::string &bizDate) {
  bizDate_ = bizDate;
  setBodyParameter(std::string("BizDate"), bizDate);
}

int ListGovernanceIssueTasksRequest::getPageSize() const {
  return pageSize_;
}

void ListGovernanceIssueTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListGovernanceIssueTasksRequest::getRuleId() const {
  return ruleId_;
}

void ListGovernanceIssueTasksRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setBodyParameter(std::string("RuleId"), ruleId);
}

long ListGovernanceIssueTasksRequest::getProjectId() const {
  return projectId_;
}

void ListGovernanceIssueTasksRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

